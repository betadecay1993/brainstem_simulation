import pickle
import os
from matplotlib import pyplot as plt
import numpy as np

data_dict = pickle.load(open(os.path.join("../", "data", "preI_adaptive.pkl"), "rb+"))

axs = []
lbl = list(data_dict.keys())[1:]
clr = ["b","g","r","c","m","y","k"]
data_max = []
t = data_dict["t"]
data = np.array([data_dict[lbl[i]] for i in range(len(lbl))])

for i in range(len(data)):
    data_max.append(np.max(data[i]))
up_lim = np.max(data_max)

fig, axs = plt.subplots(len(lbl),1, figsize = (10, 10))
plt.subplots_adjust(hspace=0)
for i in range(len(axs)):
    ax = axs[i]
    ax.plot(t, data[i], label = lbl[i], linewidth = 3, color = clr[i])
    ax.grid(True)
    ax.legend(fontsize=15, loc = 1)
    ax.minorticks_on()
    ax.set_ylim([0, 160])
    ax.tick_params(labelsize=12)
plt.suptitle("Firing rates of the respiratory neurons", fontsize = 20)
plt.show()


VN = (6.0/8.0) * data[lbl.index("PostI_e"), :] + (2.0/8.0)*data[lbl.index("RampI"), :]
PN = (6.0/8.0) * data[lbl.index("RampI"), :]
HN = (6.0/8.0) * data[lbl.index("PreI"), :]
axs = []
lbl = ["VN","PN", "HN"]
clr = ["r","g","b"]#["#000000","#ff0000","#a05550","#f00ff0","#a0a0aa","#22f00f","#f0000f"]
data_max = []
data = [VN,PN,HN]
data = data[::-1]
lbl = lbl[::-1]
clr = clr[::-1]
for i in range(len(data)):
    data_max.append(np.max(data[i]))
up_lim = np.max(data_max)


fig, axs = plt.subplots(len(lbl),1, figsize = (10, 5))
plt.subplots_adjust(hspace=0)
for i in range(len(axs)):
    ax = axs[i]
    ax.plot(t, data[i], label = lbl[i], linewidth = 3, color = clr[i])
    ax.grid(True)
    ax.legend(fontsize=15, loc = 1)
    ax.minorticks_on()
    ax.tick_params(labelsize=12)
plt.suptitle("Activity of Phrenic, Vagal and Hypoglossal nerves", fontsize = 20)
plt.show()
