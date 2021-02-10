from brian2 import *
import numpy as np
import os
start_scope()


def plot_vars(statemon, rate, n, m, name, show_variables=True):
    fig = figure(figsize=(8, 4))
    plot(statemon.t[int(duration * n * 10):int(duration * m * 10)] / ms,
         rate.smooth_rate(window='gaussian', width=30 * ms)[int(duration * n * 10):int(duration * m * 10)], linewidth=3,
         label=name)
    xlabel('time (ms)', fontsize=15)
    ylabel('Firing Rate', fontsize=20)
    ylim([0, 1.5 * np.max(
        rate.smooth_rate(window='gaussian', width=30 * ms)[int(duration * n * 10):int(duration * m * 10)] / Hz)])
    plt.grid(True)
    plt.legend(fontsize=15)
    plt.minorticks_on()
    plt.tick_params(labelsize=12)

    if show_variables:
        list_of_params = statemon.record_variables
        for i in range(len(list_of_params)):
            fig = figure(figsize=(8,4))
            plot(statemon.t[int(duration*n*10):int(duration*m*10)]/ms, eval('statemon.'+str(statemon.record_variables[i]))[0][int(duration*n*10):int(duration*m*10)])
            xlabel('time (ms)', fontsize = 15)
            ylabel(str(list_of_params[i]), fontsize = 20)
            # ylim([0,60])
            plt.grid(True)
            plt.minorticks_on()
            plt.tick_params(labelsize=12)
            plt.show()
            # fig.savefig( "img\\" + prefix + '_' + str(name) +'_'+ str(list_of_params[i]) +  '.png', format='png')
    return fig

eqs_bursting = '''
du/dt = a*((b/mV)*v - u)/(1*ms) : 1

dv/dt = ( alpha*(v - U0)**2 /(mV) + Ubase - 0.1*u*mV  - IsynE)/(1*ms)  : volt # - (INaP)
alpha = 0.004 : 1
U0 = -62.5*mV : volt
Ubase = -1.6*mV :volt
a = 0.001 : 1 # interburst interval. The lesser the a, the greater IBI
b = 0.2: 1

IsynE = (gE*wE + g_Edrive)*(v - v_synE): volt
gE = 0.1 : 1
y : 1
v_synE = -10*mV : volt
dwE/dt = -wE/tauE : 1
dwE2/dt = -wE2/tauE : 1
tauE = 10*ms : second
c = -50*mV   : volt 
d : 1
g_Edrive = 0.1*(y) : 1 #exitatory drive #1*t/60000/ms
'''

N = 100

nrn = NeuronGroup(N, eqs_bursting, threshold='v >= 20*mV', reset='v = c; u = u + d', refractory='v >= 20*mV')

nrn.v = -(30 + 0.70 * rand(1, N)) * mV
nrn.u = (0 + 0.30 * rand(1, N)) * 1
nrn.d = (+0.3 + 0.05 * rand(1, N))

nrn_statemon = StateMonitor(nrn, ['v', 'IsynE'], record=True)
nrn_spikemon = SpikeMonitor(nrn)
nrn_rate = PopulationRateMonitor(nrn)

nrn.y = 0.09
run(10000 * ms, report='text')

duration = 10000
name = "bursting neuron"
fig = plot_vars(nrn_statemon, nrn_rate, 0.15, 0.85, name)
file_name = os.path.join("../", "img", f"{name}.pdf")
fig.savefig(file_name, format='pdf')
plt.show()