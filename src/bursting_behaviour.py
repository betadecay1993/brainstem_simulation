import cmath
from matplotlib import pyplot as plt
import numpy as np
import os

alpha = 0.004
U0 = -62.5
Ubase = -0.5
x = 0.06
a = 0.001
b = 0.2
c = -50


def v_rhs(v, u, alpha, U0, Ubase, x):
    return alpha * (v - U0) ** 2 + Ubase - x * u


def u_rhs(v, u, a, b):
    return a * (b * v - u)


def v_nullcline(v, alpha, U0, Ubase, x):
    return (alpha * (v - U0) ** 2 + Ubase) / x


def u_nullcline(v, b):
    return b * v


ylim_up = 40.0
ylim_down = -40
xlim_left = -100
xlim_right = 21

dt = 0.01
t = 0
t_max = 1700
voltage = np.zeros(int(t_max / dt))
u_param = np.zeros(int(t_max / dt))
voltage[0] = -75
u_param[0] = 2.4
i = 0
# run the dynamics of the neuron
# saving resetting times
resets = [0]
while i <= (int(t_max / dt) - 2):
    voltage[i + 1] = voltage[i] + dt * (alpha * (voltage[i] - U0) ** 2 + Ubase - x * u_param[i])
    u_param[i + 1] = u_param[i] + dt * (a * (b * voltage[i] - u_param[i]))
    if voltage[i + 1] >= 20:
        voltage[i + 1] = c
        u_param[i + 1] = u_param[i + 1] + 1.2
        resets.append(i)
    i = i + 1
    t = t + dt
resets.append(i)

fig = plt.figure(figsize=(14, 10))
v = np.linspace(xlim_left, xlim_right, num=500)
V, U = np.meshgrid(np.arange(xlim_left, xlim_right, (xlim_right - xlim_left) / 20.0),
                   np.arange(ylim_down, ylim_up, (ylim_up - ylim_down) / 20.0))

A = v_rhs(V, U, alpha, U0, Ubase, x)
B = u_rhs(V, U, a, b)

Q = plt.quiver(V, U, A, B, units='width', scale = 500)
qk = plt.quiverkey(Q, 0.9, 0.9, 1, r'', labelpos='E', coordinates='figure')
plt.plot(v, u_nullcline(v, b), label='u nullcline', linewidth=3)
plt.plot(v, v_nullcline(v, alpha, U0, Ubase, x), label='V nullcline', linewidth=3)
plt.xlabel('voltage, mV', fontsize=25)
plt.axvline(x=c, color='g', linestyle='--')
plt.legend(fontsize=25)
plt.ylabel('u', fontsize=25)
plt.ylim((ylim_down, ylim_up))
plt.xlim((xlim_left, xlim_right))
plt.tick_params(labelsize=20)

plt.scatter(voltage[0], u_param[0], s=100, color="r", marker="X")
for i in range(len(resets) - 1):
    volt = voltage[resets[i]+1:resets[i+1]]
    up = u_param[resets[i]+1:resets[i+1]]
    plt.plot(volt, up, color='red', alpha=(np.abs( (i+1) / (len(resets) + 1 ))**0.7))

plt.show()

file = os.path.join("../", "img", "Phase-Plane_bursting.pdf")
fig.savefig(file)