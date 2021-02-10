from brian2 import *
import numpy as np
import pickle
# set_device('cpp_standalone') #, build_on_run=False
import os
start_scope()

eqs_adaptive = '''
du/dt = a*((b/mV)*v - u)/(1*ms) : 1

dv/dt = ( alpha*(v - U0)**2 /(mV) + Ubase - x*u*mV  - IsynE - IsynI)/(1*ms)  : volt # - (INaP)
alpha = 0.0125/3 : 1
U0 = -62.5*mV : volt
Ubase = -0*mV :volt
x = 0.06 : 1
a = 0.0011/2 : 1 # interburst interval. The lesser the a, the greater IBI
b = 0.0: 1

IsynE = (gE*(wE+wE2) + g_Edrive)*(v - v_synE): volt
gE = 0.1/3 : 1
g_Edrive = 0.1*(y) : 1 #exitatory drive #1*t/60000/ms
y : 1
v_synE = -10*mV : volt
dwE/dt = -wE/tauE : 1
dwE2/dt = -wE2/tauE : 1
tauE = 10*ms : second

IsynI = gE*(wI_1 + wI_2 + wI_3)*(v - v_synI): volt
gI = 1 : 1
v_synI = -75*mV : volt
dwI_1/dt = -wI_1/tauI : 1
dwI_2/dt = -wI_2/tauI : 1
dwI_3/dt = -wI_3/tauI : 1
tauI = 15*ms : second
c = -55*mV   : volt 
d : 1
'''

eqs_bursting = '''
du/dt = a*((b/mV)*v - u)/(1*ms) : 1

dv/dt = ( alpha*(v - U0)**2 /(mV) + Ubase - 0.1*u*mV  - IsynE - IsynI)/(1*ms)  : volt # - (INaP)
alpha = 0.004 : 1
U0 = -62.5*mV : volt
Ubase = -1.6*mV :volt
a = 0.0011 : 1 # interburst interval. The lesser the a, the greater IBI
b = 0.2: 1

IsynE = (gE*wE + g_Edrive)*(v - v_synE): volt
gE = 0.1 : 1
y : 1
g_Edrive = 0.1*(y) : 1 #exitatory drive #1*t/60000/ms
v_synE = -10*mV : volt
dwE/dt = -wE/tauE : 1
tauE = 10*ms : second

IsynI = gE*(wI_1 + wI_2 + wI_3)*(v - v_synI): volt
gI = 0.1 : 1
v_synI = -75*mV : volt
dwI_1/dt = -wI_1/tauI : 1
dwI_2/dt = -wI_2/tauI : 1
dwI_3/dt = -wI_3/tauI : 1
tauI = 15*ms : second
c = -50*mV   : volt #- (1*mV)*(u + 12.5)
d : 1
'''

N = 100

PreI = NeuronGroup(N, eqs_bursting, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
PreI.v = -(30 + 0.70*rand(1,N))*mV
PreI.u = (0 + 0.30*rand(1,N))*1
PreI.d = (+0.3 + 0.05*rand(1,N))

EarlyI1 = NeuronGroup(N, eqs_adaptive, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
EarlyI1.d = (+0.5 + 0.05*rand(1,N))*1
EarlyI1.v = -(30 + 0.70*rand(1,N))*mV
EarlyI1.u = (0 + 0.30*rand(1,N))*1

AugE = NeuronGroup(N, eqs_adaptive, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
AugE.d = (+0.5 + 0.05*rand(1,N))*1
AugE.v = -(30 + 0.70*rand(1,N))*mV
AugE.u = (0 + 0.30*rand(1,N))*1

PostI = NeuronGroup(N, eqs_adaptive, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
PostI.d  = (+0.5 + 0.05*rand(1,N))*1
PostI.v  = -(30 + 0.70*rand(1,N))*mV
PostI.u  = (0 + 0.30*rand(1,N))*1

PostI_e = NeuronGroup(N, eqs_adaptive, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
PostI_e.d  = (+0.5 + 0.05*rand(1,N))*1
PostI_e.v  = -(30 + 0.70*rand(1,N))*mV
PostI_e.u  = (0 + 0.30*rand(1,N))*1

RampI = NeuronGroup(N, eqs_adaptive, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
RampI.d  = (+0.5 + 0.05*rand(1,N))*1
RampI.v  = -(30 + 0.70*rand(1,N))*mV
RampI.u  = (0 + 0.30*rand(1,N))*1

EarlyI2 = NeuronGroup(N, eqs_adaptive, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory = 'v >= 20*mV') # method = 'exponential_euler'
EarlyI2.d  = (+0.5 + 0.05*rand(1,N))*1
EarlyI2.v  = -(30 + 0.70*rand(1,N))*mV
EarlyI2.u  = (0 + 0.30*rand(1,N))*1

#connecting populations
PreI_PreI = Synapses(PreI, PreI,  on_pre='wE_post += 0.08*(1+(0.1 * randn()))')
PreI_PreI.connect(p=0.125)
PreI_PreI.delay = 2*ms

PreI_EarlyI1 = Synapses(PreI, EarlyI1,  on_pre='wE_post += 0.08*(1+(0.1 * randn()))')
PreI_EarlyI1.connect(p=0.8)

AugE_PreI = Synapses(AugE, PreI,  on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))') # 0.02
AugE_PreI.connect(p=0.08)

# PreI_AugE = Synapses(PreI,AugE,  on_pre='wI_3_post += 0.001')
# PreI_AugE.connect(p=1)


AugE_EarlyI1 = Synapses(AugE, EarlyI1,  on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
AugE_EarlyI1.connect(p=0.5)

EarlyI1_AugE = Synapses(EarlyI1, AugE,  on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
EarlyI1_AugE.connect(p=0.5)

# EarlyI1_PreI = Synapses(EarlyI1, PreI,  on_pre='wI_3_post += 0.08*(1+(0.1 * randn()))')
# EarlyI1_PreI.connect(p=0.05)
################################

PostI_EarlyI1 = Synapses(PostI, EarlyI1,  on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))')
PostI_EarlyI1.connect(p=0.5)

PostI_AugE = Synapses(PostI, AugE,  on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))')
PostI_AugE.connect(p=0.7)

EarlyI1_PostI = Synapses(EarlyI1, PostI,  on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
EarlyI1_PostI.connect(p=0.5)

AugE_PostI = Synapses(AugE, PostI,  on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))')
AugE_PostI.connect(p=0.1)

PostI_PreI = Synapses(PostI, PreI,  on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
PostI_PreI.connect(p=0.15)

# AugE_AugE = Synapses(AugE, AugE,  on_pre='wE_post += 0.08*(1+(0.1 * randn()))')
# AugE_AugE.connect(p=0.5, condition = 'i!=j')


#####################################
AugE_PostI_e = Synapses(AugE, PostI_e, on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
AugE_PostI_e.connect(p=0.13)

EarlyI1_PostI_e = Synapses(EarlyI1, PostI_e, on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))')
EarlyI1_PostI_e.connect(p=0.5)

PreI_RampI = Synapses(PreI, RampI, on_pre='wE_post += 0.08*(1+(0.1 * randn()))')
PreI_RampI.connect(p=0.625)

EarlyI1_RampI = Synapses(EarlyI1, RampI, on_pre='wE2_post += 0.08*(1+(0.1 * randn()))')
EarlyI1_RampI.connect(p=0.625)

AugE_RampI = Synapses(AugE, RampI, on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
AugE_RampI.connect(p=0.5)

PostI_RampI = Synapses(PostI, RampI, on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))')
PostI_RampI.connect(p=0.2)

EarlyI2_RampI = Synapses(EarlyI2, RampI, on_pre='wI_3_post += 0.08*(1+(0.1 * randn()))')
EarlyI2_RampI.connect(p=0.8)

AugE_EarlyI2 = Synapses(AugE, EarlyI2, on_pre='wI_1_post += 0.08*(1+(0.1 * randn()))')
AugE_EarlyI2.connect(p=0.2)

PostI_EarlyI2 = Synapses(PostI, EarlyI2, on_pre='wI_2_post += 0.08*(1+(0.1 * randn()))')
PostI_EarlyI2.connect(p=0.2)

#monitorings, spikes etc.
PreI_statemon = StateMonitor(PreI, ['v','wE','wI_1','wI_2','wI_3'], record = False)
PreI_spikemon = SpikeMonitor(PreI)
PreI_rate = PopulationRateMonitor(PreI)

EarlyI1_statemon = StateMonitor(EarlyI1, ['v','wE','wI_1','wI_2','wI_3'], record = False)
EarlyI1_spikemon = SpikeMonitor(EarlyI1)
EarlyI1_rate = PopulationRateMonitor(EarlyI1)

AugE_statemon = StateMonitor(AugE, ['v','wE','wI_1','wI_2','wI_3'], record = False)
AugE_spikemon = SpikeMonitor(AugE)
AugE_rate = PopulationRateMonitor(AugE)

PostI_statemon = StateMonitor(PostI, ['v','wE','wI_1','wI_2','wI_3'], record = False)
PostI_spikemon = SpikeMonitor(PostI)
PostI_rate = PopulationRateMonitor(PostI)

EarlyI2_statemon = StateMonitor(EarlyI2, ['v','wE','wI_1','wI_2','wI_3'], record = False)
EarlyI2_spikemon = SpikeMonitor(EarlyI2)
EarlyI2_rate = PopulationRateMonitor(EarlyI2)

RampI_statemon = StateMonitor(RampI, ['v','wE','wE2','wI_1','wI_2','wI_3'], record = False)
RampI_spikemon = SpikeMonitor(RampI)
RampI_rate = PopulationRateMonitor(RampI)

PostI_e_statemon = StateMonitor(PostI_e, ['v','wE','wI_1','wI_2','wI_3'], record = False)
PostI_e_spikemon = SpikeMonitor(PostI_e)
PostI_e_rate = PopulationRateMonitor(PostI_e)
#running the simulation


AugE.y = 0 + 1 + 0.8
EarlyI1.y = 0 + 0.6 + 0.6
PreI.y = 0.1 + 0.2 + 0.3
PostI.y = 0 + 0.0 + 0.9
PostI_e.y = 0 + 0.0 + 0.6
RampI.y = 0 + 0.0 + 0.0
EarlyI2.y = 0 + 0.0 + 0.2
duration = 25000
run(duration*ms, report='text')
# device.build(directory='output', compile=True, run=True, debug=False)

n = 0.2
m = 0.9

t = PreI_statemon.t[int(duration*n*10):int(duration*m*10)]/ms
y1 = PreI_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz
y2 = EarlyI1_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz
y3 = PostI_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz
y4 = PostI_e_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz
y5 = AugE_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz
y6 = RampI_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz
y7 = EarlyI2_rate.smooth_rate(window='gaussian', width= 30*ms)[int(duration*n*10):int(duration*m*10)]/Hz

data_dict = {}
data_dict["t"] = t
data_dict["PreI"] = y1
data_dict["EarlyI1"] = y2
data_dict["PostI"] = y3
data_dict["PostI_e"] = y4
data_dict["AugE"] = y5
data_dict["RampI"] = y6
data_dict["EarlyI2"] = y7

pickle.dump(data_dict, open(os.path.join("../", "data", "eupneic_breathing.pkl"), "wb+"))
