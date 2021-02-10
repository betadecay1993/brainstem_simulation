
#include "objects.h"
#include "synapses_classes.h"
#include "brianlib/clocks.h"
#include "brianlib/dynamic_array.h"
#include "brianlib/stdint_compat.h"
#include "network.h"
#include "randomkit.h"
#include<vector>
#include<iostream>
#include<fstream>

namespace brian {

std::vector< rk_state* > _mersenne_twister_states;

//////////////// networks /////////////////
Network magicnetwork;

//////////////// arrays ///////////////////
double * _array_defaultclock_dt;
const int _num__array_defaultclock_dt = 1;
double * _array_defaultclock_t;
const int _num__array_defaultclock_t = 1;
int64_t * _array_defaultclock_timestep;
const int _num__array_defaultclock_timestep = 1;
int32_t * _array_neurongroup_1__spikespace;
const int _num__array_neurongroup_1__spikespace = 101;
double * _array_neurongroup_1_d;
const int _num__array_neurongroup_1_d = 100;
int32_t * _array_neurongroup_1_i;
const int _num__array_neurongroup_1_i = 100;
double * _array_neurongroup_1_lastspike;
const int _num__array_neurongroup_1_lastspike = 100;
char * _array_neurongroup_1_not_refractory;
const int _num__array_neurongroup_1_not_refractory = 100;
double * _array_neurongroup_1_u;
const int _num__array_neurongroup_1_u = 100;
double * _array_neurongroup_1_v;
const int _num__array_neurongroup_1_v = 100;
double * _array_neurongroup_1_wE;
const int _num__array_neurongroup_1_wE = 100;
double * _array_neurongroup_1_wE2;
const int _num__array_neurongroup_1_wE2 = 100;
double * _array_neurongroup_1_wI_1;
const int _num__array_neurongroup_1_wI_1 = 100;
double * _array_neurongroup_1_wI_2;
const int _num__array_neurongroup_1_wI_2 = 100;
double * _array_neurongroup_1_wI_3;
const int _num__array_neurongroup_1_wI_3 = 100;
double * _array_neurongroup_1_y;
const int _num__array_neurongroup_1_y = 100;
int32_t * _array_neurongroup_2__spikespace;
const int _num__array_neurongroup_2__spikespace = 101;
double * _array_neurongroup_2_d;
const int _num__array_neurongroup_2_d = 100;
int32_t * _array_neurongroup_2_i;
const int _num__array_neurongroup_2_i = 100;
double * _array_neurongroup_2_lastspike;
const int _num__array_neurongroup_2_lastspike = 100;
char * _array_neurongroup_2_not_refractory;
const int _num__array_neurongroup_2_not_refractory = 100;
double * _array_neurongroup_2_u;
const int _num__array_neurongroup_2_u = 100;
double * _array_neurongroup_2_v;
const int _num__array_neurongroup_2_v = 100;
double * _array_neurongroup_2_wE;
const int _num__array_neurongroup_2_wE = 100;
double * _array_neurongroup_2_wE2;
const int _num__array_neurongroup_2_wE2 = 100;
double * _array_neurongroup_2_wI_1;
const int _num__array_neurongroup_2_wI_1 = 100;
double * _array_neurongroup_2_wI_2;
const int _num__array_neurongroup_2_wI_2 = 100;
double * _array_neurongroup_2_wI_3;
const int _num__array_neurongroup_2_wI_3 = 100;
double * _array_neurongroup_2_y;
const int _num__array_neurongroup_2_y = 100;
int32_t * _array_neurongroup_3__spikespace;
const int _num__array_neurongroup_3__spikespace = 101;
double * _array_neurongroup_3_d;
const int _num__array_neurongroup_3_d = 100;
int32_t * _array_neurongroup_3_i;
const int _num__array_neurongroup_3_i = 100;
double * _array_neurongroup_3_lastspike;
const int _num__array_neurongroup_3_lastspike = 100;
char * _array_neurongroup_3_not_refractory;
const int _num__array_neurongroup_3_not_refractory = 100;
double * _array_neurongroup_3_u;
const int _num__array_neurongroup_3_u = 100;
double * _array_neurongroup_3_v;
const int _num__array_neurongroup_3_v = 100;
double * _array_neurongroup_3_wE;
const int _num__array_neurongroup_3_wE = 100;
double * _array_neurongroup_3_wE2;
const int _num__array_neurongroup_3_wE2 = 100;
double * _array_neurongroup_3_wI_1;
const int _num__array_neurongroup_3_wI_1 = 100;
double * _array_neurongroup_3_wI_2;
const int _num__array_neurongroup_3_wI_2 = 100;
double * _array_neurongroup_3_wI_3;
const int _num__array_neurongroup_3_wI_3 = 100;
double * _array_neurongroup_3_y;
const int _num__array_neurongroup_3_y = 100;
int32_t * _array_neurongroup_4__spikespace;
const int _num__array_neurongroup_4__spikespace = 101;
double * _array_neurongroup_4_d;
const int _num__array_neurongroup_4_d = 100;
int32_t * _array_neurongroup_4_i;
const int _num__array_neurongroup_4_i = 100;
double * _array_neurongroup_4_lastspike;
const int _num__array_neurongroup_4_lastspike = 100;
char * _array_neurongroup_4_not_refractory;
const int _num__array_neurongroup_4_not_refractory = 100;
double * _array_neurongroup_4_u;
const int _num__array_neurongroup_4_u = 100;
double * _array_neurongroup_4_v;
const int _num__array_neurongroup_4_v = 100;
double * _array_neurongroup_4_wE;
const int _num__array_neurongroup_4_wE = 100;
double * _array_neurongroup_4_wE2;
const int _num__array_neurongroup_4_wE2 = 100;
double * _array_neurongroup_4_wI_1;
const int _num__array_neurongroup_4_wI_1 = 100;
double * _array_neurongroup_4_wI_2;
const int _num__array_neurongroup_4_wI_2 = 100;
double * _array_neurongroup_4_wI_3;
const int _num__array_neurongroup_4_wI_3 = 100;
double * _array_neurongroup_4_y;
const int _num__array_neurongroup_4_y = 100;
int32_t * _array_neurongroup_5__spikespace;
const int _num__array_neurongroup_5__spikespace = 101;
double * _array_neurongroup_5_d;
const int _num__array_neurongroup_5_d = 100;
int32_t * _array_neurongroup_5_i;
const int _num__array_neurongroup_5_i = 100;
double * _array_neurongroup_5_lastspike;
const int _num__array_neurongroup_5_lastspike = 100;
char * _array_neurongroup_5_not_refractory;
const int _num__array_neurongroup_5_not_refractory = 100;
double * _array_neurongroup_5_u;
const int _num__array_neurongroup_5_u = 100;
double * _array_neurongroup_5_v;
const int _num__array_neurongroup_5_v = 100;
double * _array_neurongroup_5_wE;
const int _num__array_neurongroup_5_wE = 100;
double * _array_neurongroup_5_wE2;
const int _num__array_neurongroup_5_wE2 = 100;
double * _array_neurongroup_5_wI_1;
const int _num__array_neurongroup_5_wI_1 = 100;
double * _array_neurongroup_5_wI_2;
const int _num__array_neurongroup_5_wI_2 = 100;
double * _array_neurongroup_5_wI_3;
const int _num__array_neurongroup_5_wI_3 = 100;
double * _array_neurongroup_5_y;
const int _num__array_neurongroup_5_y = 100;
int32_t * _array_neurongroup_6__spikespace;
const int _num__array_neurongroup_6__spikespace = 101;
double * _array_neurongroup_6_d;
const int _num__array_neurongroup_6_d = 100;
int32_t * _array_neurongroup_6_i;
const int _num__array_neurongroup_6_i = 100;
double * _array_neurongroup_6_lastspike;
const int _num__array_neurongroup_6_lastspike = 100;
char * _array_neurongroup_6_not_refractory;
const int _num__array_neurongroup_6_not_refractory = 100;
double * _array_neurongroup_6_u;
const int _num__array_neurongroup_6_u = 100;
double * _array_neurongroup_6_v;
const int _num__array_neurongroup_6_v = 100;
double * _array_neurongroup_6_wE;
const int _num__array_neurongroup_6_wE = 100;
double * _array_neurongroup_6_wE2;
const int _num__array_neurongroup_6_wE2 = 100;
double * _array_neurongroup_6_wI_1;
const int _num__array_neurongroup_6_wI_1 = 100;
double * _array_neurongroup_6_wI_2;
const int _num__array_neurongroup_6_wI_2 = 100;
double * _array_neurongroup_6_wI_3;
const int _num__array_neurongroup_6_wI_3 = 100;
double * _array_neurongroup_6_y;
const int _num__array_neurongroup_6_y = 100;
int32_t * _array_neurongroup__spikespace;
const int _num__array_neurongroup__spikespace = 101;
double * _array_neurongroup_d;
const int _num__array_neurongroup_d = 100;
int32_t * _array_neurongroup_i;
const int _num__array_neurongroup_i = 100;
double * _array_neurongroup_lastspike;
const int _num__array_neurongroup_lastspike = 100;
char * _array_neurongroup_not_refractory;
const int _num__array_neurongroup_not_refractory = 100;
double * _array_neurongroup_u;
const int _num__array_neurongroup_u = 100;
double * _array_neurongroup_v;
const int _num__array_neurongroup_v = 100;
double * _array_neurongroup_wE;
const int _num__array_neurongroup_wE = 100;
double * _array_neurongroup_wI_1;
const int _num__array_neurongroup_wI_1 = 100;
double * _array_neurongroup_wI_2;
const int _num__array_neurongroup_wI_2 = 100;
double * _array_neurongroup_wI_3;
const int _num__array_neurongroup_wI_3 = 100;
double * _array_neurongroup_y;
const int _num__array_neurongroup_y = 100;
int32_t * _array_ratemonitor_1_N;
const int _num__array_ratemonitor_1_N = 1;
int32_t * _array_ratemonitor_2_N;
const int _num__array_ratemonitor_2_N = 1;
int32_t * _array_ratemonitor_3_N;
const int _num__array_ratemonitor_3_N = 1;
int32_t * _array_ratemonitor_4_N;
const int _num__array_ratemonitor_4_N = 1;
int32_t * _array_ratemonitor_5_N;
const int _num__array_ratemonitor_5_N = 1;
int32_t * _array_ratemonitor_6_N;
const int _num__array_ratemonitor_6_N = 1;
int32_t * _array_ratemonitor_N;
const int _num__array_ratemonitor_N = 1;
int32_t * _array_spikemonitor_1__source_idx;
const int _num__array_spikemonitor_1__source_idx = 100;
int32_t * _array_spikemonitor_1_count;
const int _num__array_spikemonitor_1_count = 100;
int32_t * _array_spikemonitor_1_N;
const int _num__array_spikemonitor_1_N = 1;
int32_t * _array_spikemonitor_2__source_idx;
const int _num__array_spikemonitor_2__source_idx = 100;
int32_t * _array_spikemonitor_2_count;
const int _num__array_spikemonitor_2_count = 100;
int32_t * _array_spikemonitor_2_N;
const int _num__array_spikemonitor_2_N = 1;
int32_t * _array_spikemonitor_3__source_idx;
const int _num__array_spikemonitor_3__source_idx = 100;
int32_t * _array_spikemonitor_3_count;
const int _num__array_spikemonitor_3_count = 100;
int32_t * _array_spikemonitor_3_N;
const int _num__array_spikemonitor_3_N = 1;
int32_t * _array_spikemonitor_4__source_idx;
const int _num__array_spikemonitor_4__source_idx = 100;
int32_t * _array_spikemonitor_4_count;
const int _num__array_spikemonitor_4_count = 100;
int32_t * _array_spikemonitor_4_N;
const int _num__array_spikemonitor_4_N = 1;
int32_t * _array_spikemonitor_5__source_idx;
const int _num__array_spikemonitor_5__source_idx = 100;
int32_t * _array_spikemonitor_5_count;
const int _num__array_spikemonitor_5_count = 100;
int32_t * _array_spikemonitor_5_N;
const int _num__array_spikemonitor_5_N = 1;
int32_t * _array_spikemonitor_6__source_idx;
const int _num__array_spikemonitor_6__source_idx = 100;
int32_t * _array_spikemonitor_6_count;
const int _num__array_spikemonitor_6_count = 100;
int32_t * _array_spikemonitor_6_N;
const int _num__array_spikemonitor_6_N = 1;
int32_t * _array_spikemonitor__source_idx;
const int _num__array_spikemonitor__source_idx = 100;
int32_t * _array_spikemonitor_count;
const int _num__array_spikemonitor_count = 100;
int32_t * _array_spikemonitor_N;
const int _num__array_spikemonitor_N = 1;
int32_t * _array_statemonitor_1__indices;
const int _num__array_statemonitor_1__indices = 0;
int32_t * _array_statemonitor_1_N;
const int _num__array_statemonitor_1_N = 1;
double * _array_statemonitor_1_v;
const int _num__array_statemonitor_1_v = (0, 0);
double * _array_statemonitor_1_wE;
const int _num__array_statemonitor_1_wE = (0, 0);
double * _array_statemonitor_1_wI_1;
const int _num__array_statemonitor_1_wI_1 = (0, 0);
double * _array_statemonitor_1_wI_2;
const int _num__array_statemonitor_1_wI_2 = (0, 0);
double * _array_statemonitor_1_wI_3;
const int _num__array_statemonitor_1_wI_3 = (0, 0);
int32_t * _array_statemonitor_2__indices;
const int _num__array_statemonitor_2__indices = 0;
int32_t * _array_statemonitor_2_N;
const int _num__array_statemonitor_2_N = 1;
double * _array_statemonitor_2_v;
const int _num__array_statemonitor_2_v = (0, 0);
double * _array_statemonitor_2_wE;
const int _num__array_statemonitor_2_wE = (0, 0);
double * _array_statemonitor_2_wI_1;
const int _num__array_statemonitor_2_wI_1 = (0, 0);
double * _array_statemonitor_2_wI_2;
const int _num__array_statemonitor_2_wI_2 = (0, 0);
double * _array_statemonitor_2_wI_3;
const int _num__array_statemonitor_2_wI_3 = (0, 0);
int32_t * _array_statemonitor_3__indices;
const int _num__array_statemonitor_3__indices = 0;
int32_t * _array_statemonitor_3_N;
const int _num__array_statemonitor_3_N = 1;
double * _array_statemonitor_3_v;
const int _num__array_statemonitor_3_v = (0, 0);
double * _array_statemonitor_3_wE;
const int _num__array_statemonitor_3_wE = (0, 0);
double * _array_statemonitor_3_wI_1;
const int _num__array_statemonitor_3_wI_1 = (0, 0);
double * _array_statemonitor_3_wI_2;
const int _num__array_statemonitor_3_wI_2 = (0, 0);
double * _array_statemonitor_3_wI_3;
const int _num__array_statemonitor_3_wI_3 = (0, 0);
int32_t * _array_statemonitor_4__indices;
const int _num__array_statemonitor_4__indices = 0;
int32_t * _array_statemonitor_4_N;
const int _num__array_statemonitor_4_N = 1;
double * _array_statemonitor_4_v;
const int _num__array_statemonitor_4_v = (0, 0);
double * _array_statemonitor_4_wE;
const int _num__array_statemonitor_4_wE = (0, 0);
double * _array_statemonitor_4_wI_1;
const int _num__array_statemonitor_4_wI_1 = (0, 0);
double * _array_statemonitor_4_wI_2;
const int _num__array_statemonitor_4_wI_2 = (0, 0);
double * _array_statemonitor_4_wI_3;
const int _num__array_statemonitor_4_wI_3 = (0, 0);
int32_t * _array_statemonitor_5__indices;
const int _num__array_statemonitor_5__indices = 0;
int32_t * _array_statemonitor_5_N;
const int _num__array_statemonitor_5_N = 1;
double * _array_statemonitor_5_v;
const int _num__array_statemonitor_5_v = (0, 0);
double * _array_statemonitor_5_wE;
const int _num__array_statemonitor_5_wE = (0, 0);
double * _array_statemonitor_5_wE2;
const int _num__array_statemonitor_5_wE2 = (0, 0);
double * _array_statemonitor_5_wI_1;
const int _num__array_statemonitor_5_wI_1 = (0, 0);
double * _array_statemonitor_5_wI_2;
const int _num__array_statemonitor_5_wI_2 = (0, 0);
double * _array_statemonitor_5_wI_3;
const int _num__array_statemonitor_5_wI_3 = (0, 0);
int32_t * _array_statemonitor_6__indices;
const int _num__array_statemonitor_6__indices = 0;
int32_t * _array_statemonitor_6_N;
const int _num__array_statemonitor_6_N = 1;
double * _array_statemonitor_6_v;
const int _num__array_statemonitor_6_v = (0, 0);
double * _array_statemonitor_6_wE;
const int _num__array_statemonitor_6_wE = (0, 0);
double * _array_statemonitor_6_wI_1;
const int _num__array_statemonitor_6_wI_1 = (0, 0);
double * _array_statemonitor_6_wI_2;
const int _num__array_statemonitor_6_wI_2 = (0, 0);
double * _array_statemonitor_6_wI_3;
const int _num__array_statemonitor_6_wI_3 = (0, 0);
int32_t * _array_statemonitor__indices;
const int _num__array_statemonitor__indices = 0;
int32_t * _array_statemonitor_N;
const int _num__array_statemonitor_N = 1;
double * _array_statemonitor_v;
const int _num__array_statemonitor_v = (0, 0);
double * _array_statemonitor_wE;
const int _num__array_statemonitor_wE = (0, 0);
double * _array_statemonitor_wI_1;
const int _num__array_statemonitor_wI_1 = (0, 0);
double * _array_statemonitor_wI_2;
const int _num__array_statemonitor_wI_2 = (0, 0);
double * _array_statemonitor_wI_3;
const int _num__array_statemonitor_wI_3 = (0, 0);
int32_t * _array_synapses_10_N;
const int _num__array_synapses_10_N = 1;
int32_t * _array_synapses_11_N;
const int _num__array_synapses_11_N = 1;
int32_t * _array_synapses_12_N;
const int _num__array_synapses_12_N = 1;
int32_t * _array_synapses_13_N;
const int _num__array_synapses_13_N = 1;
int32_t * _array_synapses_14_N;
const int _num__array_synapses_14_N = 1;
int32_t * _array_synapses_15_N;
const int _num__array_synapses_15_N = 1;
int32_t * _array_synapses_16_N;
const int _num__array_synapses_16_N = 1;
int32_t * _array_synapses_17_N;
const int _num__array_synapses_17_N = 1;
int32_t * _array_synapses_18_N;
const int _num__array_synapses_18_N = 1;
int32_t * _array_synapses_1_N;
const int _num__array_synapses_1_N = 1;
int32_t * _array_synapses_2_N;
const int _num__array_synapses_2_N = 1;
int32_t * _array_synapses_3_N;
const int _num__array_synapses_3_N = 1;
int32_t * _array_synapses_4_N;
const int _num__array_synapses_4_N = 1;
int32_t * _array_synapses_5_N;
const int _num__array_synapses_5_N = 1;
int32_t * _array_synapses_6_N;
const int _num__array_synapses_6_N = 1;
int32_t * _array_synapses_7_N;
const int _num__array_synapses_7_N = 1;
int32_t * _array_synapses_8_N;
const int _num__array_synapses_8_N = 1;
int32_t * _array_synapses_9_N;
const int _num__array_synapses_9_N = 1;
int32_t * _array_synapses_N;
const int _num__array_synapses_N = 1;

//////////////// dynamic arrays 1d /////////
std::vector<double> _dynamic_array_ratemonitor_1_rate;
std::vector<double> _dynamic_array_ratemonitor_1_t;
std::vector<double> _dynamic_array_ratemonitor_2_rate;
std::vector<double> _dynamic_array_ratemonitor_2_t;
std::vector<double> _dynamic_array_ratemonitor_3_rate;
std::vector<double> _dynamic_array_ratemonitor_3_t;
std::vector<double> _dynamic_array_ratemonitor_4_rate;
std::vector<double> _dynamic_array_ratemonitor_4_t;
std::vector<double> _dynamic_array_ratemonitor_5_rate;
std::vector<double> _dynamic_array_ratemonitor_5_t;
std::vector<double> _dynamic_array_ratemonitor_6_rate;
std::vector<double> _dynamic_array_ratemonitor_6_t;
std::vector<double> _dynamic_array_ratemonitor_rate;
std::vector<double> _dynamic_array_ratemonitor_t;
std::vector<int32_t> _dynamic_array_spikemonitor_1_i;
std::vector<double> _dynamic_array_spikemonitor_1_t;
std::vector<int32_t> _dynamic_array_spikemonitor_2_i;
std::vector<double> _dynamic_array_spikemonitor_2_t;
std::vector<int32_t> _dynamic_array_spikemonitor_3_i;
std::vector<double> _dynamic_array_spikemonitor_3_t;
std::vector<int32_t> _dynamic_array_spikemonitor_4_i;
std::vector<double> _dynamic_array_spikemonitor_4_t;
std::vector<int32_t> _dynamic_array_spikemonitor_5_i;
std::vector<double> _dynamic_array_spikemonitor_5_t;
std::vector<int32_t> _dynamic_array_spikemonitor_6_i;
std::vector<double> _dynamic_array_spikemonitor_6_t;
std::vector<int32_t> _dynamic_array_spikemonitor_i;
std::vector<double> _dynamic_array_spikemonitor_t;
std::vector<double> _dynamic_array_statemonitor_1_t;
std::vector<double> _dynamic_array_statemonitor_2_t;
std::vector<double> _dynamic_array_statemonitor_3_t;
std::vector<double> _dynamic_array_statemonitor_4_t;
std::vector<double> _dynamic_array_statemonitor_5_t;
std::vector<double> _dynamic_array_statemonitor_6_t;
std::vector<double> _dynamic_array_statemonitor_t;
std::vector<int32_t> _dynamic_array_synapses_10__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_10__synaptic_pre;
std::vector<double> _dynamic_array_synapses_10_delay;
std::vector<int32_t> _dynamic_array_synapses_10_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_10_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_11__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_11__synaptic_pre;
std::vector<double> _dynamic_array_synapses_11_delay;
std::vector<int32_t> _dynamic_array_synapses_11_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_11_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_12__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_12__synaptic_pre;
std::vector<double> _dynamic_array_synapses_12_delay;
std::vector<int32_t> _dynamic_array_synapses_12_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_12_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_13__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_13__synaptic_pre;
std::vector<double> _dynamic_array_synapses_13_delay;
std::vector<int32_t> _dynamic_array_synapses_13_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_13_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_14__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_14__synaptic_pre;
std::vector<double> _dynamic_array_synapses_14_delay;
std::vector<int32_t> _dynamic_array_synapses_14_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_14_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_15__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_15__synaptic_pre;
std::vector<double> _dynamic_array_synapses_15_delay;
std::vector<int32_t> _dynamic_array_synapses_15_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_15_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_16__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_16__synaptic_pre;
std::vector<double> _dynamic_array_synapses_16_delay;
std::vector<int32_t> _dynamic_array_synapses_16_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_16_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_17__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_17__synaptic_pre;
std::vector<double> _dynamic_array_synapses_17_delay;
std::vector<int32_t> _dynamic_array_synapses_17_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_17_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_18__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_18__synaptic_pre;
std::vector<double> _dynamic_array_synapses_18_delay;
std::vector<int32_t> _dynamic_array_synapses_18_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_18_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_1__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_1__synaptic_pre;
std::vector<double> _dynamic_array_synapses_1_delay;
std::vector<int32_t> _dynamic_array_synapses_1_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_1_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_2__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_2__synaptic_pre;
std::vector<double> _dynamic_array_synapses_2_delay;
std::vector<int32_t> _dynamic_array_synapses_2_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_2_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_3__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_3__synaptic_pre;
std::vector<double> _dynamic_array_synapses_3_delay;
std::vector<int32_t> _dynamic_array_synapses_3_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_3_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_4__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_4__synaptic_pre;
std::vector<double> _dynamic_array_synapses_4_delay;
std::vector<int32_t> _dynamic_array_synapses_4_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_4_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_5__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_5__synaptic_pre;
std::vector<double> _dynamic_array_synapses_5_delay;
std::vector<int32_t> _dynamic_array_synapses_5_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_5_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_6__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_6__synaptic_pre;
std::vector<double> _dynamic_array_synapses_6_delay;
std::vector<int32_t> _dynamic_array_synapses_6_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_6_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_7__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_7__synaptic_pre;
std::vector<double> _dynamic_array_synapses_7_delay;
std::vector<int32_t> _dynamic_array_synapses_7_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_7_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_8__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_8__synaptic_pre;
std::vector<double> _dynamic_array_synapses_8_delay;
std::vector<int32_t> _dynamic_array_synapses_8_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_8_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses_9__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses_9__synaptic_pre;
std::vector<double> _dynamic_array_synapses_9_delay;
std::vector<int32_t> _dynamic_array_synapses_9_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_9_N_outgoing;
std::vector<int32_t> _dynamic_array_synapses__synaptic_post;
std::vector<int32_t> _dynamic_array_synapses__synaptic_pre;
std::vector<double> _dynamic_array_synapses_delay;
std::vector<int32_t> _dynamic_array_synapses_N_incoming;
std::vector<int32_t> _dynamic_array_synapses_N_outgoing;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_1_v;
DynamicArray2D<double> _dynamic_array_statemonitor_1_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_1_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_1_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_1_wI_3;
DynamicArray2D<double> _dynamic_array_statemonitor_2_v;
DynamicArray2D<double> _dynamic_array_statemonitor_2_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_2_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_2_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_2_wI_3;
DynamicArray2D<double> _dynamic_array_statemonitor_3_v;
DynamicArray2D<double> _dynamic_array_statemonitor_3_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_3_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_3_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_3_wI_3;
DynamicArray2D<double> _dynamic_array_statemonitor_4_v;
DynamicArray2D<double> _dynamic_array_statemonitor_4_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_4_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_4_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_4_wI_3;
DynamicArray2D<double> _dynamic_array_statemonitor_5_v;
DynamicArray2D<double> _dynamic_array_statemonitor_5_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_5_wE2;
DynamicArray2D<double> _dynamic_array_statemonitor_5_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_5_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_5_wI_3;
DynamicArray2D<double> _dynamic_array_statemonitor_6_v;
DynamicArray2D<double> _dynamic_array_statemonitor_6_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_6_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_6_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_6_wI_3;
DynamicArray2D<double> _dynamic_array_statemonitor_v;
DynamicArray2D<double> _dynamic_array_statemonitor_wE;
DynamicArray2D<double> _dynamic_array_statemonitor_wI_1;
DynamicArray2D<double> _dynamic_array_statemonitor_wI_2;
DynamicArray2D<double> _dynamic_array_statemonitor_wI_3;

/////////////// static arrays /////////////
double * _static_array__array_neurongroup_1_d;
const int _num__static_array__array_neurongroup_1_d = 100;
double * _static_array__array_neurongroup_1_u;
const int _num__static_array__array_neurongroup_1_u = 100;
double * _static_array__array_neurongroup_1_v;
const int _num__static_array__array_neurongroup_1_v = 100;
double * _static_array__array_neurongroup_2_d;
const int _num__static_array__array_neurongroup_2_d = 100;
double * _static_array__array_neurongroup_2_u;
const int _num__static_array__array_neurongroup_2_u = 100;
double * _static_array__array_neurongroup_2_v;
const int _num__static_array__array_neurongroup_2_v = 100;
double * _static_array__array_neurongroup_3_d;
const int _num__static_array__array_neurongroup_3_d = 100;
double * _static_array__array_neurongroup_3_u;
const int _num__static_array__array_neurongroup_3_u = 100;
double * _static_array__array_neurongroup_3_v;
const int _num__static_array__array_neurongroup_3_v = 100;
double * _static_array__array_neurongroup_4_d;
const int _num__static_array__array_neurongroup_4_d = 100;
double * _static_array__array_neurongroup_4_u;
const int _num__static_array__array_neurongroup_4_u = 100;
double * _static_array__array_neurongroup_4_v;
const int _num__static_array__array_neurongroup_4_v = 100;
double * _static_array__array_neurongroup_5_d;
const int _num__static_array__array_neurongroup_5_d = 100;
double * _static_array__array_neurongroup_5_u;
const int _num__static_array__array_neurongroup_5_u = 100;
double * _static_array__array_neurongroup_5_v;
const int _num__static_array__array_neurongroup_5_v = 100;
double * _static_array__array_neurongroup_6_d;
const int _num__static_array__array_neurongroup_6_d = 100;
double * _static_array__array_neurongroup_6_u;
const int _num__static_array__array_neurongroup_6_u = 100;
double * _static_array__array_neurongroup_6_v;
const int _num__static_array__array_neurongroup_6_v = 100;
double * _static_array__array_neurongroup_d;
const int _num__static_array__array_neurongroup_d = 100;
double * _static_array__array_neurongroup_u;
const int _num__static_array__array_neurongroup_u = 100;
double * _static_array__array_neurongroup_v;
const int _num__static_array__array_neurongroup_v = 100;

//////////////// synapses /////////////////
// synapses
SynapticPathway synapses_pre(
		_dynamic_array_synapses__synaptic_pre,
		0, 100);
// synapses_1
SynapticPathway synapses_1_pre(
		_dynamic_array_synapses_1__synaptic_pre,
		0, 100);
// synapses_10
SynapticPathway synapses_10_pre(
		_dynamic_array_synapses_10__synaptic_pre,
		0, 100);
// synapses_11
SynapticPathway synapses_11_pre(
		_dynamic_array_synapses_11__synaptic_pre,
		0, 100);
// synapses_12
SynapticPathway synapses_12_pre(
		_dynamic_array_synapses_12__synaptic_pre,
		0, 100);
// synapses_13
SynapticPathway synapses_13_pre(
		_dynamic_array_synapses_13__synaptic_pre,
		0, 100);
// synapses_14
SynapticPathway synapses_14_pre(
		_dynamic_array_synapses_14__synaptic_pre,
		0, 100);
// synapses_15
SynapticPathway synapses_15_pre(
		_dynamic_array_synapses_15__synaptic_pre,
		0, 100);
// synapses_16
SynapticPathway synapses_16_pre(
		_dynamic_array_synapses_16__synaptic_pre,
		0, 100);
// synapses_17
SynapticPathway synapses_17_pre(
		_dynamic_array_synapses_17__synaptic_pre,
		0, 100);
// synapses_18
SynapticPathway synapses_18_pre(
		_dynamic_array_synapses_18__synaptic_pre,
		0, 100);
// synapses_2
SynapticPathway synapses_2_pre(
		_dynamic_array_synapses_2__synaptic_pre,
		0, 100);
// synapses_3
SynapticPathway synapses_3_pre(
		_dynamic_array_synapses_3__synaptic_pre,
		0, 100);
// synapses_4
SynapticPathway synapses_4_pre(
		_dynamic_array_synapses_4__synaptic_pre,
		0, 100);
// synapses_5
SynapticPathway synapses_5_pre(
		_dynamic_array_synapses_5__synaptic_pre,
		0, 100);
// synapses_6
SynapticPathway synapses_6_pre(
		_dynamic_array_synapses_6__synaptic_pre,
		0, 100);
// synapses_7
SynapticPathway synapses_7_pre(
		_dynamic_array_synapses_7__synaptic_pre,
		0, 100);
// synapses_8
SynapticPathway synapses_8_pre(
		_dynamic_array_synapses_8__synaptic_pre,
		0, 100);
// synapses_9
SynapticPathway synapses_9_pre(
		_dynamic_array_synapses_9__synaptic_pre,
		0, 100);

//////////////// clocks ///////////////////
Clock defaultclock;  // attributes will be set in run.cpp

// Profiling information for each code object
}

void _init_arrays()
{
	using namespace brian;

    // Arrays initialized to 0
	_array_defaultclock_dt = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_dt[i] = 0;

	_array_defaultclock_t = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_t[i] = 0;

	_array_defaultclock_timestep = new int64_t[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_timestep[i] = 0;

	_array_neurongroup_1__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup_1__spikespace[i] = 0;

	_array_neurongroup_1_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_d[i] = 0;

	_array_neurongroup_1_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_i[i] = 0;

	_array_neurongroup_1_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_lastspike[i] = 0;

	_array_neurongroup_1_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_not_refractory[i] = 0;

	_array_neurongroup_1_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_u[i] = 0;

	_array_neurongroup_1_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_v[i] = 0;

	_array_neurongroup_1_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_wE[i] = 0;

	_array_neurongroup_1_wE2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_wE2[i] = 0;

	_array_neurongroup_1_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_wI_1[i] = 0;

	_array_neurongroup_1_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_wI_2[i] = 0;

	_array_neurongroup_1_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_wI_3[i] = 0;

	_array_neurongroup_1_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_y[i] = 0;

	_array_neurongroup_2__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup_2__spikespace[i] = 0;

	_array_neurongroup_2_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_d[i] = 0;

	_array_neurongroup_2_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_i[i] = 0;

	_array_neurongroup_2_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_lastspike[i] = 0;

	_array_neurongroup_2_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_not_refractory[i] = 0;

	_array_neurongroup_2_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_u[i] = 0;

	_array_neurongroup_2_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_v[i] = 0;

	_array_neurongroup_2_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_wE[i] = 0;

	_array_neurongroup_2_wE2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_wE2[i] = 0;

	_array_neurongroup_2_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_wI_1[i] = 0;

	_array_neurongroup_2_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_wI_2[i] = 0;

	_array_neurongroup_2_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_wI_3[i] = 0;

	_array_neurongroup_2_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_y[i] = 0;

	_array_neurongroup_3__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup_3__spikespace[i] = 0;

	_array_neurongroup_3_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_d[i] = 0;

	_array_neurongroup_3_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_i[i] = 0;

	_array_neurongroup_3_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_lastspike[i] = 0;

	_array_neurongroup_3_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_not_refractory[i] = 0;

	_array_neurongroup_3_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_u[i] = 0;

	_array_neurongroup_3_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_v[i] = 0;

	_array_neurongroup_3_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_wE[i] = 0;

	_array_neurongroup_3_wE2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_wE2[i] = 0;

	_array_neurongroup_3_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_wI_1[i] = 0;

	_array_neurongroup_3_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_wI_2[i] = 0;

	_array_neurongroup_3_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_wI_3[i] = 0;

	_array_neurongroup_3_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_y[i] = 0;

	_array_neurongroup_4__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup_4__spikespace[i] = 0;

	_array_neurongroup_4_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_d[i] = 0;

	_array_neurongroup_4_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_i[i] = 0;

	_array_neurongroup_4_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_lastspike[i] = 0;

	_array_neurongroup_4_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_not_refractory[i] = 0;

	_array_neurongroup_4_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_u[i] = 0;

	_array_neurongroup_4_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_v[i] = 0;

	_array_neurongroup_4_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_wE[i] = 0;

	_array_neurongroup_4_wE2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_wE2[i] = 0;

	_array_neurongroup_4_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_wI_1[i] = 0;

	_array_neurongroup_4_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_wI_2[i] = 0;

	_array_neurongroup_4_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_wI_3[i] = 0;

	_array_neurongroup_4_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_y[i] = 0;

	_array_neurongroup_5__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup_5__spikespace[i] = 0;

	_array_neurongroup_5_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_d[i] = 0;

	_array_neurongroup_5_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_i[i] = 0;

	_array_neurongroup_5_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_lastspike[i] = 0;

	_array_neurongroup_5_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_not_refractory[i] = 0;

	_array_neurongroup_5_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_u[i] = 0;

	_array_neurongroup_5_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_v[i] = 0;

	_array_neurongroup_5_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_wE[i] = 0;

	_array_neurongroup_5_wE2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_wE2[i] = 0;

	_array_neurongroup_5_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_wI_1[i] = 0;

	_array_neurongroup_5_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_wI_2[i] = 0;

	_array_neurongroup_5_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_wI_3[i] = 0;

	_array_neurongroup_5_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_y[i] = 0;

	_array_neurongroup_6__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup_6__spikespace[i] = 0;

	_array_neurongroup_6_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_d[i] = 0;

	_array_neurongroup_6_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_i[i] = 0;

	_array_neurongroup_6_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_lastspike[i] = 0;

	_array_neurongroup_6_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_not_refractory[i] = 0;

	_array_neurongroup_6_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_u[i] = 0;

	_array_neurongroup_6_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_v[i] = 0;

	_array_neurongroup_6_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_wE[i] = 0;

	_array_neurongroup_6_wE2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_wE2[i] = 0;

	_array_neurongroup_6_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_wI_1[i] = 0;

	_array_neurongroup_6_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_wI_2[i] = 0;

	_array_neurongroup_6_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_wI_3[i] = 0;

	_array_neurongroup_6_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_y[i] = 0;

	_array_neurongroup__spikespace = new int32_t[101];
    
	for(int i=0; i<101; i++) _array_neurongroup__spikespace[i] = 0;

	_array_neurongroup_d = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_d[i] = 0;

	_array_neurongroup_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_i[i] = 0;

	_array_neurongroup_lastspike = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_lastspike[i] = 0;

	_array_neurongroup_not_refractory = new char[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_not_refractory[i] = 0;

	_array_neurongroup_u = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_u[i] = 0;

	_array_neurongroup_v = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_v[i] = 0;

	_array_neurongroup_wE = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_wE[i] = 0;

	_array_neurongroup_wI_1 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_wI_1[i] = 0;

	_array_neurongroup_wI_2 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_wI_2[i] = 0;

	_array_neurongroup_wI_3 = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_wI_3[i] = 0;

	_array_neurongroup_y = new double[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_y[i] = 0;

	_array_ratemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_1_N[i] = 0;

	_array_ratemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_2_N[i] = 0;

	_array_ratemonitor_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_3_N[i] = 0;

	_array_ratemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_4_N[i] = 0;

	_array_ratemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_5_N[i] = 0;

	_array_ratemonitor_6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_6_N[i] = 0;

	_array_ratemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_ratemonitor_N[i] = 0;

	_array_spikemonitor_1__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_1__source_idx[i] = 0;

	_array_spikemonitor_1_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_1_count[i] = 0;

	_array_spikemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_1_N[i] = 0;

	_array_spikemonitor_2__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_2__source_idx[i] = 0;

	_array_spikemonitor_2_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_2_count[i] = 0;

	_array_spikemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_2_N[i] = 0;

	_array_spikemonitor_3__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_3__source_idx[i] = 0;

	_array_spikemonitor_3_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_3_count[i] = 0;

	_array_spikemonitor_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_3_N[i] = 0;

	_array_spikemonitor_4__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_4__source_idx[i] = 0;

	_array_spikemonitor_4_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_4_count[i] = 0;

	_array_spikemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_4_N[i] = 0;

	_array_spikemonitor_5__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_5__source_idx[i] = 0;

	_array_spikemonitor_5_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_5_count[i] = 0;

	_array_spikemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_5_N[i] = 0;

	_array_spikemonitor_6__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_6__source_idx[i] = 0;

	_array_spikemonitor_6_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_6_count[i] = 0;

	_array_spikemonitor_6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_6_N[i] = 0;

	_array_spikemonitor__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor__source_idx[i] = 0;

	_array_spikemonitor_count = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_count[i] = 0;

	_array_spikemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_N[i] = 0;

	_array_statemonitor_1__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor_1__indices[i] = 0;

	_array_statemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1_N[i] = 0;

	_array_statemonitor_2__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor_2__indices[i] = 0;

	_array_statemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_2_N[i] = 0;

	_array_statemonitor_3__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor_3__indices[i] = 0;

	_array_statemonitor_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_3_N[i] = 0;

	_array_statemonitor_4__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor_4__indices[i] = 0;

	_array_statemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4_N[i] = 0;

	_array_statemonitor_5__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor_5__indices[i] = 0;

	_array_statemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5_N[i] = 0;

	_array_statemonitor_6__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor_6__indices[i] = 0;

	_array_statemonitor_6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_6_N[i] = 0;

	_array_statemonitor__indices = new int32_t[0];
    
	for(int i=0; i<0; i++) _array_statemonitor__indices[i] = 0;

	_array_statemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N[i] = 0;

	_array_synapses_10_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_10_N[i] = 0;

	_array_synapses_11_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_11_N[i] = 0;

	_array_synapses_12_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_12_N[i] = 0;

	_array_synapses_13_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_13_N[i] = 0;

	_array_synapses_14_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_14_N[i] = 0;

	_array_synapses_15_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_15_N[i] = 0;

	_array_synapses_16_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_16_N[i] = 0;

	_array_synapses_17_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_17_N[i] = 0;

	_array_synapses_18_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_18_N[i] = 0;

	_array_synapses_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_1_N[i] = 0;

	_array_synapses_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_2_N[i] = 0;

	_array_synapses_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_3_N[i] = 0;

	_array_synapses_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_4_N[i] = 0;

	_array_synapses_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_5_N[i] = 0;

	_array_synapses_6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_6_N[i] = 0;

	_array_synapses_7_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_7_N[i] = 0;

	_array_synapses_8_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_8_N[i] = 0;

	_array_synapses_9_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_9_N[i] = 0;

	_array_synapses_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_synapses_N[i] = 0;


	// Arrays initialized to an "arange"
	_array_neurongroup_1_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_1_i[i] = 0 + i;

	_array_neurongroup_2_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_2_i[i] = 0 + i;

	_array_neurongroup_3_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_3_i[i] = 0 + i;

	_array_neurongroup_4_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_4_i[i] = 0 + i;

	_array_neurongroup_5_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_5_i[i] = 0 + i;

	_array_neurongroup_6_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_6_i[i] = 0 + i;

	_array_neurongroup_i = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_neurongroup_i[i] = 0 + i;

	_array_spikemonitor_1__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_1__source_idx[i] = 0 + i;

	_array_spikemonitor_2__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_2__source_idx[i] = 0 + i;

	_array_spikemonitor_3__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_3__source_idx[i] = 0 + i;

	_array_spikemonitor_4__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_4__source_idx[i] = 0 + i;

	_array_spikemonitor_5__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_5__source_idx[i] = 0 + i;

	_array_spikemonitor_6__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor_6__source_idx[i] = 0 + i;

	_array_spikemonitor__source_idx = new int32_t[100];
    
	for(int i=0; i<100; i++) _array_spikemonitor__source_idx[i] = 0 + i;


	// static arrays
	_static_array__array_neurongroup_1_d = new double[100];
	_static_array__array_neurongroup_1_u = new double[100];
	_static_array__array_neurongroup_1_v = new double[100];
	_static_array__array_neurongroup_2_d = new double[100];
	_static_array__array_neurongroup_2_u = new double[100];
	_static_array__array_neurongroup_2_v = new double[100];
	_static_array__array_neurongroup_3_d = new double[100];
	_static_array__array_neurongroup_3_u = new double[100];
	_static_array__array_neurongroup_3_v = new double[100];
	_static_array__array_neurongroup_4_d = new double[100];
	_static_array__array_neurongroup_4_u = new double[100];
	_static_array__array_neurongroup_4_v = new double[100];
	_static_array__array_neurongroup_5_d = new double[100];
	_static_array__array_neurongroup_5_u = new double[100];
	_static_array__array_neurongroup_5_v = new double[100];
	_static_array__array_neurongroup_6_d = new double[100];
	_static_array__array_neurongroup_6_u = new double[100];
	_static_array__array_neurongroup_6_v = new double[100];
	_static_array__array_neurongroup_d = new double[100];
	_static_array__array_neurongroup_u = new double[100];
	_static_array__array_neurongroup_v = new double[100];

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

	ifstream f_static_array__array_neurongroup_1_d;
	f_static_array__array_neurongroup_1_d.open("static_arrays/_static_array__array_neurongroup_1_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_1_d.is_open())
	{
		f_static_array__array_neurongroup_1_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_1_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_1_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_1_u;
	f_static_array__array_neurongroup_1_u.open("static_arrays/_static_array__array_neurongroup_1_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_1_u.is_open())
	{
		f_static_array__array_neurongroup_1_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_1_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_1_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_1_v;
	f_static_array__array_neurongroup_1_v.open("static_arrays/_static_array__array_neurongroup_1_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_1_v.is_open())
	{
		f_static_array__array_neurongroup_1_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_1_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_1_v." << endl;
	}
	ifstream f_static_array__array_neurongroup_2_d;
	f_static_array__array_neurongroup_2_d.open("static_arrays/_static_array__array_neurongroup_2_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_2_d.is_open())
	{
		f_static_array__array_neurongroup_2_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_2_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_2_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_2_u;
	f_static_array__array_neurongroup_2_u.open("static_arrays/_static_array__array_neurongroup_2_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_2_u.is_open())
	{
		f_static_array__array_neurongroup_2_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_2_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_2_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_2_v;
	f_static_array__array_neurongroup_2_v.open("static_arrays/_static_array__array_neurongroup_2_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_2_v.is_open())
	{
		f_static_array__array_neurongroup_2_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_2_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_2_v." << endl;
	}
	ifstream f_static_array__array_neurongroup_3_d;
	f_static_array__array_neurongroup_3_d.open("static_arrays/_static_array__array_neurongroup_3_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_3_d.is_open())
	{
		f_static_array__array_neurongroup_3_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_3_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_3_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_3_u;
	f_static_array__array_neurongroup_3_u.open("static_arrays/_static_array__array_neurongroup_3_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_3_u.is_open())
	{
		f_static_array__array_neurongroup_3_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_3_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_3_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_3_v;
	f_static_array__array_neurongroup_3_v.open("static_arrays/_static_array__array_neurongroup_3_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_3_v.is_open())
	{
		f_static_array__array_neurongroup_3_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_3_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_3_v." << endl;
	}
	ifstream f_static_array__array_neurongroup_4_d;
	f_static_array__array_neurongroup_4_d.open("static_arrays/_static_array__array_neurongroup_4_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_4_d.is_open())
	{
		f_static_array__array_neurongroup_4_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_4_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_4_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_4_u;
	f_static_array__array_neurongroup_4_u.open("static_arrays/_static_array__array_neurongroup_4_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_4_u.is_open())
	{
		f_static_array__array_neurongroup_4_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_4_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_4_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_4_v;
	f_static_array__array_neurongroup_4_v.open("static_arrays/_static_array__array_neurongroup_4_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_4_v.is_open())
	{
		f_static_array__array_neurongroup_4_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_4_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_4_v." << endl;
	}
	ifstream f_static_array__array_neurongroup_5_d;
	f_static_array__array_neurongroup_5_d.open("static_arrays/_static_array__array_neurongroup_5_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_5_d.is_open())
	{
		f_static_array__array_neurongroup_5_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_5_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_5_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_5_u;
	f_static_array__array_neurongroup_5_u.open("static_arrays/_static_array__array_neurongroup_5_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_5_u.is_open())
	{
		f_static_array__array_neurongroup_5_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_5_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_5_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_5_v;
	f_static_array__array_neurongroup_5_v.open("static_arrays/_static_array__array_neurongroup_5_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_5_v.is_open())
	{
		f_static_array__array_neurongroup_5_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_5_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_5_v." << endl;
	}
	ifstream f_static_array__array_neurongroup_6_d;
	f_static_array__array_neurongroup_6_d.open("static_arrays/_static_array__array_neurongroup_6_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_6_d.is_open())
	{
		f_static_array__array_neurongroup_6_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_6_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_6_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_6_u;
	f_static_array__array_neurongroup_6_u.open("static_arrays/_static_array__array_neurongroup_6_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_6_u.is_open())
	{
		f_static_array__array_neurongroup_6_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_6_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_6_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_6_v;
	f_static_array__array_neurongroup_6_v.open("static_arrays/_static_array__array_neurongroup_6_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_6_v.is_open())
	{
		f_static_array__array_neurongroup_6_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_6_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_6_v." << endl;
	}
	ifstream f_static_array__array_neurongroup_d;
	f_static_array__array_neurongroup_d.open("static_arrays/_static_array__array_neurongroup_d", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_d.is_open())
	{
		f_static_array__array_neurongroup_d.read(reinterpret_cast<char*>(_static_array__array_neurongroup_d), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_d." << endl;
	}
	ifstream f_static_array__array_neurongroup_u;
	f_static_array__array_neurongroup_u.open("static_arrays/_static_array__array_neurongroup_u", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_u.is_open())
	{
		f_static_array__array_neurongroup_u.read(reinterpret_cast<char*>(_static_array__array_neurongroup_u), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_u." << endl;
	}
	ifstream f_static_array__array_neurongroup_v;
	f_static_array__array_neurongroup_v.open("static_arrays/_static_array__array_neurongroup_v", ios::in | ios::binary);
	if(f_static_array__array_neurongroup_v.is_open())
	{
		f_static_array__array_neurongroup_v.read(reinterpret_cast<char*>(_static_array__array_neurongroup_v), 100*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__array_neurongroup_v." << endl;
	}
}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results\\_array_defaultclock_dt_6490327095745800365", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results\\_array_defaultclock_t_-1903505427925755813", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results\\_array_defaultclock_timestep_-478201680246760458", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_neurongroup_1__spikespace;
	outfile__array_neurongroup_1__spikespace.open("results\\_array_neurongroup_1__spikespace_-9118601851291097228", ios::binary | ios::out);
	if(outfile__array_neurongroup_1__spikespace.is_open())
	{
		outfile__array_neurongroup_1__spikespace.write(reinterpret_cast<char*>(_array_neurongroup_1__spikespace), 101*sizeof(_array_neurongroup_1__spikespace[0]));
		outfile__array_neurongroup_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_1_d;
	outfile__array_neurongroup_1_d.open("results\\_array_neurongroup_1_d_-1775208915950544227", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_d.is_open())
	{
		outfile__array_neurongroup_1_d.write(reinterpret_cast<char*>(_array_neurongroup_1_d), 100*sizeof(_array_neurongroup_1_d[0]));
		outfile__array_neurongroup_1_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_d." << endl;
	}
	ofstream outfile__array_neurongroup_1_i;
	outfile__array_neurongroup_1_i.open("results\\_array_neurongroup_1_i_7100216016830403658", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_i.is_open())
	{
		outfile__array_neurongroup_1_i.write(reinterpret_cast<char*>(_array_neurongroup_1_i), 100*sizeof(_array_neurongroup_1_i[0]));
		outfile__array_neurongroup_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_i." << endl;
	}
	ofstream outfile__array_neurongroup_1_lastspike;
	outfile__array_neurongroup_1_lastspike.open("results\\_array_neurongroup_1_lastspike_4084879901398775531", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_lastspike.is_open())
	{
		outfile__array_neurongroup_1_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_1_lastspike), 100*sizeof(_array_neurongroup_1_lastspike[0]));
		outfile__array_neurongroup_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_1_not_refractory;
	outfile__array_neurongroup_1_not_refractory.open("results\\_array_neurongroup_1_not_refractory_8222840517527086321", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_not_refractory.is_open())
	{
		outfile__array_neurongroup_1_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_1_not_refractory), 100*sizeof(_array_neurongroup_1_not_refractory[0]));
		outfile__array_neurongroup_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_1_u;
	outfile__array_neurongroup_1_u.open("results\\_array_neurongroup_1_u_8910289346014686008", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_u.is_open())
	{
		outfile__array_neurongroup_1_u.write(reinterpret_cast<char*>(_array_neurongroup_1_u), 100*sizeof(_array_neurongroup_1_u[0]));
		outfile__array_neurongroup_1_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_u." << endl;
	}
	ofstream outfile__array_neurongroup_1_v;
	outfile__array_neurongroup_1_v.open("results\\_array_neurongroup_1_v_-850224943988622348", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_v.is_open())
	{
		outfile__array_neurongroup_1_v.write(reinterpret_cast<char*>(_array_neurongroup_1_v), 100*sizeof(_array_neurongroup_1_v[0]));
		outfile__array_neurongroup_1_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_v." << endl;
	}
	ofstream outfile__array_neurongroup_1_wE;
	outfile__array_neurongroup_1_wE.open("results\\_array_neurongroup_1_wE_-3753862257931238211", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_wE.is_open())
	{
		outfile__array_neurongroup_1_wE.write(reinterpret_cast<char*>(_array_neurongroup_1_wE), 100*sizeof(_array_neurongroup_1_wE[0]));
		outfile__array_neurongroup_1_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_wE." << endl;
	}
	ofstream outfile__array_neurongroup_1_wE2;
	outfile__array_neurongroup_1_wE2.open("results\\_array_neurongroup_1_wE2_8397846151403810139", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_wE2.is_open())
	{
		outfile__array_neurongroup_1_wE2.write(reinterpret_cast<char*>(_array_neurongroup_1_wE2), 100*sizeof(_array_neurongroup_1_wE2[0]));
		outfile__array_neurongroup_1_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_wE2." << endl;
	}
	ofstream outfile__array_neurongroup_1_wI_1;
	outfile__array_neurongroup_1_wI_1.open("results\\_array_neurongroup_1_wI_1_-6861718993525744524", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_wI_1.is_open())
	{
		outfile__array_neurongroup_1_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_1_wI_1), 100*sizeof(_array_neurongroup_1_wI_1[0]));
		outfile__array_neurongroup_1_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_1_wI_2;
	outfile__array_neurongroup_1_wI_2.open("results\\_array_neurongroup_1_wI_2_-5300842816491312015", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_wI_2.is_open())
	{
		outfile__array_neurongroup_1_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_1_wI_2), 100*sizeof(_array_neurongroup_1_wI_2[0]));
		outfile__array_neurongroup_1_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_1_wI_3;
	outfile__array_neurongroup_1_wI_3.open("results\\_array_neurongroup_1_wI_3_-3225540219927834677", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_wI_3.is_open())
	{
		outfile__array_neurongroup_1_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_1_wI_3), 100*sizeof(_array_neurongroup_1_wI_3[0]));
		outfile__array_neurongroup_1_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_1_y;
	outfile__array_neurongroup_1_y.open("results\\_array_neurongroup_1_y_-1887339056869746726", ios::binary | ios::out);
	if(outfile__array_neurongroup_1_y.is_open())
	{
		outfile__array_neurongroup_1_y.write(reinterpret_cast<char*>(_array_neurongroup_1_y), 100*sizeof(_array_neurongroup_1_y[0]));
		outfile__array_neurongroup_1_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_1_y." << endl;
	}
	ofstream outfile__array_neurongroup_2__spikespace;
	outfile__array_neurongroup_2__spikespace.open("results\\_array_neurongroup_2__spikespace_-7696390724766891347", ios::binary | ios::out);
	if(outfile__array_neurongroup_2__spikespace.is_open())
	{
		outfile__array_neurongroup_2__spikespace.write(reinterpret_cast<char*>(_array_neurongroup_2__spikespace), 101*sizeof(_array_neurongroup_2__spikespace[0]));
		outfile__array_neurongroup_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_2_d;
	outfile__array_neurongroup_2_d.open("results\\_array_neurongroup_2_d_-3640012585582409127", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_d.is_open())
	{
		outfile__array_neurongroup_2_d.write(reinterpret_cast<char*>(_array_neurongroup_2_d), 100*sizeof(_array_neurongroup_2_d[0]));
		outfile__array_neurongroup_2_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_d." << endl;
	}
	ofstream outfile__array_neurongroup_2_i;
	outfile__array_neurongroup_2_i.open("results\\_array_neurongroup_2_i_-4919685391662633329", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_i.is_open())
	{
		outfile__array_neurongroup_2_i.write(reinterpret_cast<char*>(_array_neurongroup_2_i), 100*sizeof(_array_neurongroup_2_i[0]));
		outfile__array_neurongroup_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_i." << endl;
	}
	ofstream outfile__array_neurongroup_2_lastspike;
	outfile__array_neurongroup_2_lastspike.open("results\\_array_neurongroup_2_lastspike_7945953810389442337", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_lastspike.is_open())
	{
		outfile__array_neurongroup_2_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_2_lastspike), 100*sizeof(_array_neurongroup_2_lastspike[0]));
		outfile__array_neurongroup_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_2_not_refractory;
	outfile__array_neurongroup_2_not_refractory.open("results\\_array_neurongroup_2_not_refractory_-4798119180779435689", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_not_refractory.is_open())
	{
		outfile__array_neurongroup_2_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_2_not_refractory), 100*sizeof(_array_neurongroup_2_not_refractory[0]));
		outfile__array_neurongroup_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_2_u;
	outfile__array_neurongroup_2_u.open("results\\_array_neurongroup_2_u_489728832859961179", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_u.is_open())
	{
		outfile__array_neurongroup_2_u.write(reinterpret_cast<char*>(_array_neurongroup_2_u), 100*sizeof(_array_neurongroup_2_u[0]));
		outfile__array_neurongroup_2_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_u." << endl;
	}
	ofstream outfile__array_neurongroup_2_v;
	outfile__array_neurongroup_2_v.open("results\\_array_neurongroup_2_v_2211470354546593983", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_v.is_open())
	{
		outfile__array_neurongroup_2_v.write(reinterpret_cast<char*>(_array_neurongroup_2_v), 100*sizeof(_array_neurongroup_2_v[0]));
		outfile__array_neurongroup_2_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_v." << endl;
	}
	ofstream outfile__array_neurongroup_2_wE;
	outfile__array_neurongroup_2_wE.open("results\\_array_neurongroup_2_wE_4217810895655075239", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_wE.is_open())
	{
		outfile__array_neurongroup_2_wE.write(reinterpret_cast<char*>(_array_neurongroup_2_wE), 100*sizeof(_array_neurongroup_2_wE[0]));
		outfile__array_neurongroup_2_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_wE." << endl;
	}
	ofstream outfile__array_neurongroup_2_wE2;
	outfile__array_neurongroup_2_wE2.open("results\\_array_neurongroup_2_wE2_-3885261862642350412", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_wE2.is_open())
	{
		outfile__array_neurongroup_2_wE2.write(reinterpret_cast<char*>(_array_neurongroup_2_wE2), 100*sizeof(_array_neurongroup_2_wE2[0]));
		outfile__array_neurongroup_2_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_wE2." << endl;
	}
	ofstream outfile__array_neurongroup_2_wI_1;
	outfile__array_neurongroup_2_wI_1.open("results\\_array_neurongroup_2_wI_1_4591441671162300031", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_wI_1.is_open())
	{
		outfile__array_neurongroup_2_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_2_wI_1), 100*sizeof(_array_neurongroup_2_wI_1[0]));
		outfile__array_neurongroup_2_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_2_wI_2;
	outfile__array_neurongroup_2_wI_2.open("results\\_array_neurongroup_2_wI_2_-2542694494160938316", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_wI_2.is_open())
	{
		outfile__array_neurongroup_2_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_2_wI_2), 100*sizeof(_array_neurongroup_2_wI_2[0]));
		outfile__array_neurongroup_2_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_2_wI_3;
	outfile__array_neurongroup_2_wI_3.open("results\\_array_neurongroup_2_wI_3_5218901255325475379", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_wI_3.is_open())
	{
		outfile__array_neurongroup_2_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_2_wI_3), 100*sizeof(_array_neurongroup_2_wI_3[0]));
		outfile__array_neurongroup_2_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_2_y;
	outfile__array_neurongroup_2_y.open("results\\_array_neurongroup_2_y_7463073160886332262", ios::binary | ios::out);
	if(outfile__array_neurongroup_2_y.is_open())
	{
		outfile__array_neurongroup_2_y.write(reinterpret_cast<char*>(_array_neurongroup_2_y), 100*sizeof(_array_neurongroup_2_y[0]));
		outfile__array_neurongroup_2_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_2_y." << endl;
	}
	ofstream outfile__array_neurongroup_3__spikespace;
	outfile__array_neurongroup_3__spikespace.open("results\\_array_neurongroup_3__spikespace_8605691520577315533", ios::binary | ios::out);
	if(outfile__array_neurongroup_3__spikespace.is_open())
	{
		outfile__array_neurongroup_3__spikespace.write(reinterpret_cast<char*>(_array_neurongroup_3__spikespace), 101*sizeof(_array_neurongroup_3__spikespace[0]));
		outfile__array_neurongroup_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_3_d;
	outfile__array_neurongroup_3_d.open("results\\_array_neurongroup_3_d_7828782186426593051", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_d.is_open())
	{
		outfile__array_neurongroup_3_d.write(reinterpret_cast<char*>(_array_neurongroup_3_d), 100*sizeof(_array_neurongroup_3_d[0]));
		outfile__array_neurongroup_3_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_d." << endl;
	}
	ofstream outfile__array_neurongroup_3_i;
	outfile__array_neurongroup_3_i.open("results\\_array_neurongroup_3_i_-5480660884397428322", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_i.is_open())
	{
		outfile__array_neurongroup_3_i.write(reinterpret_cast<char*>(_array_neurongroup_3_i), 100*sizeof(_array_neurongroup_3_i[0]));
		outfile__array_neurongroup_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_i." << endl;
	}
	ofstream outfile__array_neurongroup_3_lastspike;
	outfile__array_neurongroup_3_lastspike.open("results\\_array_neurongroup_3_lastspike_4133722379213923769", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_lastspike.is_open())
	{
		outfile__array_neurongroup_3_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_3_lastspike), 100*sizeof(_array_neurongroup_3_lastspike[0]));
		outfile__array_neurongroup_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_3_not_refractory;
	outfile__array_neurongroup_3_not_refractory.open("results\\_array_neurongroup_3_not_refractory_-4614101865925028437", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_not_refractory.is_open())
	{
		outfile__array_neurongroup_3_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_3_not_refractory), 100*sizeof(_array_neurongroup_3_not_refractory[0]));
		outfile__array_neurongroup_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_3_u;
	outfile__array_neurongroup_3_u.open("results\\_array_neurongroup_3_u_-3635431637030123527", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_u.is_open())
	{
		outfile__array_neurongroup_3_u.write(reinterpret_cast<char*>(_array_neurongroup_3_u), 100*sizeof(_array_neurongroup_3_u[0]));
		outfile__array_neurongroup_3_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_u." << endl;
	}
	ofstream outfile__array_neurongroup_3_v;
	outfile__array_neurongroup_3_v.open("results\\_array_neurongroup_3_v_-4463772566875360706", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_v.is_open())
	{
		outfile__array_neurongroup_3_v.write(reinterpret_cast<char*>(_array_neurongroup_3_v), 100*sizeof(_array_neurongroup_3_v[0]));
		outfile__array_neurongroup_3_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_v." << endl;
	}
	ofstream outfile__array_neurongroup_3_wE;
	outfile__array_neurongroup_3_wE.open("results\\_array_neurongroup_3_wE_-7305938309625308743", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_wE.is_open())
	{
		outfile__array_neurongroup_3_wE.write(reinterpret_cast<char*>(_array_neurongroup_3_wE), 100*sizeof(_array_neurongroup_3_wE[0]));
		outfile__array_neurongroup_3_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_wE." << endl;
	}
	ofstream outfile__array_neurongroup_3_wE2;
	outfile__array_neurongroup_3_wE2.open("results\\_array_neurongroup_3_wE2_1564133724456954711", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_wE2.is_open())
	{
		outfile__array_neurongroup_3_wE2.write(reinterpret_cast<char*>(_array_neurongroup_3_wE2), 100*sizeof(_array_neurongroup_3_wE2[0]));
		outfile__array_neurongroup_3_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_wE2." << endl;
	}
	ofstream outfile__array_neurongroup_3_wI_1;
	outfile__array_neurongroup_3_wI_1.open("results\\_array_neurongroup_3_wI_1_-4850188458182034981", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_wI_1.is_open())
	{
		outfile__array_neurongroup_3_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_3_wI_1), 100*sizeof(_array_neurongroup_3_wI_1[0]));
		outfile__array_neurongroup_3_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_3_wI_2;
	outfile__array_neurongroup_3_wI_2.open("results\\_array_neurongroup_3_wI_2_8904725970362485434", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_wI_2.is_open())
	{
		outfile__array_neurongroup_3_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_3_wI_2), 100*sizeof(_array_neurongroup_3_wI_2[0]));
		outfile__array_neurongroup_3_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_3_wI_3;
	outfile__array_neurongroup_3_wI_3.open("results\\_array_neurongroup_3_wI_3_490519309273531408", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_wI_3.is_open())
	{
		outfile__array_neurongroup_3_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_3_wI_3), 100*sizeof(_array_neurongroup_3_wI_3[0]));
		outfile__array_neurongroup_3_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_3_y;
	outfile__array_neurongroup_3_y.open("results\\_array_neurongroup_3_y_5916596451890053793", ios::binary | ios::out);
	if(outfile__array_neurongroup_3_y.is_open())
	{
		outfile__array_neurongroup_3_y.write(reinterpret_cast<char*>(_array_neurongroup_3_y), 100*sizeof(_array_neurongroup_3_y[0]));
		outfile__array_neurongroup_3_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_3_y." << endl;
	}
	ofstream outfile__array_neurongroup_4__spikespace;
	outfile__array_neurongroup_4__spikespace.open("results\\_array_neurongroup_4__spikespace_1878394784799523308", ios::binary | ios::out);
	if(outfile__array_neurongroup_4__spikespace.is_open())
	{
		outfile__array_neurongroup_4__spikespace.write(reinterpret_cast<char*>(_array_neurongroup_4__spikespace), 101*sizeof(_array_neurongroup_4__spikespace[0]));
		outfile__array_neurongroup_4__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_4_d;
	outfile__array_neurongroup_4_d.open("results\\_array_neurongroup_4_d_-2791200491769721044", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_d.is_open())
	{
		outfile__array_neurongroup_4_d.write(reinterpret_cast<char*>(_array_neurongroup_4_d), 100*sizeof(_array_neurongroup_4_d[0]));
		outfile__array_neurongroup_4_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_d." << endl;
	}
	ofstream outfile__array_neurongroup_4_i;
	outfile__array_neurongroup_4_i.open("results\\_array_neurongroup_4_i_-427991100816158229", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_i.is_open())
	{
		outfile__array_neurongroup_4_i.write(reinterpret_cast<char*>(_array_neurongroup_4_i), 100*sizeof(_array_neurongroup_4_i[0]));
		outfile__array_neurongroup_4_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_i." << endl;
	}
	ofstream outfile__array_neurongroup_4_lastspike;
	outfile__array_neurongroup_4_lastspike.open("results\\_array_neurongroup_4_lastspike_-950990237151295685", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_lastspike.is_open())
	{
		outfile__array_neurongroup_4_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_4_lastspike), 100*sizeof(_array_neurongroup_4_lastspike[0]));
		outfile__array_neurongroup_4_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_4_not_refractory;
	outfile__array_neurongroup_4_not_refractory.open("results\\_array_neurongroup_4_not_refractory_1650970236926126591", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_not_refractory.is_open())
	{
		outfile__array_neurongroup_4_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_4_not_refractory), 100*sizeof(_array_neurongroup_4_not_refractory[0]));
		outfile__array_neurongroup_4_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_4_u;
	outfile__array_neurongroup_4_u.open("results\\_array_neurongroup_4_u_6205333913406158743", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_u.is_open())
	{
		outfile__array_neurongroup_4_u.write(reinterpret_cast<char*>(_array_neurongroup_4_u), 100*sizeof(_array_neurongroup_4_u[0]));
		outfile__array_neurongroup_4_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_u." << endl;
	}
	ofstream outfile__array_neurongroup_4_v;
	outfile__array_neurongroup_4_v.open("results\\_array_neurongroup_4_v_-28592531658672698", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_v.is_open())
	{
		outfile__array_neurongroup_4_v.write(reinterpret_cast<char*>(_array_neurongroup_4_v), 100*sizeof(_array_neurongroup_4_v[0]));
		outfile__array_neurongroup_4_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_v." << endl;
	}
	ofstream outfile__array_neurongroup_4_wE;
	outfile__array_neurongroup_4_wE.open("results\\_array_neurongroup_4_wE_4028758426083770300", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_wE.is_open())
	{
		outfile__array_neurongroup_4_wE.write(reinterpret_cast<char*>(_array_neurongroup_4_wE), 100*sizeof(_array_neurongroup_4_wE[0]));
		outfile__array_neurongroup_4_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_wE." << endl;
	}
	ofstream outfile__array_neurongroup_4_wE2;
	outfile__array_neurongroup_4_wE2.open("results\\_array_neurongroup_4_wE2_-2510683018561542240", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_wE2.is_open())
	{
		outfile__array_neurongroup_4_wE2.write(reinterpret_cast<char*>(_array_neurongroup_4_wE2), 100*sizeof(_array_neurongroup_4_wE2[0]));
		outfile__array_neurongroup_4_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_wE2." << endl;
	}
	ofstream outfile__array_neurongroup_4_wI_1;
	outfile__array_neurongroup_4_wI_1.open("results\\_array_neurongroup_4_wI_1_-2167182576385446024", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_wI_1.is_open())
	{
		outfile__array_neurongroup_4_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_4_wI_1), 100*sizeof(_array_neurongroup_4_wI_1[0]));
		outfile__array_neurongroup_4_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_4_wI_2;
	outfile__array_neurongroup_4_wI_2.open("results\\_array_neurongroup_4_wI_2_-6844968511499435113", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_wI_2.is_open())
	{
		outfile__array_neurongroup_4_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_4_wI_2), 100*sizeof(_array_neurongroup_4_wI_2[0]));
		outfile__array_neurongroup_4_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_4_wI_3;
	outfile__array_neurongroup_4_wI_3.open("results\\_array_neurongroup_4_wI_3_-4301292992060402941", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_wI_3.is_open())
	{
		outfile__array_neurongroup_4_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_4_wI_3), 100*sizeof(_array_neurongroup_4_wI_3[0]));
		outfile__array_neurongroup_4_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_4_y;
	outfile__array_neurongroup_4_y.open("results\\_array_neurongroup_4_y_-7577273891848062804", ios::binary | ios::out);
	if(outfile__array_neurongroup_4_y.is_open())
	{
		outfile__array_neurongroup_4_y.write(reinterpret_cast<char*>(_array_neurongroup_4_y), 100*sizeof(_array_neurongroup_4_y[0]));
		outfile__array_neurongroup_4_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_4_y." << endl;
	}
	ofstream outfile__array_neurongroup_5__spikespace;
	outfile__array_neurongroup_5__spikespace.open("results\\_array_neurongroup_5__spikespace_6711225880225852831", ios::binary | ios::out);
	if(outfile__array_neurongroup_5__spikespace.is_open())
	{
		outfile__array_neurongroup_5__spikespace.write(reinterpret_cast<char*>(_array_neurongroup_5__spikespace), 101*sizeof(_array_neurongroup_5__spikespace[0]));
		outfile__array_neurongroup_5__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_5_d;
	outfile__array_neurongroup_5_d.open("results\\_array_neurongroup_5_d_-1193389069132301247", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_d.is_open())
	{
		outfile__array_neurongroup_5_d.write(reinterpret_cast<char*>(_array_neurongroup_5_d), 100*sizeof(_array_neurongroup_5_d[0]));
		outfile__array_neurongroup_5_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_d." << endl;
	}
	ofstream outfile__array_neurongroup_5_i;
	outfile__array_neurongroup_5_i.open("results\\_array_neurongroup_5_i_-2806168971345994861", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_i.is_open())
	{
		outfile__array_neurongroup_5_i.write(reinterpret_cast<char*>(_array_neurongroup_5_i), 100*sizeof(_array_neurongroup_5_i[0]));
		outfile__array_neurongroup_5_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_i." << endl;
	}
	ofstream outfile__array_neurongroup_5_lastspike;
	outfile__array_neurongroup_5_lastspike.open("results\\_array_neurongroup_5_lastspike_-4264886149668535705", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_lastspike.is_open())
	{
		outfile__array_neurongroup_5_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_5_lastspike), 100*sizeof(_array_neurongroup_5_lastspike[0]));
		outfile__array_neurongroup_5_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_5_not_refractory;
	outfile__array_neurongroup_5_not_refractory.open("results\\_array_neurongroup_5_not_refractory_2909492077428280234", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_not_refractory.is_open())
	{
		outfile__array_neurongroup_5_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_5_not_refractory), 100*sizeof(_array_neurongroup_5_not_refractory[0]));
		outfile__array_neurongroup_5_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_5_u;
	outfile__array_neurongroup_5_u.open("results\\_array_neurongroup_5_u_-4206750724419495667", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_u.is_open())
	{
		outfile__array_neurongroup_5_u.write(reinterpret_cast<char*>(_array_neurongroup_5_u), 100*sizeof(_array_neurongroup_5_u[0]));
		outfile__array_neurongroup_5_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_u." << endl;
	}
	ofstream outfile__array_neurongroup_5_v;
	outfile__array_neurongroup_5_v.open("results\\_array_neurongroup_5_v_317764467567503743", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_v.is_open())
	{
		outfile__array_neurongroup_5_v.write(reinterpret_cast<char*>(_array_neurongroup_5_v), 100*sizeof(_array_neurongroup_5_v[0]));
		outfile__array_neurongroup_5_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_v." << endl;
	}
	ofstream outfile__array_neurongroup_5_wE;
	outfile__array_neurongroup_5_wE.open("results\\_array_neurongroup_5_wE_-8099706752756808611", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_wE.is_open())
	{
		outfile__array_neurongroup_5_wE.write(reinterpret_cast<char*>(_array_neurongroup_5_wE), 100*sizeof(_array_neurongroup_5_wE[0]));
		outfile__array_neurongroup_5_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_wE." << endl;
	}
	ofstream outfile__array_neurongroup_5_wE2;
	outfile__array_neurongroup_5_wE2.open("results\\_array_neurongroup_5_wE2_5274542990871234543", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_wE2.is_open())
	{
		outfile__array_neurongroup_5_wE2.write(reinterpret_cast<char*>(_array_neurongroup_5_wE2), 100*sizeof(_array_neurongroup_5_wE2[0]));
		outfile__array_neurongroup_5_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_wE2." << endl;
	}
	ofstream outfile__array_neurongroup_5_wI_1;
	outfile__array_neurongroup_5_wI_1.open("results\\_array_neurongroup_5_wI_1_7934762363227559203", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_wI_1.is_open())
	{
		outfile__array_neurongroup_5_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_5_wI_1), 100*sizeof(_array_neurongroup_5_wI_1[0]));
		outfile__array_neurongroup_5_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_5_wI_2;
	outfile__array_neurongroup_5_wI_2.open("results\\_array_neurongroup_5_wI_2_4563281765747419166", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_wI_2.is_open())
	{
		outfile__array_neurongroup_5_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_5_wI_2), 100*sizeof(_array_neurongroup_5_wI_2[0]));
		outfile__array_neurongroup_5_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_5_wI_3;
	outfile__array_neurongroup_5_wI_3.open("results\\_array_neurongroup_5_wI_3_-6564368563115088089", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_wI_3.is_open())
	{
		outfile__array_neurongroup_5_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_5_wI_3), 100*sizeof(_array_neurongroup_5_wI_3[0]));
		outfile__array_neurongroup_5_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_5_y;
	outfile__array_neurongroup_5_y.open("results\\_array_neurongroup_5_y_5141674142484109895", ios::binary | ios::out);
	if(outfile__array_neurongroup_5_y.is_open())
	{
		outfile__array_neurongroup_5_y.write(reinterpret_cast<char*>(_array_neurongroup_5_y), 100*sizeof(_array_neurongroup_5_y[0]));
		outfile__array_neurongroup_5_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_5_y." << endl;
	}
	ofstream outfile__array_neurongroup_6__spikespace;
	outfile__array_neurongroup_6__spikespace.open("results\\_array_neurongroup_6__spikespace_689594564330884468", ios::binary | ios::out);
	if(outfile__array_neurongroup_6__spikespace.is_open())
	{
		outfile__array_neurongroup_6__spikespace.write(reinterpret_cast<char*>(_array_neurongroup_6__spikespace), 101*sizeof(_array_neurongroup_6__spikespace[0]));
		outfile__array_neurongroup_6__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_6_d;
	outfile__array_neurongroup_6_d.open("results\\_array_neurongroup_6_d_6151648992796617554", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_d.is_open())
	{
		outfile__array_neurongroup_6_d.write(reinterpret_cast<char*>(_array_neurongroup_6_d), 100*sizeof(_array_neurongroup_6_d[0]));
		outfile__array_neurongroup_6_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_d." << endl;
	}
	ofstream outfile__array_neurongroup_6_i;
	outfile__array_neurongroup_6_i.open("results\\_array_neurongroup_6_i_-8832768809944490089", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_i.is_open())
	{
		outfile__array_neurongroup_6_i.write(reinterpret_cast<char*>(_array_neurongroup_6_i), 100*sizeof(_array_neurongroup_6_i[0]));
		outfile__array_neurongroup_6_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_i." << endl;
	}
	ofstream outfile__array_neurongroup_6_lastspike;
	outfile__array_neurongroup_6_lastspike.open("results\\_array_neurongroup_6_lastspike_2612834346991962360", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_lastspike.is_open())
	{
		outfile__array_neurongroup_6_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_6_lastspike), 100*sizeof(_array_neurongroup_6_lastspike[0]));
		outfile__array_neurongroup_6_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_6_not_refractory;
	outfile__array_neurongroup_6_not_refractory.open("results\\_array_neurongroup_6_not_refractory_657821286507577530", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_not_refractory.is_open())
	{
		outfile__array_neurongroup_6_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_6_not_refractory), 100*sizeof(_array_neurongroup_6_not_refractory[0]));
		outfile__array_neurongroup_6_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_6_u;
	outfile__array_neurongroup_6_u.open("results\\_array_neurongroup_6_u_5464278709273183559", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_u.is_open())
	{
		outfile__array_neurongroup_6_u.write(reinterpret_cast<char*>(_array_neurongroup_6_u), 100*sizeof(_array_neurongroup_6_u[0]));
		outfile__array_neurongroup_6_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_u." << endl;
	}
	ofstream outfile__array_neurongroup_6_v;
	outfile__array_neurongroup_6_v.open("results\\_array_neurongroup_6_v_-6774772694698016780", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_v.is_open())
	{
		outfile__array_neurongroup_6_v.write(reinterpret_cast<char*>(_array_neurongroup_6_v), 100*sizeof(_array_neurongroup_6_v[0]));
		outfile__array_neurongroup_6_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_v." << endl;
	}
	ofstream outfile__array_neurongroup_6_wE;
	outfile__array_neurongroup_6_wE.open("results\\_array_neurongroup_6_wE_-3197077875784011532", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_wE.is_open())
	{
		outfile__array_neurongroup_6_wE.write(reinterpret_cast<char*>(_array_neurongroup_6_wE), 100*sizeof(_array_neurongroup_6_wE[0]));
		outfile__array_neurongroup_6_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_wE." << endl;
	}
	ofstream outfile__array_neurongroup_6_wE2;
	outfile__array_neurongroup_6_wE2.open("results\\_array_neurongroup_6_wE2_4707556381296820164", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_wE2.is_open())
	{
		outfile__array_neurongroup_6_wE2.write(reinterpret_cast<char*>(_array_neurongroup_6_wE2), 100*sizeof(_array_neurongroup_6_wE2[0]));
		outfile__array_neurongroup_6_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_wE2." << endl;
	}
	ofstream outfile__array_neurongroup_6_wI_1;
	outfile__array_neurongroup_6_wI_1.open("results\\_array_neurongroup_6_wI_1_-8341274694349770476", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_wI_1.is_open())
	{
		outfile__array_neurongroup_6_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_6_wI_1), 100*sizeof(_array_neurongroup_6_wI_1[0]));
		outfile__array_neurongroup_6_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_6_wI_2;
	outfile__array_neurongroup_6_wI_2.open("results\\_array_neurongroup_6_wI_2_-3276607131878097470", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_wI_2.is_open())
	{
		outfile__array_neurongroup_6_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_6_wI_2), 100*sizeof(_array_neurongroup_6_wI_2[0]));
		outfile__array_neurongroup_6_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_6_wI_3;
	outfile__array_neurongroup_6_wI_3.open("results\\_array_neurongroup_6_wI_3_6438997594852426749", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_wI_3.is_open())
	{
		outfile__array_neurongroup_6_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_6_wI_3), 100*sizeof(_array_neurongroup_6_wI_3[0]));
		outfile__array_neurongroup_6_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_6_y;
	outfile__array_neurongroup_6_y.open("results\\_array_neurongroup_6_y_2508078399369668884", ios::binary | ios::out);
	if(outfile__array_neurongroup_6_y.is_open())
	{
		outfile__array_neurongroup_6_y.write(reinterpret_cast<char*>(_array_neurongroup_6_y), 100*sizeof(_array_neurongroup_6_y[0]));
		outfile__array_neurongroup_6_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_6_y." << endl;
	}
	ofstream outfile__array_neurongroup__spikespace;
	outfile__array_neurongroup__spikespace.open("results\\_array_neurongroup__spikespace_7511996022975766569", ios::binary | ios::out);
	if(outfile__array_neurongroup__spikespace.is_open())
	{
		outfile__array_neurongroup__spikespace.write(reinterpret_cast<char*>(_array_neurongroup__spikespace), 101*sizeof(_array_neurongroup__spikespace[0]));
		outfile__array_neurongroup__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup__spikespace." << endl;
	}
	ofstream outfile__array_neurongroup_d;
	outfile__array_neurongroup_d.open("results\\_array_neurongroup_d_546448161245093484", ios::binary | ios::out);
	if(outfile__array_neurongroup_d.is_open())
	{
		outfile__array_neurongroup_d.write(reinterpret_cast<char*>(_array_neurongroup_d), 100*sizeof(_array_neurongroup_d[0]));
		outfile__array_neurongroup_d.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_d." << endl;
	}
	ofstream outfile__array_neurongroup_i;
	outfile__array_neurongroup_i.open("results\\_array_neurongroup_i_377585765794834068", ios::binary | ios::out);
	if(outfile__array_neurongroup_i.is_open())
	{
		outfile__array_neurongroup_i.write(reinterpret_cast<char*>(_array_neurongroup_i), 100*sizeof(_array_neurongroup_i[0]));
		outfile__array_neurongroup_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_i." << endl;
	}
	ofstream outfile__array_neurongroup_lastspike;
	outfile__array_neurongroup_lastspike.open("results\\_array_neurongroup_lastspike_3145195735157597235", ios::binary | ios::out);
	if(outfile__array_neurongroup_lastspike.is_open())
	{
		outfile__array_neurongroup_lastspike.write(reinterpret_cast<char*>(_array_neurongroup_lastspike), 100*sizeof(_array_neurongroup_lastspike[0]));
		outfile__array_neurongroup_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_lastspike." << endl;
	}
	ofstream outfile__array_neurongroup_not_refractory;
	outfile__array_neurongroup_not_refractory.open("results\\_array_neurongroup_not_refractory_6646420844433785755", ios::binary | ios::out);
	if(outfile__array_neurongroup_not_refractory.is_open())
	{
		outfile__array_neurongroup_not_refractory.write(reinterpret_cast<char*>(_array_neurongroup_not_refractory), 100*sizeof(_array_neurongroup_not_refractory[0]));
		outfile__array_neurongroup_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_not_refractory." << endl;
	}
	ofstream outfile__array_neurongroup_u;
	outfile__array_neurongroup_u.open("results\\_array_neurongroup_u_1943745213982962131", ios::binary | ios::out);
	if(outfile__array_neurongroup_u.is_open())
	{
		outfile__array_neurongroup_u.write(reinterpret_cast<char*>(_array_neurongroup_u), 100*sizeof(_array_neurongroup_u[0]));
		outfile__array_neurongroup_u.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_u." << endl;
	}
	ofstream outfile__array_neurongroup_v;
	outfile__array_neurongroup_v.open("results\\_array_neurongroup_v_-3705708810684042476", ios::binary | ios::out);
	if(outfile__array_neurongroup_v.is_open())
	{
		outfile__array_neurongroup_v.write(reinterpret_cast<char*>(_array_neurongroup_v), 100*sizeof(_array_neurongroup_v[0]));
		outfile__array_neurongroup_v.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_v." << endl;
	}
	ofstream outfile__array_neurongroup_wE;
	outfile__array_neurongroup_wE.open("results\\_array_neurongroup_wE_1737909347597252413", ios::binary | ios::out);
	if(outfile__array_neurongroup_wE.is_open())
	{
		outfile__array_neurongroup_wE.write(reinterpret_cast<char*>(_array_neurongroup_wE), 100*sizeof(_array_neurongroup_wE[0]));
		outfile__array_neurongroup_wE.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_wE." << endl;
	}
	ofstream outfile__array_neurongroup_wI_1;
	outfile__array_neurongroup_wI_1.open("results\\_array_neurongroup_wI_1_-8781247034502243135", ios::binary | ios::out);
	if(outfile__array_neurongroup_wI_1.is_open())
	{
		outfile__array_neurongroup_wI_1.write(reinterpret_cast<char*>(_array_neurongroup_wI_1), 100*sizeof(_array_neurongroup_wI_1[0]));
		outfile__array_neurongroup_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_wI_1." << endl;
	}
	ofstream outfile__array_neurongroup_wI_2;
	outfile__array_neurongroup_wI_2.open("results\\_array_neurongroup_wI_2_7747836670638875650", ios::binary | ios::out);
	if(outfile__array_neurongroup_wI_2.is_open())
	{
		outfile__array_neurongroup_wI_2.write(reinterpret_cast<char*>(_array_neurongroup_wI_2), 100*sizeof(_array_neurongroup_wI_2[0]));
		outfile__array_neurongroup_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_wI_2." << endl;
	}
	ofstream outfile__array_neurongroup_wI_3;
	outfile__array_neurongroup_wI_3.open("results\\_array_neurongroup_wI_3_2225735067608247486", ios::binary | ios::out);
	if(outfile__array_neurongroup_wI_3.is_open())
	{
		outfile__array_neurongroup_wI_3.write(reinterpret_cast<char*>(_array_neurongroup_wI_3), 100*sizeof(_array_neurongroup_wI_3[0]));
		outfile__array_neurongroup_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_wI_3." << endl;
	}
	ofstream outfile__array_neurongroup_y;
	outfile__array_neurongroup_y.open("results\\_array_neurongroup_y_-8123800446009677231", ios::binary | ios::out);
	if(outfile__array_neurongroup_y.is_open())
	{
		outfile__array_neurongroup_y.write(reinterpret_cast<char*>(_array_neurongroup_y), 100*sizeof(_array_neurongroup_y[0]));
		outfile__array_neurongroup_y.close();
	} else
	{
		std::cout << "Error writing output file for _array_neurongroup_y." << endl;
	}
	ofstream outfile__array_ratemonitor_1_N;
	outfile__array_ratemonitor_1_N.open("results\\_array_ratemonitor_1_N_5847176615380913793", ios::binary | ios::out);
	if(outfile__array_ratemonitor_1_N.is_open())
	{
		outfile__array_ratemonitor_1_N.write(reinterpret_cast<char*>(_array_ratemonitor_1_N), 1*sizeof(_array_ratemonitor_1_N[0]));
		outfile__array_ratemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_1_N." << endl;
	}
	ofstream outfile__array_ratemonitor_2_N;
	outfile__array_ratemonitor_2_N.open("results\\_array_ratemonitor_2_N_7294286845309606582", ios::binary | ios::out);
	if(outfile__array_ratemonitor_2_N.is_open())
	{
		outfile__array_ratemonitor_2_N.write(reinterpret_cast<char*>(_array_ratemonitor_2_N), 1*sizeof(_array_ratemonitor_2_N[0]));
		outfile__array_ratemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_2_N." << endl;
	}
	ofstream outfile__array_ratemonitor_3_N;
	outfile__array_ratemonitor_3_N.open("results\\_array_ratemonitor_3_N_-5938355775900921386", ios::binary | ios::out);
	if(outfile__array_ratemonitor_3_N.is_open())
	{
		outfile__array_ratemonitor_3_N.write(reinterpret_cast<char*>(_array_ratemonitor_3_N), 1*sizeof(_array_ratemonitor_3_N[0]));
		outfile__array_ratemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_3_N." << endl;
	}
	ofstream outfile__array_ratemonitor_4_N;
	outfile__array_ratemonitor_4_N.open("results\\_array_ratemonitor_4_N_6188018910237510370", ios::binary | ios::out);
	if(outfile__array_ratemonitor_4_N.is_open())
	{
		outfile__array_ratemonitor_4_N.write(reinterpret_cast<char*>(_array_ratemonitor_4_N), 1*sizeof(_array_ratemonitor_4_N[0]));
		outfile__array_ratemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_4_N." << endl;
	}
	ofstream outfile__array_ratemonitor_5_N;
	outfile__array_ratemonitor_5_N.open("results\\_array_ratemonitor_5_N_-5873060385655998746", ios::binary | ios::out);
	if(outfile__array_ratemonitor_5_N.is_open())
	{
		outfile__array_ratemonitor_5_N.write(reinterpret_cast<char*>(_array_ratemonitor_5_N), 1*sizeof(_array_ratemonitor_5_N[0]));
		outfile__array_ratemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_5_N." << endl;
	}
	ofstream outfile__array_ratemonitor_6_N;
	outfile__array_ratemonitor_6_N.open("results\\_array_ratemonitor_6_N_-6803982153880494090", ios::binary | ios::out);
	if(outfile__array_ratemonitor_6_N.is_open())
	{
		outfile__array_ratemonitor_6_N.write(reinterpret_cast<char*>(_array_ratemonitor_6_N), 1*sizeof(_array_ratemonitor_6_N[0]));
		outfile__array_ratemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_6_N." << endl;
	}
	ofstream outfile__array_ratemonitor_N;
	outfile__array_ratemonitor_N.open("results\\_array_ratemonitor_N_-8520201816696623615", ios::binary | ios::out);
	if(outfile__array_ratemonitor_N.is_open())
	{
		outfile__array_ratemonitor_N.write(reinterpret_cast<char*>(_array_ratemonitor_N), 1*sizeof(_array_ratemonitor_N[0]));
		outfile__array_ratemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_ratemonitor_N." << endl;
	}
	ofstream outfile__array_spikemonitor_1__source_idx;
	outfile__array_spikemonitor_1__source_idx.open("results\\_array_spikemonitor_1__source_idx_-3312315957383515544", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1__source_idx.is_open())
	{
		outfile__array_spikemonitor_1__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_1__source_idx), 100*sizeof(_array_spikemonitor_1__source_idx[0]));
		outfile__array_spikemonitor_1__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_1_count;
	outfile__array_spikemonitor_1_count.open("results\\_array_spikemonitor_1_count_-2525722560330179222", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1_count.is_open())
	{
		outfile__array_spikemonitor_1_count.write(reinterpret_cast<char*>(_array_spikemonitor_1_count), 100*sizeof(_array_spikemonitor_1_count[0]));
		outfile__array_spikemonitor_1_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1_count." << endl;
	}
	ofstream outfile__array_spikemonitor_1_N;
	outfile__array_spikemonitor_1_N.open("results\\_array_spikemonitor_1_N_581411362964438250", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1_N.is_open())
	{
		outfile__array_spikemonitor_1_N.write(reinterpret_cast<char*>(_array_spikemonitor_1_N), 1*sizeof(_array_spikemonitor_1_N[0]));
		outfile__array_spikemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1_N." << endl;
	}
	ofstream outfile__array_spikemonitor_2__source_idx;
	outfile__array_spikemonitor_2__source_idx.open("results\\_array_spikemonitor_2__source_idx_1909503060183508036", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2__source_idx.is_open())
	{
		outfile__array_spikemonitor_2__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_2__source_idx), 100*sizeof(_array_spikemonitor_2__source_idx[0]));
		outfile__array_spikemonitor_2__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_2_count;
	outfile__array_spikemonitor_2_count.open("results\\_array_spikemonitor_2_count_753503335748089017", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2_count.is_open())
	{
		outfile__array_spikemonitor_2_count.write(reinterpret_cast<char*>(_array_spikemonitor_2_count), 100*sizeof(_array_spikemonitor_2_count[0]));
		outfile__array_spikemonitor_2_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2_count." << endl;
	}
	ofstream outfile__array_spikemonitor_2_N;
	outfile__array_spikemonitor_2_N.open("results\\_array_spikemonitor_2_N_452096474925639433", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2_N.is_open())
	{
		outfile__array_spikemonitor_2_N.write(reinterpret_cast<char*>(_array_spikemonitor_2_N), 1*sizeof(_array_spikemonitor_2_N[0]));
		outfile__array_spikemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2_N." << endl;
	}
	ofstream outfile__array_spikemonitor_3__source_idx;
	outfile__array_spikemonitor_3__source_idx.open("results\\_array_spikemonitor_3__source_idx_3401340913237208945", ios::binary | ios::out);
	if(outfile__array_spikemonitor_3__source_idx.is_open())
	{
		outfile__array_spikemonitor_3__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_3__source_idx), 100*sizeof(_array_spikemonitor_3__source_idx[0]));
		outfile__array_spikemonitor_3__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_3__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_3_count;
	outfile__array_spikemonitor_3_count.open("results\\_array_spikemonitor_3_count_-5785319579045977993", ios::binary | ios::out);
	if(outfile__array_spikemonitor_3_count.is_open())
	{
		outfile__array_spikemonitor_3_count.write(reinterpret_cast<char*>(_array_spikemonitor_3_count), 100*sizeof(_array_spikemonitor_3_count[0]));
		outfile__array_spikemonitor_3_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_3_count." << endl;
	}
	ofstream outfile__array_spikemonitor_3_N;
	outfile__array_spikemonitor_3_N.open("results\\_array_spikemonitor_3_N_-7923176442552465685", ios::binary | ios::out);
	if(outfile__array_spikemonitor_3_N.is_open())
	{
		outfile__array_spikemonitor_3_N.write(reinterpret_cast<char*>(_array_spikemonitor_3_N), 1*sizeof(_array_spikemonitor_3_N[0]));
		outfile__array_spikemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_3_N." << endl;
	}
	ofstream outfile__array_spikemonitor_4__source_idx;
	outfile__array_spikemonitor_4__source_idx.open("results\\_array_spikemonitor_4__source_idx_1768732044841531388", ios::binary | ios::out);
	if(outfile__array_spikemonitor_4__source_idx.is_open())
	{
		outfile__array_spikemonitor_4__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_4__source_idx), 100*sizeof(_array_spikemonitor_4__source_idx[0]));
		outfile__array_spikemonitor_4__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_4__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_4_count;
	outfile__array_spikemonitor_4_count.open("results\\_array_spikemonitor_4_count_3039920837490424997", ios::binary | ios::out);
	if(outfile__array_spikemonitor_4_count.is_open())
	{
		outfile__array_spikemonitor_4_count.write(reinterpret_cast<char*>(_array_spikemonitor_4_count), 100*sizeof(_array_spikemonitor_4_count[0]));
		outfile__array_spikemonitor_4_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_4_count." << endl;
	}
	ofstream outfile__array_spikemonitor_4_N;
	outfile__array_spikemonitor_4_N.open("results\\_array_spikemonitor_4_N_-6072600049276703875", ios::binary | ios::out);
	if(outfile__array_spikemonitor_4_N.is_open())
	{
		outfile__array_spikemonitor_4_N.write(reinterpret_cast<char*>(_array_spikemonitor_4_N), 1*sizeof(_array_spikemonitor_4_N[0]));
		outfile__array_spikemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_4_N." << endl;
	}
	ofstream outfile__array_spikemonitor_5__source_idx;
	outfile__array_spikemonitor_5__source_idx.open("results\\_array_spikemonitor_5__source_idx_-1692991370655095655", ios::binary | ios::out);
	if(outfile__array_spikemonitor_5__source_idx.is_open())
	{
		outfile__array_spikemonitor_5__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_5__source_idx), 100*sizeof(_array_spikemonitor_5__source_idx[0]));
		outfile__array_spikemonitor_5__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_5__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_5_count;
	outfile__array_spikemonitor_5_count.open("results\\_array_spikemonitor_5_count_-4650908741369208252", ios::binary | ios::out);
	if(outfile__array_spikemonitor_5_count.is_open())
	{
		outfile__array_spikemonitor_5_count.write(reinterpret_cast<char*>(_array_spikemonitor_5_count), 100*sizeof(_array_spikemonitor_5_count[0]));
		outfile__array_spikemonitor_5_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_5_count." << endl;
	}
	ofstream outfile__array_spikemonitor_5_N;
	outfile__array_spikemonitor_5_N.open("results\\_array_spikemonitor_5_N_6791493896039246426", ios::binary | ios::out);
	if(outfile__array_spikemonitor_5_N.is_open())
	{
		outfile__array_spikemonitor_5_N.write(reinterpret_cast<char*>(_array_spikemonitor_5_N), 1*sizeof(_array_spikemonitor_5_N[0]));
		outfile__array_spikemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_5_N." << endl;
	}
	ofstream outfile__array_spikemonitor_6__source_idx;
	outfile__array_spikemonitor_6__source_idx.open("results\\_array_spikemonitor_6__source_idx_6658562254732594822", ios::binary | ios::out);
	if(outfile__array_spikemonitor_6__source_idx.is_open())
	{
		outfile__array_spikemonitor_6__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_6__source_idx), 100*sizeof(_array_spikemonitor_6__source_idx[0]));
		outfile__array_spikemonitor_6__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_6__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_6_count;
	outfile__array_spikemonitor_6_count.open("results\\_array_spikemonitor_6_count_5960230842196145982", ios::binary | ios::out);
	if(outfile__array_spikemonitor_6_count.is_open())
	{
		outfile__array_spikemonitor_6_count.write(reinterpret_cast<char*>(_array_spikemonitor_6_count), 100*sizeof(_array_spikemonitor_6_count[0]));
		outfile__array_spikemonitor_6_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_6_count." << endl;
	}
	ofstream outfile__array_spikemonitor_6_N;
	outfile__array_spikemonitor_6_N.open("results\\_array_spikemonitor_6_N_-4543168520321317543", ios::binary | ios::out);
	if(outfile__array_spikemonitor_6_N.is_open())
	{
		outfile__array_spikemonitor_6_N.write(reinterpret_cast<char*>(_array_spikemonitor_6_N), 1*sizeof(_array_spikemonitor_6_N[0]));
		outfile__array_spikemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_6_N." << endl;
	}
	ofstream outfile__array_spikemonitor__source_idx;
	outfile__array_spikemonitor__source_idx.open("results\\_array_spikemonitor__source_idx_1539505607417406625", ios::binary | ios::out);
	if(outfile__array_spikemonitor__source_idx.is_open())
	{
		outfile__array_spikemonitor__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor__source_idx), 100*sizeof(_array_spikemonitor__source_idx[0]));
		outfile__array_spikemonitor__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_count;
	outfile__array_spikemonitor_count.open("results\\_array_spikemonitor_count_-8353371324670644179", ios::binary | ios::out);
	if(outfile__array_spikemonitor_count.is_open())
	{
		outfile__array_spikemonitor_count.write(reinterpret_cast<char*>(_array_spikemonitor_count), 100*sizeof(_array_spikemonitor_count[0]));
		outfile__array_spikemonitor_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_count." << endl;
	}
	ofstream outfile__array_spikemonitor_N;
	outfile__array_spikemonitor_N.open("results\\_array_spikemonitor_N_5340624719327254839", ios::binary | ios::out);
	if(outfile__array_spikemonitor_N.is_open())
	{
		outfile__array_spikemonitor_N.write(reinterpret_cast<char*>(_array_spikemonitor_N), 1*sizeof(_array_spikemonitor_N[0]));
		outfile__array_spikemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_N." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices;
	outfile__array_statemonitor_1__indices.open("results\\_array_statemonitor_1__indices_5460756085578368087", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices.is_open())
	{
		outfile__array_statemonitor_1__indices.write(reinterpret_cast<char*>(_array_statemonitor_1__indices), 0*sizeof(_array_statemonitor_1__indices[0]));
		outfile__array_statemonitor_1__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices." << endl;
	}
	ofstream outfile__array_statemonitor_1_N;
	outfile__array_statemonitor_1_N.open("results\\_array_statemonitor_1_N_-7556360953280066116", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N.is_open())
	{
		outfile__array_statemonitor_1_N.write(reinterpret_cast<char*>(_array_statemonitor_1_N), 1*sizeof(_array_statemonitor_1_N[0]));
		outfile__array_statemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results\\_array_statemonitor_2__indices_4131335861184451906", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 0*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results\\_array_statemonitor_2_N_-5987677643986170817", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor_3__indices;
	outfile__array_statemonitor_3__indices.open("results\\_array_statemonitor_3__indices_7476170884599560644", ios::binary | ios::out);
	if(outfile__array_statemonitor_3__indices.is_open())
	{
		outfile__array_statemonitor_3__indices.write(reinterpret_cast<char*>(_array_statemonitor_3__indices), 0*sizeof(_array_statemonitor_3__indices[0]));
		outfile__array_statemonitor_3__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3__indices." << endl;
	}
	ofstream outfile__array_statemonitor_3_N;
	outfile__array_statemonitor_3_N.open("results\\_array_statemonitor_3_N_-4843192801573143527", ios::binary | ios::out);
	if(outfile__array_statemonitor_3_N.is_open())
	{
		outfile__array_statemonitor_3_N.write(reinterpret_cast<char*>(_array_statemonitor_3_N), 1*sizeof(_array_statemonitor_3_N[0]));
		outfile__array_statemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3_N." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results\\_array_statemonitor_4__indices_2955174529840701815", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 0*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results\\_array_statemonitor_4_N_6986841380938471910", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}
	ofstream outfile__array_statemonitor_5__indices;
	outfile__array_statemonitor_5__indices.open("results\\_array_statemonitor_5__indices_8196561540491570304", ios::binary | ios::out);
	if(outfile__array_statemonitor_5__indices.is_open())
	{
		outfile__array_statemonitor_5__indices.write(reinterpret_cast<char*>(_array_statemonitor_5__indices), 0*sizeof(_array_statemonitor_5__indices[0]));
		outfile__array_statemonitor_5__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5__indices." << endl;
	}
	ofstream outfile__array_statemonitor_5_N;
	outfile__array_statemonitor_5_N.open("results\\_array_statemonitor_5_N_8871263210246650660", ios::binary | ios::out);
	if(outfile__array_statemonitor_5_N.is_open())
	{
		outfile__array_statemonitor_5_N.write(reinterpret_cast<char*>(_array_statemonitor_5_N), 1*sizeof(_array_statemonitor_5_N[0]));
		outfile__array_statemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor_6__indices;
	outfile__array_statemonitor_6__indices.open("results\\_array_statemonitor_6__indices_1102503393416769879", ios::binary | ios::out);
	if(outfile__array_statemonitor_6__indices.is_open())
	{
		outfile__array_statemonitor_6__indices.write(reinterpret_cast<char*>(_array_statemonitor_6__indices), 0*sizeof(_array_statemonitor_6__indices[0]));
		outfile__array_statemonitor_6__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6__indices." << endl;
	}
	ofstream outfile__array_statemonitor_6_N;
	outfile__array_statemonitor_6_N.open("results\\_array_statemonitor_6_N_-685677944348448056", ios::binary | ios::out);
	if(outfile__array_statemonitor_6_N.is_open())
	{
		outfile__array_statemonitor_6_N.write(reinterpret_cast<char*>(_array_statemonitor_6_N), 1*sizeof(_array_statemonitor_6_N[0]));
		outfile__array_statemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results\\_array_statemonitor__indices_3166015624472593095", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 0*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results\\_array_statemonitor_N_-580453438584685846", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}
	ofstream outfile__array_synapses_10_N;
	outfile__array_synapses_10_N.open("results\\_array_synapses_10_N_-5682487376547739547", ios::binary | ios::out);
	if(outfile__array_synapses_10_N.is_open())
	{
		outfile__array_synapses_10_N.write(reinterpret_cast<char*>(_array_synapses_10_N), 1*sizeof(_array_synapses_10_N[0]));
		outfile__array_synapses_10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_10_N." << endl;
	}
	ofstream outfile__array_synapses_11_N;
	outfile__array_synapses_11_N.open("results\\_array_synapses_11_N_-786824247474813744", ios::binary | ios::out);
	if(outfile__array_synapses_11_N.is_open())
	{
		outfile__array_synapses_11_N.write(reinterpret_cast<char*>(_array_synapses_11_N), 1*sizeof(_array_synapses_11_N[0]));
		outfile__array_synapses_11_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_11_N." << endl;
	}
	ofstream outfile__array_synapses_12_N;
	outfile__array_synapses_12_N.open("results\\_array_synapses_12_N_9176275253801742503", ios::binary | ios::out);
	if(outfile__array_synapses_12_N.is_open())
	{
		outfile__array_synapses_12_N.write(reinterpret_cast<char*>(_array_synapses_12_N), 1*sizeof(_array_synapses_12_N[0]));
		outfile__array_synapses_12_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_12_N." << endl;
	}
	ofstream outfile__array_synapses_13_N;
	outfile__array_synapses_13_N.open("results\\_array_synapses_13_N_-1914607946541448222", ios::binary | ios::out);
	if(outfile__array_synapses_13_N.is_open())
	{
		outfile__array_synapses_13_N.write(reinterpret_cast<char*>(_array_synapses_13_N), 1*sizeof(_array_synapses_13_N[0]));
		outfile__array_synapses_13_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_13_N." << endl;
	}
	ofstream outfile__array_synapses_14_N;
	outfile__array_synapses_14_N.open("results\\_array_synapses_14_N_5018946298204058857", ios::binary | ios::out);
	if(outfile__array_synapses_14_N.is_open())
	{
		outfile__array_synapses_14_N.write(reinterpret_cast<char*>(_array_synapses_14_N), 1*sizeof(_array_synapses_14_N[0]));
		outfile__array_synapses_14_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_14_N." << endl;
	}
	ofstream outfile__array_synapses_15_N;
	outfile__array_synapses_15_N.open("results\\_array_synapses_15_N_2116056735061804768", ios::binary | ios::out);
	if(outfile__array_synapses_15_N.is_open())
	{
		outfile__array_synapses_15_N.write(reinterpret_cast<char*>(_array_synapses_15_N), 1*sizeof(_array_synapses_15_N[0]));
		outfile__array_synapses_15_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_15_N." << endl;
	}
	ofstream outfile__array_synapses_16_N;
	outfile__array_synapses_16_N.open("results\\_array_synapses_16_N_-7991060641686594661", ios::binary | ios::out);
	if(outfile__array_synapses_16_N.is_open())
	{
		outfile__array_synapses_16_N.write(reinterpret_cast<char*>(_array_synapses_16_N), 1*sizeof(_array_synapses_16_N[0]));
		outfile__array_synapses_16_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_16_N." << endl;
	}
	ofstream outfile__array_synapses_17_N;
	outfile__array_synapses_17_N.open("results\\_array_synapses_17_N_-8158244243775187565", ios::binary | ios::out);
	if(outfile__array_synapses_17_N.is_open())
	{
		outfile__array_synapses_17_N.write(reinterpret_cast<char*>(_array_synapses_17_N), 1*sizeof(_array_synapses_17_N[0]));
		outfile__array_synapses_17_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_17_N." << endl;
	}
	ofstream outfile__array_synapses_18_N;
	outfile__array_synapses_18_N.open("results\\_array_synapses_18_N_-8233794473584908552", ios::binary | ios::out);
	if(outfile__array_synapses_18_N.is_open())
	{
		outfile__array_synapses_18_N.write(reinterpret_cast<char*>(_array_synapses_18_N), 1*sizeof(_array_synapses_18_N[0]));
		outfile__array_synapses_18_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_18_N." << endl;
	}
	ofstream outfile__array_synapses_1_N;
	outfile__array_synapses_1_N.open("results\\_array_synapses_1_N_6869337514068734129", ios::binary | ios::out);
	if(outfile__array_synapses_1_N.is_open())
	{
		outfile__array_synapses_1_N.write(reinterpret_cast<char*>(_array_synapses_1_N), 1*sizeof(_array_synapses_1_N[0]));
		outfile__array_synapses_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_1_N." << endl;
	}
	ofstream outfile__array_synapses_2_N;
	outfile__array_synapses_2_N.open("results\\_array_synapses_2_N_-543870857508109368", ios::binary | ios::out);
	if(outfile__array_synapses_2_N.is_open())
	{
		outfile__array_synapses_2_N.write(reinterpret_cast<char*>(_array_synapses_2_N), 1*sizeof(_array_synapses_2_N[0]));
		outfile__array_synapses_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_2_N." << endl;
	}
	ofstream outfile__array_synapses_3_N;
	outfile__array_synapses_3_N.open("results\\_array_synapses_3_N_5479454162573516254", ios::binary | ios::out);
	if(outfile__array_synapses_3_N.is_open())
	{
		outfile__array_synapses_3_N.write(reinterpret_cast<char*>(_array_synapses_3_N), 1*sizeof(_array_synapses_3_N[0]));
		outfile__array_synapses_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_3_N." << endl;
	}
	ofstream outfile__array_synapses_4_N;
	outfile__array_synapses_4_N.open("results\\_array_synapses_4_N_4116945214137262245", ios::binary | ios::out);
	if(outfile__array_synapses_4_N.is_open())
	{
		outfile__array_synapses_4_N.write(reinterpret_cast<char*>(_array_synapses_4_N), 1*sizeof(_array_synapses_4_N[0]));
		outfile__array_synapses_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_4_N." << endl;
	}
	ofstream outfile__array_synapses_5_N;
	outfile__array_synapses_5_N.open("results\\_array_synapses_5_N_-183751685392149364", ios::binary | ios::out);
	if(outfile__array_synapses_5_N.is_open())
	{
		outfile__array_synapses_5_N.write(reinterpret_cast<char*>(_array_synapses_5_N), 1*sizeof(_array_synapses_5_N[0]));
		outfile__array_synapses_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_5_N." << endl;
	}
	ofstream outfile__array_synapses_6_N;
	outfile__array_synapses_6_N.open("results\\_array_synapses_6_N_5315997640371845818", ios::binary | ios::out);
	if(outfile__array_synapses_6_N.is_open())
	{
		outfile__array_synapses_6_N.write(reinterpret_cast<char*>(_array_synapses_6_N), 1*sizeof(_array_synapses_6_N[0]));
		outfile__array_synapses_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_6_N." << endl;
	}
	ofstream outfile__array_synapses_7_N;
	outfile__array_synapses_7_N.open("results\\_array_synapses_7_N_-605460324051154414", ios::binary | ios::out);
	if(outfile__array_synapses_7_N.is_open())
	{
		outfile__array_synapses_7_N.write(reinterpret_cast<char*>(_array_synapses_7_N), 1*sizeof(_array_synapses_7_N[0]));
		outfile__array_synapses_7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_7_N." << endl;
	}
	ofstream outfile__array_synapses_8_N;
	outfile__array_synapses_8_N.open("results\\_array_synapses_8_N_-1079685056373187262", ios::binary | ios::out);
	if(outfile__array_synapses_8_N.is_open())
	{
		outfile__array_synapses_8_N.write(reinterpret_cast<char*>(_array_synapses_8_N), 1*sizeof(_array_synapses_8_N[0]));
		outfile__array_synapses_8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_8_N." << endl;
	}
	ofstream outfile__array_synapses_9_N;
	outfile__array_synapses_9_N.open("results\\_array_synapses_9_N_-1622190857605577794", ios::binary | ios::out);
	if(outfile__array_synapses_9_N.is_open())
	{
		outfile__array_synapses_9_N.write(reinterpret_cast<char*>(_array_synapses_9_N), 1*sizeof(_array_synapses_9_N[0]));
		outfile__array_synapses_9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_9_N." << endl;
	}
	ofstream outfile__array_synapses_N;
	outfile__array_synapses_N.open("results\\_array_synapses_N_-4341192878582528206", ios::binary | ios::out);
	if(outfile__array_synapses_N.is_open())
	{
		outfile__array_synapses_N.write(reinterpret_cast<char*>(_array_synapses_N), 1*sizeof(_array_synapses_N[0]));
		outfile__array_synapses_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_synapses_N." << endl;
	}

	ofstream outfile__dynamic_array_ratemonitor_1_rate;
	outfile__dynamic_array_ratemonitor_1_rate.open("results\\_dynamic_array_ratemonitor_1_rate_1863868315300256098", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_1_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_1_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_1_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_1_rate[0]), _dynamic_array_ratemonitor_1_rate.size()*sizeof(_dynamic_array_ratemonitor_1_rate[0]));
		    outfile__dynamic_array_ratemonitor_1_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_1_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_1_t;
	outfile__dynamic_array_ratemonitor_1_t.open("results\\_dynamic_array_ratemonitor_1_t_6191700298619263730", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_1_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_1_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_1_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_1_t[0]), _dynamic_array_ratemonitor_1_t.size()*sizeof(_dynamic_array_ratemonitor_1_t[0]));
		    outfile__dynamic_array_ratemonitor_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_1_t." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_2_rate;
	outfile__dynamic_array_ratemonitor_2_rate.open("results\\_dynamic_array_ratemonitor_2_rate_-8957985183793052000", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_2_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_2_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_2_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_2_rate[0]), _dynamic_array_ratemonitor_2_rate.size()*sizeof(_dynamic_array_ratemonitor_2_rate[0]));
		    outfile__dynamic_array_ratemonitor_2_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_2_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_2_t;
	outfile__dynamic_array_ratemonitor_2_t.open("results\\_dynamic_array_ratemonitor_2_t_6481895871452481476", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_2_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_2_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_2_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_2_t[0]), _dynamic_array_ratemonitor_2_t.size()*sizeof(_dynamic_array_ratemonitor_2_t[0]));
		    outfile__dynamic_array_ratemonitor_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_2_t." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_3_rate;
	outfile__dynamic_array_ratemonitor_3_rate.open("results\\_dynamic_array_ratemonitor_3_rate_969757752922433659", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_3_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_3_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_3_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_3_rate[0]), _dynamic_array_ratemonitor_3_rate.size()*sizeof(_dynamic_array_ratemonitor_3_rate[0]));
		    outfile__dynamic_array_ratemonitor_3_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_3_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_3_t;
	outfile__dynamic_array_ratemonitor_3_t.open("results\\_dynamic_array_ratemonitor_3_t_-5189610690914243691", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_3_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_3_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_3_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_3_t[0]), _dynamic_array_ratemonitor_3_t.size()*sizeof(_dynamic_array_ratemonitor_3_t[0]));
		    outfile__dynamic_array_ratemonitor_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_3_t." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_4_rate;
	outfile__dynamic_array_ratemonitor_4_rate.open("results\\_dynamic_array_ratemonitor_4_rate_-1118059370883563372", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_4_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_4_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_4_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_4_rate[0]), _dynamic_array_ratemonitor_4_rate.size()*sizeof(_dynamic_array_ratemonitor_4_rate[0]));
		    outfile__dynamic_array_ratemonitor_4_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_4_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_4_t;
	outfile__dynamic_array_ratemonitor_4_t.open("results\\_dynamic_array_ratemonitor_4_t_5308561517244501956", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_4_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_4_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_4_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_4_t[0]), _dynamic_array_ratemonitor_4_t.size()*sizeof(_dynamic_array_ratemonitor_4_t[0]));
		    outfile__dynamic_array_ratemonitor_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_4_t." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_5_rate;
	outfile__dynamic_array_ratemonitor_5_rate.open("results\\_dynamic_array_ratemonitor_5_rate_-4754909369129794045", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_5_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_5_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_5_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_5_rate[0]), _dynamic_array_ratemonitor_5_rate.size()*sizeof(_dynamic_array_ratemonitor_5_rate[0]));
		    outfile__dynamic_array_ratemonitor_5_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_5_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_5_t;
	outfile__dynamic_array_ratemonitor_5_t.open("results\\_dynamic_array_ratemonitor_5_t_-3518419957985740273", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_5_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_5_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_5_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_5_t[0]), _dynamic_array_ratemonitor_5_t.size()*sizeof(_dynamic_array_ratemonitor_5_t[0]));
		    outfile__dynamic_array_ratemonitor_5_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_5_t." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_6_rate;
	outfile__dynamic_array_ratemonitor_6_rate.open("results\\_dynamic_array_ratemonitor_6_rate_7350875293343365518", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_6_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_6_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_6_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_6_rate[0]), _dynamic_array_ratemonitor_6_rate.size()*sizeof(_dynamic_array_ratemonitor_6_rate[0]));
		    outfile__dynamic_array_ratemonitor_6_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_6_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_6_t;
	outfile__dynamic_array_ratemonitor_6_t.open("results\\_dynamic_array_ratemonitor_6_t_-5267913327661558509", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_6_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_6_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_6_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_6_t[0]), _dynamic_array_ratemonitor_6_t.size()*sizeof(_dynamic_array_ratemonitor_6_t[0]));
		    outfile__dynamic_array_ratemonitor_6_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_6_t." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_rate;
	outfile__dynamic_array_ratemonitor_rate.open("results\\_dynamic_array_ratemonitor_rate_-369561192100438737", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_rate.is_open())
	{
        if (! _dynamic_array_ratemonitor_rate.empty() )
        {
			outfile__dynamic_array_ratemonitor_rate.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_rate[0]), _dynamic_array_ratemonitor_rate.size()*sizeof(_dynamic_array_ratemonitor_rate[0]));
		    outfile__dynamic_array_ratemonitor_rate.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_rate." << endl;
	}
	ofstream outfile__dynamic_array_ratemonitor_t;
	outfile__dynamic_array_ratemonitor_t.open("results\\_dynamic_array_ratemonitor_t_1645759752235980046", ios::binary | ios::out);
	if(outfile__dynamic_array_ratemonitor_t.is_open())
	{
        if (! _dynamic_array_ratemonitor_t.empty() )
        {
			outfile__dynamic_array_ratemonitor_t.write(reinterpret_cast<char*>(&_dynamic_array_ratemonitor_t[0]), _dynamic_array_ratemonitor_t.size()*sizeof(_dynamic_array_ratemonitor_t[0]));
		    outfile__dynamic_array_ratemonitor_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_ratemonitor_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_1_i;
	outfile__dynamic_array_spikemonitor_1_i.open("results\\_dynamic_array_spikemonitor_1_i_-828647249521558598", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_1_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_1_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_1_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_1_i[0]), _dynamic_array_spikemonitor_1_i.size()*sizeof(_dynamic_array_spikemonitor_1_i[0]));
		    outfile__dynamic_array_spikemonitor_1_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_1_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_1_t;
	outfile__dynamic_array_spikemonitor_1_t.open("results\\_dynamic_array_spikemonitor_1_t_7283659271503416819", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_1_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_1_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_1_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_1_t[0]), _dynamic_array_spikemonitor_1_t.size()*sizeof(_dynamic_array_spikemonitor_1_t[0]));
		    outfile__dynamic_array_spikemonitor_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_1_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_2_i;
	outfile__dynamic_array_spikemonitor_2_i.open("results\\_dynamic_array_spikemonitor_2_i_6145746194030447212", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_2_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_2_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_2_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_2_i[0]), _dynamic_array_spikemonitor_2_i.size()*sizeof(_dynamic_array_spikemonitor_2_i[0]));
		    outfile__dynamic_array_spikemonitor_2_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_2_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_2_t;
	outfile__dynamic_array_spikemonitor_2_t.open("results\\_dynamic_array_spikemonitor_2_t_-8144012937505442098", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_2_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_2_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_2_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_2_t[0]), _dynamic_array_spikemonitor_2_t.size()*sizeof(_dynamic_array_spikemonitor_2_t[0]));
		    outfile__dynamic_array_spikemonitor_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_2_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_3_i;
	outfile__dynamic_array_spikemonitor_3_i.open("results\\_dynamic_array_spikemonitor_3_i_-4694076757624073072", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_3_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_3_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_3_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_3_i[0]), _dynamic_array_spikemonitor_3_i.size()*sizeof(_dynamic_array_spikemonitor_3_i[0]));
		    outfile__dynamic_array_spikemonitor_3_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_3_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_3_t;
	outfile__dynamic_array_spikemonitor_3_t.open("results\\_dynamic_array_spikemonitor_3_t_3081029755137356387", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_3_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_3_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_3_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_3_t[0]), _dynamic_array_spikemonitor_3_t.size()*sizeof(_dynamic_array_spikemonitor_3_t[0]));
		    outfile__dynamic_array_spikemonitor_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_3_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_4_i;
	outfile__dynamic_array_spikemonitor_4_i.open("results\\_dynamic_array_spikemonitor_4_i_-5495607552789076615", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_4_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_4_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_4_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_4_i[0]), _dynamic_array_spikemonitor_4_i.size()*sizeof(_dynamic_array_spikemonitor_4_i[0]));
		    outfile__dynamic_array_spikemonitor_4_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_4_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_4_t;
	outfile__dynamic_array_spikemonitor_4_t.open("results\\_dynamic_array_spikemonitor_4_t_72995909890145693", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_4_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_4_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_4_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_4_t[0]), _dynamic_array_spikemonitor_4_t.size()*sizeof(_dynamic_array_spikemonitor_4_t[0]));
		    outfile__dynamic_array_spikemonitor_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_4_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_5_i;
	outfile__dynamic_array_spikemonitor_5_i.open("results\\_dynamic_array_spikemonitor_5_i_-5486220222056621397", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_5_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_5_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_5_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_5_i[0]), _dynamic_array_spikemonitor_5_i.size()*sizeof(_dynamic_array_spikemonitor_5_i[0]));
		    outfile__dynamic_array_spikemonitor_5_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_5_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_5_t;
	outfile__dynamic_array_spikemonitor_5_t.open("results\\_dynamic_array_spikemonitor_5_t_-1777113054958373547", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_5_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_5_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_5_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_5_t[0]), _dynamic_array_spikemonitor_5_t.size()*sizeof(_dynamic_array_spikemonitor_5_t[0]));
		    outfile__dynamic_array_spikemonitor_5_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_5_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_6_i;
	outfile__dynamic_array_spikemonitor_6_i.open("results\\_dynamic_array_spikemonitor_6_i_8418388740764829658", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_6_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_6_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_6_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_6_i[0]), _dynamic_array_spikemonitor_6_i.size()*sizeof(_dynamic_array_spikemonitor_6_i[0]));
		    outfile__dynamic_array_spikemonitor_6_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_6_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_6_t;
	outfile__dynamic_array_spikemonitor_6_t.open("results\\_dynamic_array_spikemonitor_6_t_-7820576539637483242", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_6_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_6_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_6_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_6_t[0]), _dynamic_array_spikemonitor_6_t.size()*sizeof(_dynamic_array_spikemonitor_6_t[0]));
		    outfile__dynamic_array_spikemonitor_6_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_6_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_i;
	outfile__dynamic_array_spikemonitor_i.open("results\\_dynamic_array_spikemonitor_i_2283503251737423978", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_i[0]), _dynamic_array_spikemonitor_i.size()*sizeof(_dynamic_array_spikemonitor_i[0]));
		    outfile__dynamic_array_spikemonitor_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_t;
	outfile__dynamic_array_spikemonitor_t.open("results\\_dynamic_array_spikemonitor_t_-5720025456304399819", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_t[0]), _dynamic_array_spikemonitor_t.size()*sizeof(_dynamic_array_spikemonitor_t[0]));
		    outfile__dynamic_array_spikemonitor_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_t;
	outfile__dynamic_array_statemonitor_1_t.open("results\\_dynamic_array_statemonitor_1_t_3409302288188648265", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_t.is_open())
	{
        if (! _dynamic_array_statemonitor_1_t.empty() )
        {
			outfile__dynamic_array_statemonitor_1_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_t[0]), _dynamic_array_statemonitor_1_t.size()*sizeof(_dynamic_array_statemonitor_1_t[0]));
		    outfile__dynamic_array_statemonitor_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_t;
	outfile__dynamic_array_statemonitor_2_t.open("results\\_dynamic_array_statemonitor_2_t_-7522441421635327306", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_t.is_open())
	{
        if (! _dynamic_array_statemonitor_2_t.empty() )
        {
			outfile__dynamic_array_statemonitor_2_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_t[0]), _dynamic_array_statemonitor_2_t.size()*sizeof(_dynamic_array_statemonitor_2_t[0]));
		    outfile__dynamic_array_statemonitor_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_t;
	outfile__dynamic_array_statemonitor_3_t.open("results\\_dynamic_array_statemonitor_3_t_4243823943339001357", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_t.is_open())
	{
        if (! _dynamic_array_statemonitor_3_t.empty() )
        {
			outfile__dynamic_array_statemonitor_3_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_t[0]), _dynamic_array_statemonitor_3_t.size()*sizeof(_dynamic_array_statemonitor_3_t[0]));
		    outfile__dynamic_array_statemonitor_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_t;
	outfile__dynamic_array_statemonitor_4_t.open("results\\_dynamic_array_statemonitor_4_t_-2546067935706717328", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_t.is_open())
	{
        if (! _dynamic_array_statemonitor_4_t.empty() )
        {
			outfile__dynamic_array_statemonitor_4_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_t[0]), _dynamic_array_statemonitor_4_t.size()*sizeof(_dynamic_array_statemonitor_4_t[0]));
		    outfile__dynamic_array_statemonitor_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_t;
	outfile__dynamic_array_statemonitor_5_t.open("results\\_dynamic_array_statemonitor_5_t_-1975692232428673530", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_t.is_open())
	{
        if (! _dynamic_array_statemonitor_5_t.empty() )
        {
			outfile__dynamic_array_statemonitor_5_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_t[0]), _dynamic_array_statemonitor_5_t.size()*sizeof(_dynamic_array_statemonitor_5_t[0]));
		    outfile__dynamic_array_statemonitor_5_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_t;
	outfile__dynamic_array_statemonitor_6_t.open("results\\_dynamic_array_statemonitor_6_t_-1863971187812532039", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_t.is_open())
	{
        if (! _dynamic_array_statemonitor_6_t.empty() )
        {
			outfile__dynamic_array_statemonitor_6_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_t[0]), _dynamic_array_statemonitor_6_t.size()*sizeof(_dynamic_array_statemonitor_6_t[0]));
		    outfile__dynamic_array_statemonitor_6_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_t;
	outfile__dynamic_array_statemonitor_t.open("results\\_dynamic_array_statemonitor_t_5567511018376251802", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_t.is_open())
	{
        if (! _dynamic_array_statemonitor_t.empty() )
        {
			outfile__dynamic_array_statemonitor_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_t[0]), _dynamic_array_statemonitor_t.size()*sizeof(_dynamic_array_statemonitor_t[0]));
		    outfile__dynamic_array_statemonitor_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_t." << endl;
	}
	ofstream outfile__dynamic_array_synapses_10__synaptic_post;
	outfile__dynamic_array_synapses_10__synaptic_post.open("results\\_dynamic_array_synapses_10__synaptic_post_-2702584803200885693", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_10__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_10__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_10__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_10__synaptic_post[0]), _dynamic_array_synapses_10__synaptic_post.size()*sizeof(_dynamic_array_synapses_10__synaptic_post[0]));
		    outfile__dynamic_array_synapses_10__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_10__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_10__synaptic_pre;
	outfile__dynamic_array_synapses_10__synaptic_pre.open("results\\_dynamic_array_synapses_10__synaptic_pre_6558238247119435896", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_10__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_10__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_10__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_10__synaptic_pre[0]), _dynamic_array_synapses_10__synaptic_pre.size()*sizeof(_dynamic_array_synapses_10__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_10__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_10__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_10_delay;
	outfile__dynamic_array_synapses_10_delay.open("results\\_dynamic_array_synapses_10_delay_-4009888435074227582", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_10_delay.is_open())
	{
        if (! _dynamic_array_synapses_10_delay.empty() )
        {
			outfile__dynamic_array_synapses_10_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_10_delay[0]), _dynamic_array_synapses_10_delay.size()*sizeof(_dynamic_array_synapses_10_delay[0]));
		    outfile__dynamic_array_synapses_10_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_10_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_10_N_incoming;
	outfile__dynamic_array_synapses_10_N_incoming.open("results\\_dynamic_array_synapses_10_N_incoming_3623102269043895953", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_10_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_10_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_10_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_10_N_incoming[0]), _dynamic_array_synapses_10_N_incoming.size()*sizeof(_dynamic_array_synapses_10_N_incoming[0]));
		    outfile__dynamic_array_synapses_10_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_10_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_10_N_outgoing;
	outfile__dynamic_array_synapses_10_N_outgoing.open("results\\_dynamic_array_synapses_10_N_outgoing_7023790662199346624", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_10_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_10_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_10_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_10_N_outgoing[0]), _dynamic_array_synapses_10_N_outgoing.size()*sizeof(_dynamic_array_synapses_10_N_outgoing[0]));
		    outfile__dynamic_array_synapses_10_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_10_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_11__synaptic_post;
	outfile__dynamic_array_synapses_11__synaptic_post.open("results\\_dynamic_array_synapses_11__synaptic_post_6542894075536727471", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_11__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_11__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_11__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_11__synaptic_post[0]), _dynamic_array_synapses_11__synaptic_post.size()*sizeof(_dynamic_array_synapses_11__synaptic_post[0]));
		    outfile__dynamic_array_synapses_11__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_11__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_11__synaptic_pre;
	outfile__dynamic_array_synapses_11__synaptic_pre.open("results\\_dynamic_array_synapses_11__synaptic_pre_309798936248751277", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_11__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_11__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_11__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_11__synaptic_pre[0]), _dynamic_array_synapses_11__synaptic_pre.size()*sizeof(_dynamic_array_synapses_11__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_11__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_11__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_11_delay;
	outfile__dynamic_array_synapses_11_delay.open("results\\_dynamic_array_synapses_11_delay_1885183821018889595", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_11_delay.is_open())
	{
        if (! _dynamic_array_synapses_11_delay.empty() )
        {
			outfile__dynamic_array_synapses_11_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_11_delay[0]), _dynamic_array_synapses_11_delay.size()*sizeof(_dynamic_array_synapses_11_delay[0]));
		    outfile__dynamic_array_synapses_11_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_11_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_11_N_incoming;
	outfile__dynamic_array_synapses_11_N_incoming.open("results\\_dynamic_array_synapses_11_N_incoming_6833962756814763580", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_11_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_11_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_11_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_11_N_incoming[0]), _dynamic_array_synapses_11_N_incoming.size()*sizeof(_dynamic_array_synapses_11_N_incoming[0]));
		    outfile__dynamic_array_synapses_11_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_11_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_11_N_outgoing;
	outfile__dynamic_array_synapses_11_N_outgoing.open("results\\_dynamic_array_synapses_11_N_outgoing_1114114349509985996", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_11_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_11_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_11_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_11_N_outgoing[0]), _dynamic_array_synapses_11_N_outgoing.size()*sizeof(_dynamic_array_synapses_11_N_outgoing[0]));
		    outfile__dynamic_array_synapses_11_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_11_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_12__synaptic_post;
	outfile__dynamic_array_synapses_12__synaptic_post.open("results\\_dynamic_array_synapses_12__synaptic_post_7229970053155686856", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_12__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_12__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_12__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_12__synaptic_post[0]), _dynamic_array_synapses_12__synaptic_post.size()*sizeof(_dynamic_array_synapses_12__synaptic_post[0]));
		    outfile__dynamic_array_synapses_12__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_12__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_12__synaptic_pre;
	outfile__dynamic_array_synapses_12__synaptic_pre.open("results\\_dynamic_array_synapses_12__synaptic_pre_-5908476032357140574", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_12__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_12__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_12__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_12__synaptic_pre[0]), _dynamic_array_synapses_12__synaptic_pre.size()*sizeof(_dynamic_array_synapses_12__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_12__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_12__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_12_delay;
	outfile__dynamic_array_synapses_12_delay.open("results\\_dynamic_array_synapses_12_delay_8080454326995839267", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_12_delay.is_open())
	{
        if (! _dynamic_array_synapses_12_delay.empty() )
        {
			outfile__dynamic_array_synapses_12_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_12_delay[0]), _dynamic_array_synapses_12_delay.size()*sizeof(_dynamic_array_synapses_12_delay[0]));
		    outfile__dynamic_array_synapses_12_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_12_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_12_N_incoming;
	outfile__dynamic_array_synapses_12_N_incoming.open("results\\_dynamic_array_synapses_12_N_incoming_2194424783804977862", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_12_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_12_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_12_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_12_N_incoming[0]), _dynamic_array_synapses_12_N_incoming.size()*sizeof(_dynamic_array_synapses_12_N_incoming[0]));
		    outfile__dynamic_array_synapses_12_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_12_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_12_N_outgoing;
	outfile__dynamic_array_synapses_12_N_outgoing.open("results\\_dynamic_array_synapses_12_N_outgoing_2310645652109375826", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_12_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_12_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_12_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_12_N_outgoing[0]), _dynamic_array_synapses_12_N_outgoing.size()*sizeof(_dynamic_array_synapses_12_N_outgoing[0]));
		    outfile__dynamic_array_synapses_12_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_12_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_13__synaptic_post;
	outfile__dynamic_array_synapses_13__synaptic_post.open("results\\_dynamic_array_synapses_13__synaptic_post_4438087710538266469", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_13__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_13__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_13__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_13__synaptic_post[0]), _dynamic_array_synapses_13__synaptic_post.size()*sizeof(_dynamic_array_synapses_13__synaptic_post[0]));
		    outfile__dynamic_array_synapses_13__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_13__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_13__synaptic_pre;
	outfile__dynamic_array_synapses_13__synaptic_pre.open("results\\_dynamic_array_synapses_13__synaptic_pre_-3611196252965541956", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_13__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_13__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_13__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_13__synaptic_pre[0]), _dynamic_array_synapses_13__synaptic_pre.size()*sizeof(_dynamic_array_synapses_13__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_13__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_13__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_13_delay;
	outfile__dynamic_array_synapses_13_delay.open("results\\_dynamic_array_synapses_13_delay_1913092040929329690", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_13_delay.is_open())
	{
        if (! _dynamic_array_synapses_13_delay.empty() )
        {
			outfile__dynamic_array_synapses_13_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_13_delay[0]), _dynamic_array_synapses_13_delay.size()*sizeof(_dynamic_array_synapses_13_delay[0]));
		    outfile__dynamic_array_synapses_13_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_13_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_13_N_incoming;
	outfile__dynamic_array_synapses_13_N_incoming.open("results\\_dynamic_array_synapses_13_N_incoming_8492930902373066695", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_13_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_13_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_13_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_13_N_incoming[0]), _dynamic_array_synapses_13_N_incoming.size()*sizeof(_dynamic_array_synapses_13_N_incoming[0]));
		    outfile__dynamic_array_synapses_13_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_13_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_13_N_outgoing;
	outfile__dynamic_array_synapses_13_N_outgoing.open("results\\_dynamic_array_synapses_13_N_outgoing_-5455869780337670940", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_13_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_13_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_13_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_13_N_outgoing[0]), _dynamic_array_synapses_13_N_outgoing.size()*sizeof(_dynamic_array_synapses_13_N_outgoing[0]));
		    outfile__dynamic_array_synapses_13_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_13_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_14__synaptic_post;
	outfile__dynamic_array_synapses_14__synaptic_post.open("results\\_dynamic_array_synapses_14__synaptic_post_-2637514758963283733", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_14__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_14__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_14__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_14__synaptic_post[0]), _dynamic_array_synapses_14__synaptic_post.size()*sizeof(_dynamic_array_synapses_14__synaptic_post[0]));
		    outfile__dynamic_array_synapses_14__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_14__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_14__synaptic_pre;
	outfile__dynamic_array_synapses_14__synaptic_pre.open("results\\_dynamic_array_synapses_14__synaptic_pre_6260767634850620825", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_14__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_14__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_14__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_14__synaptic_pre[0]), _dynamic_array_synapses_14__synaptic_pre.size()*sizeof(_dynamic_array_synapses_14__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_14__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_14__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_14_delay;
	outfile__dynamic_array_synapses_14_delay.open("results\\_dynamic_array_synapses_14_delay_5339951877626828168", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_14_delay.is_open())
	{
        if (! _dynamic_array_synapses_14_delay.empty() )
        {
			outfile__dynamic_array_synapses_14_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_14_delay[0]), _dynamic_array_synapses_14_delay.size()*sizeof(_dynamic_array_synapses_14_delay[0]));
		    outfile__dynamic_array_synapses_14_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_14_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_14_N_incoming;
	outfile__dynamic_array_synapses_14_N_incoming.open("results\\_dynamic_array_synapses_14_N_incoming_6046433991382434875", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_14_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_14_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_14_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_14_N_incoming[0]), _dynamic_array_synapses_14_N_incoming.size()*sizeof(_dynamic_array_synapses_14_N_incoming[0]));
		    outfile__dynamic_array_synapses_14_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_14_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_14_N_outgoing;
	outfile__dynamic_array_synapses_14_N_outgoing.open("results\\_dynamic_array_synapses_14_N_outgoing_3366287209605677299", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_14_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_14_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_14_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_14_N_outgoing[0]), _dynamic_array_synapses_14_N_outgoing.size()*sizeof(_dynamic_array_synapses_14_N_outgoing[0]));
		    outfile__dynamic_array_synapses_14_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_14_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_15__synaptic_post;
	outfile__dynamic_array_synapses_15__synaptic_post.open("results\\_dynamic_array_synapses_15__synaptic_post_-4124739974569148884", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_15__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_15__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_15__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_15__synaptic_post[0]), _dynamic_array_synapses_15__synaptic_post.size()*sizeof(_dynamic_array_synapses_15__synaptic_post[0]));
		    outfile__dynamic_array_synapses_15__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_15__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_15__synaptic_pre;
	outfile__dynamic_array_synapses_15__synaptic_pre.open("results\\_dynamic_array_synapses_15__synaptic_pre_-5458800138361048251", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_15__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_15__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_15__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_15__synaptic_pre[0]), _dynamic_array_synapses_15__synaptic_pre.size()*sizeof(_dynamic_array_synapses_15__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_15__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_15__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_15_delay;
	outfile__dynamic_array_synapses_15_delay.open("results\\_dynamic_array_synapses_15_delay_-2988727135265231670", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_15_delay.is_open())
	{
        if (! _dynamic_array_synapses_15_delay.empty() )
        {
			outfile__dynamic_array_synapses_15_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_15_delay[0]), _dynamic_array_synapses_15_delay.size()*sizeof(_dynamic_array_synapses_15_delay[0]));
		    outfile__dynamic_array_synapses_15_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_15_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_15_N_incoming;
	outfile__dynamic_array_synapses_15_N_incoming.open("results\\_dynamic_array_synapses_15_N_incoming_-3595042330256485459", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_15_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_15_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_15_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_15_N_incoming[0]), _dynamic_array_synapses_15_N_incoming.size()*sizeof(_dynamic_array_synapses_15_N_incoming[0]));
		    outfile__dynamic_array_synapses_15_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_15_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_15_N_outgoing;
	outfile__dynamic_array_synapses_15_N_outgoing.open("results\\_dynamic_array_synapses_15_N_outgoing_1814958706592810014", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_15_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_15_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_15_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_15_N_outgoing[0]), _dynamic_array_synapses_15_N_outgoing.size()*sizeof(_dynamic_array_synapses_15_N_outgoing[0]));
		    outfile__dynamic_array_synapses_15_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_15_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_16__synaptic_post;
	outfile__dynamic_array_synapses_16__synaptic_post.open("results\\_dynamic_array_synapses_16__synaptic_post_-5552546067295757132", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_16__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_16__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_16__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_16__synaptic_post[0]), _dynamic_array_synapses_16__synaptic_post.size()*sizeof(_dynamic_array_synapses_16__synaptic_post[0]));
		    outfile__dynamic_array_synapses_16__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_16__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_16__synaptic_pre;
	outfile__dynamic_array_synapses_16__synaptic_pre.open("results\\_dynamic_array_synapses_16__synaptic_pre_-1890241533691362686", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_16__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_16__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_16__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_16__synaptic_pre[0]), _dynamic_array_synapses_16__synaptic_pre.size()*sizeof(_dynamic_array_synapses_16__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_16__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_16__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_16_delay;
	outfile__dynamic_array_synapses_16_delay.open("results\\_dynamic_array_synapses_16_delay_5087609374491449754", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_16_delay.is_open())
	{
        if (! _dynamic_array_synapses_16_delay.empty() )
        {
			outfile__dynamic_array_synapses_16_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_16_delay[0]), _dynamic_array_synapses_16_delay.size()*sizeof(_dynamic_array_synapses_16_delay[0]));
		    outfile__dynamic_array_synapses_16_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_16_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_16_N_incoming;
	outfile__dynamic_array_synapses_16_N_incoming.open("results\\_dynamic_array_synapses_16_N_incoming_-4123134191820513667", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_16_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_16_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_16_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_16_N_incoming[0]), _dynamic_array_synapses_16_N_incoming.size()*sizeof(_dynamic_array_synapses_16_N_incoming[0]));
		    outfile__dynamic_array_synapses_16_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_16_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_16_N_outgoing;
	outfile__dynamic_array_synapses_16_N_outgoing.open("results\\_dynamic_array_synapses_16_N_outgoing_-9206947526672891207", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_16_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_16_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_16_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_16_N_outgoing[0]), _dynamic_array_synapses_16_N_outgoing.size()*sizeof(_dynamic_array_synapses_16_N_outgoing[0]));
		    outfile__dynamic_array_synapses_16_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_16_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_17__synaptic_post;
	outfile__dynamic_array_synapses_17__synaptic_post.open("results\\_dynamic_array_synapses_17__synaptic_post_-8794804417315047152", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_17__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_17__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_17__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_17__synaptic_post[0]), _dynamic_array_synapses_17__synaptic_post.size()*sizeof(_dynamic_array_synapses_17__synaptic_post[0]));
		    outfile__dynamic_array_synapses_17__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_17__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_17__synaptic_pre;
	outfile__dynamic_array_synapses_17__synaptic_pre.open("results\\_dynamic_array_synapses_17__synaptic_pre_8853373491479324711", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_17__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_17__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_17__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_17__synaptic_pre[0]), _dynamic_array_synapses_17__synaptic_pre.size()*sizeof(_dynamic_array_synapses_17__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_17__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_17__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_17_delay;
	outfile__dynamic_array_synapses_17_delay.open("results\\_dynamic_array_synapses_17_delay_-598226956639254311", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_17_delay.is_open())
	{
        if (! _dynamic_array_synapses_17_delay.empty() )
        {
			outfile__dynamic_array_synapses_17_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_17_delay[0]), _dynamic_array_synapses_17_delay.size()*sizeof(_dynamic_array_synapses_17_delay[0]));
		    outfile__dynamic_array_synapses_17_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_17_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_17_N_incoming;
	outfile__dynamic_array_synapses_17_N_incoming.open("results\\_dynamic_array_synapses_17_N_incoming_-8971511894413575856", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_17_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_17_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_17_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_17_N_incoming[0]), _dynamic_array_synapses_17_N_incoming.size()*sizeof(_dynamic_array_synapses_17_N_incoming[0]));
		    outfile__dynamic_array_synapses_17_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_17_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_17_N_outgoing;
	outfile__dynamic_array_synapses_17_N_outgoing.open("results\\_dynamic_array_synapses_17_N_outgoing_2436760254754766572", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_17_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_17_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_17_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_17_N_outgoing[0]), _dynamic_array_synapses_17_N_outgoing.size()*sizeof(_dynamic_array_synapses_17_N_outgoing[0]));
		    outfile__dynamic_array_synapses_17_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_17_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_18__synaptic_post;
	outfile__dynamic_array_synapses_18__synaptic_post.open("results\\_dynamic_array_synapses_18__synaptic_post_4513182544337735281", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_18__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_18__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_18__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_18__synaptic_post[0]), _dynamic_array_synapses_18__synaptic_post.size()*sizeof(_dynamic_array_synapses_18__synaptic_post[0]));
		    outfile__dynamic_array_synapses_18__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_18__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_18__synaptic_pre;
	outfile__dynamic_array_synapses_18__synaptic_pre.open("results\\_dynamic_array_synapses_18__synaptic_pre_8256328033054639097", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_18__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_18__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_18__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_18__synaptic_pre[0]), _dynamic_array_synapses_18__synaptic_pre.size()*sizeof(_dynamic_array_synapses_18__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_18__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_18__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_18_delay;
	outfile__dynamic_array_synapses_18_delay.open("results\\_dynamic_array_synapses_18_delay_6344465557371017203", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_18_delay.is_open())
	{
        if (! _dynamic_array_synapses_18_delay.empty() )
        {
			outfile__dynamic_array_synapses_18_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_18_delay[0]), _dynamic_array_synapses_18_delay.size()*sizeof(_dynamic_array_synapses_18_delay[0]));
		    outfile__dynamic_array_synapses_18_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_18_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_18_N_incoming;
	outfile__dynamic_array_synapses_18_N_incoming.open("results\\_dynamic_array_synapses_18_N_incoming_-345372774965173374", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_18_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_18_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_18_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_18_N_incoming[0]), _dynamic_array_synapses_18_N_incoming.size()*sizeof(_dynamic_array_synapses_18_N_incoming[0]));
		    outfile__dynamic_array_synapses_18_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_18_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_18_N_outgoing;
	outfile__dynamic_array_synapses_18_N_outgoing.open("results\\_dynamic_array_synapses_18_N_outgoing_-1395113436145760195", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_18_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_18_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_18_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_18_N_outgoing[0]), _dynamic_array_synapses_18_N_outgoing.size()*sizeof(_dynamic_array_synapses_18_N_outgoing[0]));
		    outfile__dynamic_array_synapses_18_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_18_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_1__synaptic_post;
	outfile__dynamic_array_synapses_1__synaptic_post.open("results\\_dynamic_array_synapses_1__synaptic_post_6432922457695482766", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_1__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_1__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_1__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_1__synaptic_post[0]), _dynamic_array_synapses_1__synaptic_post.size()*sizeof(_dynamic_array_synapses_1__synaptic_post[0]));
		    outfile__dynamic_array_synapses_1__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_1__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_1__synaptic_pre;
	outfile__dynamic_array_synapses_1__synaptic_pre.open("results\\_dynamic_array_synapses_1__synaptic_pre_-5300235281672447211", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_1__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_1__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_1__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_1__synaptic_pre[0]), _dynamic_array_synapses_1__synaptic_pre.size()*sizeof(_dynamic_array_synapses_1__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_1__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_1__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_1_delay;
	outfile__dynamic_array_synapses_1_delay.open("results\\_dynamic_array_synapses_1_delay_6570166347512061451", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_1_delay.is_open())
	{
        if (! _dynamic_array_synapses_1_delay.empty() )
        {
			outfile__dynamic_array_synapses_1_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_1_delay[0]), _dynamic_array_synapses_1_delay.size()*sizeof(_dynamic_array_synapses_1_delay[0]));
		    outfile__dynamic_array_synapses_1_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_1_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_1_N_incoming;
	outfile__dynamic_array_synapses_1_N_incoming.open("results\\_dynamic_array_synapses_1_N_incoming_581339669290704466", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_1_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_1_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_1_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_1_N_incoming[0]), _dynamic_array_synapses_1_N_incoming.size()*sizeof(_dynamic_array_synapses_1_N_incoming[0]));
		    outfile__dynamic_array_synapses_1_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_1_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_1_N_outgoing;
	outfile__dynamic_array_synapses_1_N_outgoing.open("results\\_dynamic_array_synapses_1_N_outgoing_-6302750682149925616", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_1_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_1_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_1_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_1_N_outgoing[0]), _dynamic_array_synapses_1_N_outgoing.size()*sizeof(_dynamic_array_synapses_1_N_outgoing[0]));
		    outfile__dynamic_array_synapses_1_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_1_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_2__synaptic_post;
	outfile__dynamic_array_synapses_2__synaptic_post.open("results\\_dynamic_array_synapses_2__synaptic_post_-3366799945779723673", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_2__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_2__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_2__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_2__synaptic_post[0]), _dynamic_array_synapses_2__synaptic_post.size()*sizeof(_dynamic_array_synapses_2__synaptic_post[0]));
		    outfile__dynamic_array_synapses_2__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_2__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_2__synaptic_pre;
	outfile__dynamic_array_synapses_2__synaptic_pre.open("results\\_dynamic_array_synapses_2__synaptic_pre_-4275733452625832913", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_2__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_2__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_2__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_2__synaptic_pre[0]), _dynamic_array_synapses_2__synaptic_pre.size()*sizeof(_dynamic_array_synapses_2__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_2__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_2__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_2_delay;
	outfile__dynamic_array_synapses_2_delay.open("results\\_dynamic_array_synapses_2_delay_509599276825918548", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_2_delay.is_open())
	{
        if (! _dynamic_array_synapses_2_delay.empty() )
        {
			outfile__dynamic_array_synapses_2_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_2_delay[0]), _dynamic_array_synapses_2_delay.size()*sizeof(_dynamic_array_synapses_2_delay[0]));
		    outfile__dynamic_array_synapses_2_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_2_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_2_N_incoming;
	outfile__dynamic_array_synapses_2_N_incoming.open("results\\_dynamic_array_synapses_2_N_incoming_1739625719990226175", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_2_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_2_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_2_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_2_N_incoming[0]), _dynamic_array_synapses_2_N_incoming.size()*sizeof(_dynamic_array_synapses_2_N_incoming[0]));
		    outfile__dynamic_array_synapses_2_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_2_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_2_N_outgoing;
	outfile__dynamic_array_synapses_2_N_outgoing.open("results\\_dynamic_array_synapses_2_N_outgoing_-2325740590971225717", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_2_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_2_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_2_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_2_N_outgoing[0]), _dynamic_array_synapses_2_N_outgoing.size()*sizeof(_dynamic_array_synapses_2_N_outgoing[0]));
		    outfile__dynamic_array_synapses_2_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_2_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_3__synaptic_post;
	outfile__dynamic_array_synapses_3__synaptic_post.open("results\\_dynamic_array_synapses_3__synaptic_post_217865383836718786", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_3__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_3__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_3__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_3__synaptic_post[0]), _dynamic_array_synapses_3__synaptic_post.size()*sizeof(_dynamic_array_synapses_3__synaptic_post[0]));
		    outfile__dynamic_array_synapses_3__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_3__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_3__synaptic_pre;
	outfile__dynamic_array_synapses_3__synaptic_pre.open("results\\_dynamic_array_synapses_3__synaptic_pre_8525722721356841771", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_3__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_3__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_3__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_3__synaptic_pre[0]), _dynamic_array_synapses_3__synaptic_pre.size()*sizeof(_dynamic_array_synapses_3__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_3__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_3__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_3_delay;
	outfile__dynamic_array_synapses_3_delay.open("results\\_dynamic_array_synapses_3_delay_-1023656146083214969", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_3_delay.is_open())
	{
        if (! _dynamic_array_synapses_3_delay.empty() )
        {
			outfile__dynamic_array_synapses_3_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_3_delay[0]), _dynamic_array_synapses_3_delay.size()*sizeof(_dynamic_array_synapses_3_delay[0]));
		    outfile__dynamic_array_synapses_3_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_3_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_3_N_incoming;
	outfile__dynamic_array_synapses_3_N_incoming.open("results\\_dynamic_array_synapses_3_N_incoming_134426592493278142", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_3_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_3_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_3_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_3_N_incoming[0]), _dynamic_array_synapses_3_N_incoming.size()*sizeof(_dynamic_array_synapses_3_N_incoming[0]));
		    outfile__dynamic_array_synapses_3_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_3_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_3_N_outgoing;
	outfile__dynamic_array_synapses_3_N_outgoing.open("results\\_dynamic_array_synapses_3_N_outgoing_-6036684081126742633", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_3_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_3_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_3_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_3_N_outgoing[0]), _dynamic_array_synapses_3_N_outgoing.size()*sizeof(_dynamic_array_synapses_3_N_outgoing[0]));
		    outfile__dynamic_array_synapses_3_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_3_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_4__synaptic_post;
	outfile__dynamic_array_synapses_4__synaptic_post.open("results\\_dynamic_array_synapses_4__synaptic_post_-6706411266281275238", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_4__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_4__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_4__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_4__synaptic_post[0]), _dynamic_array_synapses_4__synaptic_post.size()*sizeof(_dynamic_array_synapses_4__synaptic_post[0]));
		    outfile__dynamic_array_synapses_4__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_4__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_4__synaptic_pre;
	outfile__dynamic_array_synapses_4__synaptic_pre.open("results\\_dynamic_array_synapses_4__synaptic_pre_4882140975532211373", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_4__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_4__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_4__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_4__synaptic_pre[0]), _dynamic_array_synapses_4__synaptic_pre.size()*sizeof(_dynamic_array_synapses_4__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_4__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_4__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_4_delay;
	outfile__dynamic_array_synapses_4_delay.open("results\\_dynamic_array_synapses_4_delay_4924409746912243624", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_4_delay.is_open())
	{
        if (! _dynamic_array_synapses_4_delay.empty() )
        {
			outfile__dynamic_array_synapses_4_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_4_delay[0]), _dynamic_array_synapses_4_delay.size()*sizeof(_dynamic_array_synapses_4_delay[0]));
		    outfile__dynamic_array_synapses_4_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_4_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_4_N_incoming;
	outfile__dynamic_array_synapses_4_N_incoming.open("results\\_dynamic_array_synapses_4_N_incoming_1229292196956516293", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_4_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_4_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_4_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_4_N_incoming[0]), _dynamic_array_synapses_4_N_incoming.size()*sizeof(_dynamic_array_synapses_4_N_incoming[0]));
		    outfile__dynamic_array_synapses_4_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_4_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_4_N_outgoing;
	outfile__dynamic_array_synapses_4_N_outgoing.open("results\\_dynamic_array_synapses_4_N_outgoing_-6131657367846859990", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_4_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_4_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_4_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_4_N_outgoing[0]), _dynamic_array_synapses_4_N_outgoing.size()*sizeof(_dynamic_array_synapses_4_N_outgoing[0]));
		    outfile__dynamic_array_synapses_4_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_4_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_5__synaptic_post;
	outfile__dynamic_array_synapses_5__synaptic_post.open("results\\_dynamic_array_synapses_5__synaptic_post_8671479284596985739", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_5__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_5__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_5__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_5__synaptic_post[0]), _dynamic_array_synapses_5__synaptic_post.size()*sizeof(_dynamic_array_synapses_5__synaptic_post[0]));
		    outfile__dynamic_array_synapses_5__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_5__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_5__synaptic_pre;
	outfile__dynamic_array_synapses_5__synaptic_pre.open("results\\_dynamic_array_synapses_5__synaptic_pre_-4881656523475661310", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_5__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_5__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_5__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_5__synaptic_pre[0]), _dynamic_array_synapses_5__synaptic_pre.size()*sizeof(_dynamic_array_synapses_5__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_5__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_5__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_5_delay;
	outfile__dynamic_array_synapses_5_delay.open("results\\_dynamic_array_synapses_5_delay_-8368426157892293216", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_5_delay.is_open())
	{
        if (! _dynamic_array_synapses_5_delay.empty() )
        {
			outfile__dynamic_array_synapses_5_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_5_delay[0]), _dynamic_array_synapses_5_delay.size()*sizeof(_dynamic_array_synapses_5_delay[0]));
		    outfile__dynamic_array_synapses_5_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_5_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_5_N_incoming;
	outfile__dynamic_array_synapses_5_N_incoming.open("results\\_dynamic_array_synapses_5_N_incoming_274774925581411294", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_5_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_5_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_5_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_5_N_incoming[0]), _dynamic_array_synapses_5_N_incoming.size()*sizeof(_dynamic_array_synapses_5_N_incoming[0]));
		    outfile__dynamic_array_synapses_5_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_5_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_5_N_outgoing;
	outfile__dynamic_array_synapses_5_N_outgoing.open("results\\_dynamic_array_synapses_5_N_outgoing_7292781029182360860", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_5_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_5_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_5_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_5_N_outgoing[0]), _dynamic_array_synapses_5_N_outgoing.size()*sizeof(_dynamic_array_synapses_5_N_outgoing[0]));
		    outfile__dynamic_array_synapses_5_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_5_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_6__synaptic_post;
	outfile__dynamic_array_synapses_6__synaptic_post.open("results\\_dynamic_array_synapses_6__synaptic_post_2013563213278982295", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_6__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_6__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_6__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_6__synaptic_post[0]), _dynamic_array_synapses_6__synaptic_post.size()*sizeof(_dynamic_array_synapses_6__synaptic_post[0]));
		    outfile__dynamic_array_synapses_6__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_6__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_6__synaptic_pre;
	outfile__dynamic_array_synapses_6__synaptic_pre.open("results\\_dynamic_array_synapses_6__synaptic_pre_-1641776319102551100", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_6__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_6__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_6__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_6__synaptic_pre[0]), _dynamic_array_synapses_6__synaptic_pre.size()*sizeof(_dynamic_array_synapses_6__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_6__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_6__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_6_delay;
	outfile__dynamic_array_synapses_6_delay.open("results\\_dynamic_array_synapses_6_delay_-8096456058779836081", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_6_delay.is_open())
	{
        if (! _dynamic_array_synapses_6_delay.empty() )
        {
			outfile__dynamic_array_synapses_6_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_6_delay[0]), _dynamic_array_synapses_6_delay.size()*sizeof(_dynamic_array_synapses_6_delay[0]));
		    outfile__dynamic_array_synapses_6_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_6_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_6_N_incoming;
	outfile__dynamic_array_synapses_6_N_incoming.open("results\\_dynamic_array_synapses_6_N_incoming_-4072081280348793167", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_6_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_6_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_6_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_6_N_incoming[0]), _dynamic_array_synapses_6_N_incoming.size()*sizeof(_dynamic_array_synapses_6_N_incoming[0]));
		    outfile__dynamic_array_synapses_6_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_6_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_6_N_outgoing;
	outfile__dynamic_array_synapses_6_N_outgoing.open("results\\_dynamic_array_synapses_6_N_outgoing_-8328745357778896994", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_6_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_6_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_6_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_6_N_outgoing[0]), _dynamic_array_synapses_6_N_outgoing.size()*sizeof(_dynamic_array_synapses_6_N_outgoing[0]));
		    outfile__dynamic_array_synapses_6_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_6_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_7__synaptic_post;
	outfile__dynamic_array_synapses_7__synaptic_post.open("results\\_dynamic_array_synapses_7__synaptic_post_-4014536553926403592", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_7__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_7__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_7__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_7__synaptic_post[0]), _dynamic_array_synapses_7__synaptic_post.size()*sizeof(_dynamic_array_synapses_7__synaptic_post[0]));
		    outfile__dynamic_array_synapses_7__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_7__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_7__synaptic_pre;
	outfile__dynamic_array_synapses_7__synaptic_pre.open("results\\_dynamic_array_synapses_7__synaptic_pre_3965779526661866186", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_7__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_7__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_7__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_7__synaptic_pre[0]), _dynamic_array_synapses_7__synaptic_pre.size()*sizeof(_dynamic_array_synapses_7__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_7__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_7__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_7_delay;
	outfile__dynamic_array_synapses_7_delay.open("results\\_dynamic_array_synapses_7_delay_-2966327047302851807", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_7_delay.is_open())
	{
        if (! _dynamic_array_synapses_7_delay.empty() )
        {
			outfile__dynamic_array_synapses_7_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_7_delay[0]), _dynamic_array_synapses_7_delay.size()*sizeof(_dynamic_array_synapses_7_delay[0]));
		    outfile__dynamic_array_synapses_7_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_7_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_7_N_incoming;
	outfile__dynamic_array_synapses_7_N_incoming.open("results\\_dynamic_array_synapses_7_N_incoming_4121764272203532483", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_7_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_7_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_7_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_7_N_incoming[0]), _dynamic_array_synapses_7_N_incoming.size()*sizeof(_dynamic_array_synapses_7_N_incoming[0]));
		    outfile__dynamic_array_synapses_7_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_7_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_7_N_outgoing;
	outfile__dynamic_array_synapses_7_N_outgoing.open("results\\_dynamic_array_synapses_7_N_outgoing_8077274377985379901", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_7_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_7_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_7_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_7_N_outgoing[0]), _dynamic_array_synapses_7_N_outgoing.size()*sizeof(_dynamic_array_synapses_7_N_outgoing[0]));
		    outfile__dynamic_array_synapses_7_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_7_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_8__synaptic_post;
	outfile__dynamic_array_synapses_8__synaptic_post.open("results\\_dynamic_array_synapses_8__synaptic_post_-3369860293673055543", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_8__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_8__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_8__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_8__synaptic_post[0]), _dynamic_array_synapses_8__synaptic_post.size()*sizeof(_dynamic_array_synapses_8__synaptic_post[0]));
		    outfile__dynamic_array_synapses_8__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_8__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_8__synaptic_pre;
	outfile__dynamic_array_synapses_8__synaptic_pre.open("results\\_dynamic_array_synapses_8__synaptic_pre_5036406607335861202", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_8__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_8__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_8__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_8__synaptic_pre[0]), _dynamic_array_synapses_8__synaptic_pre.size()*sizeof(_dynamic_array_synapses_8__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_8__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_8__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_8_delay;
	outfile__dynamic_array_synapses_8_delay.open("results\\_dynamic_array_synapses_8_delay_-1931222643848163553", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_8_delay.is_open())
	{
        if (! _dynamic_array_synapses_8_delay.empty() )
        {
			outfile__dynamic_array_synapses_8_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_8_delay[0]), _dynamic_array_synapses_8_delay.size()*sizeof(_dynamic_array_synapses_8_delay[0]));
		    outfile__dynamic_array_synapses_8_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_8_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_8_N_incoming;
	outfile__dynamic_array_synapses_8_N_incoming.open("results\\_dynamic_array_synapses_8_N_incoming_5161104985316696621", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_8_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_8_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_8_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_8_N_incoming[0]), _dynamic_array_synapses_8_N_incoming.size()*sizeof(_dynamic_array_synapses_8_N_incoming[0]));
		    outfile__dynamic_array_synapses_8_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_8_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_8_N_outgoing;
	outfile__dynamic_array_synapses_8_N_outgoing.open("results\\_dynamic_array_synapses_8_N_outgoing_1471684347372617377", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_8_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_8_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_8_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_8_N_outgoing[0]), _dynamic_array_synapses_8_N_outgoing.size()*sizeof(_dynamic_array_synapses_8_N_outgoing[0]));
		    outfile__dynamic_array_synapses_8_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_8_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses_9__synaptic_post;
	outfile__dynamic_array_synapses_9__synaptic_post.open("results\\_dynamic_array_synapses_9__synaptic_post_-7928781191161077790", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_9__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses_9__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses_9__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses_9__synaptic_post[0]), _dynamic_array_synapses_9__synaptic_post.size()*sizeof(_dynamic_array_synapses_9__synaptic_post[0]));
		    outfile__dynamic_array_synapses_9__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_9__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses_9__synaptic_pre;
	outfile__dynamic_array_synapses_9__synaptic_pre.open("results\\_dynamic_array_synapses_9__synaptic_pre_3216159592240239394", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_9__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses_9__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses_9__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses_9__synaptic_pre[0]), _dynamic_array_synapses_9__synaptic_pre.size()*sizeof(_dynamic_array_synapses_9__synaptic_pre[0]));
		    outfile__dynamic_array_synapses_9__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_9__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_9_delay;
	outfile__dynamic_array_synapses_9_delay.open("results\\_dynamic_array_synapses_9_delay_6083826681576573617", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_9_delay.is_open())
	{
        if (! _dynamic_array_synapses_9_delay.empty() )
        {
			outfile__dynamic_array_synapses_9_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_9_delay[0]), _dynamic_array_synapses_9_delay.size()*sizeof(_dynamic_array_synapses_9_delay[0]));
		    outfile__dynamic_array_synapses_9_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_9_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_9_N_incoming;
	outfile__dynamic_array_synapses_9_N_incoming.open("results\\_dynamic_array_synapses_9_N_incoming_472575299873388379", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_9_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_9_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_9_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_9_N_incoming[0]), _dynamic_array_synapses_9_N_incoming.size()*sizeof(_dynamic_array_synapses_9_N_incoming[0]));
		    outfile__dynamic_array_synapses_9_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_9_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_9_N_outgoing;
	outfile__dynamic_array_synapses_9_N_outgoing.open("results\\_dynamic_array_synapses_9_N_outgoing_-6699823476957317024", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_9_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_9_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_9_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_9_N_outgoing[0]), _dynamic_array_synapses_9_N_outgoing.size()*sizeof(_dynamic_array_synapses_9_N_outgoing[0]));
		    outfile__dynamic_array_synapses_9_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_9_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_synapses__synaptic_post;
	outfile__dynamic_array_synapses__synaptic_post.open("results\\_dynamic_array_synapses__synaptic_post_-8357055085001663811", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses__synaptic_post.is_open())
	{
        if (! _dynamic_array_synapses__synaptic_post.empty() )
        {
			outfile__dynamic_array_synapses__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_synapses__synaptic_post[0]), _dynamic_array_synapses__synaptic_post.size()*sizeof(_dynamic_array_synapses__synaptic_post[0]));
		    outfile__dynamic_array_synapses__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_synapses__synaptic_pre;
	outfile__dynamic_array_synapses__synaptic_pre.open("results\\_dynamic_array_synapses__synaptic_pre_-6863959971070196143", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses__synaptic_pre.is_open())
	{
        if (! _dynamic_array_synapses__synaptic_pre.empty() )
        {
			outfile__dynamic_array_synapses__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_synapses__synaptic_pre[0]), _dynamic_array_synapses__synaptic_pre.size()*sizeof(_dynamic_array_synapses__synaptic_pre[0]));
		    outfile__dynamic_array_synapses__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_synapses_delay;
	outfile__dynamic_array_synapses_delay.open("results\\_dynamic_array_synapses_delay_5102503500855139763", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_delay.is_open())
	{
        if (! _dynamic_array_synapses_delay.empty() )
        {
			outfile__dynamic_array_synapses_delay.write(reinterpret_cast<char*>(&_dynamic_array_synapses_delay[0]), _dynamic_array_synapses_delay.size()*sizeof(_dynamic_array_synapses_delay[0]));
		    outfile__dynamic_array_synapses_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_delay." << endl;
	}
	ofstream outfile__dynamic_array_synapses_N_incoming;
	outfile__dynamic_array_synapses_N_incoming.open("results\\_dynamic_array_synapses_N_incoming_-6966845770854793736", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_N_incoming.is_open())
	{
        if (! _dynamic_array_synapses_N_incoming.empty() )
        {
			outfile__dynamic_array_synapses_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_synapses_N_incoming[0]), _dynamic_array_synapses_N_incoming.size()*sizeof(_dynamic_array_synapses_N_incoming[0]));
		    outfile__dynamic_array_synapses_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_synapses_N_outgoing;
	outfile__dynamic_array_synapses_N_outgoing.open("results\\_dynamic_array_synapses_N_outgoing_7483495847237215723", ios::binary | ios::out);
	if(outfile__dynamic_array_synapses_N_outgoing.is_open())
	{
        if (! _dynamic_array_synapses_N_outgoing.empty() )
        {
			outfile__dynamic_array_synapses_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_synapses_N_outgoing[0]), _dynamic_array_synapses_N_outgoing.size()*sizeof(_dynamic_array_synapses_N_outgoing[0]));
		    outfile__dynamic_array_synapses_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_synapses_N_outgoing." << endl;
	}

	ofstream outfile__dynamic_array_statemonitor_1_v;
	outfile__dynamic_array_statemonitor_1_v.open("results\\_dynamic_array_statemonitor_1_v_-2104719977413421389", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_v(n, 0)), _dynamic_array_statemonitor_1_v.m*sizeof(_dynamic_array_statemonitor_1_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_wE;
	outfile__dynamic_array_statemonitor_1_wE.open("results\\_dynamic_array_statemonitor_1_wE_-5970968076970694556", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_wE(n, 0)), _dynamic_array_statemonitor_1_wE.m*sizeof(_dynamic_array_statemonitor_1_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_wI_1;
	outfile__dynamic_array_statemonitor_1_wI_1.open("results\\_dynamic_array_statemonitor_1_wI_1_3455923820061484723", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_wI_1(n, 0)), _dynamic_array_statemonitor_1_wI_1.m*sizeof(_dynamic_array_statemonitor_1_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_wI_2;
	outfile__dynamic_array_statemonitor_1_wI_2.open("results\\_dynamic_array_statemonitor_1_wI_2_3227568507211766638", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_wI_2(n, 0)), _dynamic_array_statemonitor_1_wI_2.m*sizeof(_dynamic_array_statemonitor_1_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_wI_3;
	outfile__dynamic_array_statemonitor_1_wI_3.open("results\\_dynamic_array_statemonitor_1_wI_3_-2306327086310070477", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_wI_3(n, 0)), _dynamic_array_statemonitor_1_wI_3.m*sizeof(_dynamic_array_statemonitor_1_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_wI_3." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_v;
	outfile__dynamic_array_statemonitor_2_v.open("results\\_dynamic_array_statemonitor_2_v_-993657541421752440", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_v(n, 0)), _dynamic_array_statemonitor_2_v.m*sizeof(_dynamic_array_statemonitor_2_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_wE;
	outfile__dynamic_array_statemonitor_2_wE.open("results\\_dynamic_array_statemonitor_2_wE_-6823916929175142838", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_wE(n, 0)), _dynamic_array_statemonitor_2_wE.m*sizeof(_dynamic_array_statemonitor_2_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_wI_1;
	outfile__dynamic_array_statemonitor_2_wI_1.open("results\\_dynamic_array_statemonitor_2_wI_1_-7168838594554283609", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_wI_1(n, 0)), _dynamic_array_statemonitor_2_wI_1.m*sizeof(_dynamic_array_statemonitor_2_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_wI_2;
	outfile__dynamic_array_statemonitor_2_wI_2.open("results\\_dynamic_array_statemonitor_2_wI_2_-208527689045697940", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_wI_2(n, 0)), _dynamic_array_statemonitor_2_wI_2.m*sizeof(_dynamic_array_statemonitor_2_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_wI_3;
	outfile__dynamic_array_statemonitor_2_wI_3.open("results\\_dynamic_array_statemonitor_2_wI_3_-1761047445130693143", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_wI_3(n, 0)), _dynamic_array_statemonitor_2_wI_3.m*sizeof(_dynamic_array_statemonitor_2_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_wI_3." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_v;
	outfile__dynamic_array_statemonitor_3_v.open("results\\_dynamic_array_statemonitor_3_v_5131718121392274393", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_v(n, 0)), _dynamic_array_statemonitor_3_v.m*sizeof(_dynamic_array_statemonitor_3_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_wE;
	outfile__dynamic_array_statemonitor_3_wE.open("results\\_dynamic_array_statemonitor_3_wE_-3809913430802575768", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_wE(n, 0)), _dynamic_array_statemonitor_3_wE.m*sizeof(_dynamic_array_statemonitor_3_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_wI_1;
	outfile__dynamic_array_statemonitor_3_wI_1.open("results\\_dynamic_array_statemonitor_3_wI_1_5305267248536760458", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_wI_1(n, 0)), _dynamic_array_statemonitor_3_wI_1.m*sizeof(_dynamic_array_statemonitor_3_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_wI_2;
	outfile__dynamic_array_statemonitor_3_wI_2.open("results\\_dynamic_array_statemonitor_3_wI_2_-1558532806484815953", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_wI_2(n, 0)), _dynamic_array_statemonitor_3_wI_2.m*sizeof(_dynamic_array_statemonitor_3_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_wI_3;
	outfile__dynamic_array_statemonitor_3_wI_3.open("results\\_dynamic_array_statemonitor_3_wI_3_-1615846453311504526", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_wI_3(n, 0)), _dynamic_array_statemonitor_3_wI_3.m*sizeof(_dynamic_array_statemonitor_3_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_wI_3." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_v;
	outfile__dynamic_array_statemonitor_4_v.open("results\\_dynamic_array_statemonitor_4_v_-8070288853993580051", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_v(n, 0)), _dynamic_array_statemonitor_4_v.m*sizeof(_dynamic_array_statemonitor_4_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_wE;
	outfile__dynamic_array_statemonitor_4_wE.open("results\\_dynamic_array_statemonitor_4_wE_8022188025213194753", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_wE(n, 0)), _dynamic_array_statemonitor_4_wE.m*sizeof(_dynamic_array_statemonitor_4_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_wI_1;
	outfile__dynamic_array_statemonitor_4_wI_1.open("results\\_dynamic_array_statemonitor_4_wI_1_-5588936875476507253", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_wI_1(n, 0)), _dynamic_array_statemonitor_4_wI_1.m*sizeof(_dynamic_array_statemonitor_4_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_wI_2;
	outfile__dynamic_array_statemonitor_4_wI_2.open("results\\_dynamic_array_statemonitor_4_wI_2_683883097422464091", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_wI_2(n, 0)), _dynamic_array_statemonitor_4_wI_2.m*sizeof(_dynamic_array_statemonitor_4_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_wI_3;
	outfile__dynamic_array_statemonitor_4_wI_3.open("results\\_dynamic_array_statemonitor_4_wI_3_-5340047048542164768", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_wI_3(n, 0)), _dynamic_array_statemonitor_4_wI_3.m*sizeof(_dynamic_array_statemonitor_4_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_wI_3." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_v;
	outfile__dynamic_array_statemonitor_5_v.open("results\\_dynamic_array_statemonitor_5_v_-9128830614300690854", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_v(n, 0)), _dynamic_array_statemonitor_5_v.m*sizeof(_dynamic_array_statemonitor_5_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_wE;
	outfile__dynamic_array_statemonitor_5_wE.open("results\\_dynamic_array_statemonitor_5_wE_4284263204988198153", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_wE(n, 0)), _dynamic_array_statemonitor_5_wE.m*sizeof(_dynamic_array_statemonitor_5_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_wE2;
	outfile__dynamic_array_statemonitor_5_wE2.open("results\\_dynamic_array_statemonitor_5_wE2_4582482463860439306", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_wE2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_wE2.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_wE2(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_wE2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_wE2(n, 0)), _dynamic_array_statemonitor_5_wE2.m*sizeof(_dynamic_array_statemonitor_5_wE2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_wE2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_wE2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_wI_1;
	outfile__dynamic_array_statemonitor_5_wI_1.open("results\\_dynamic_array_statemonitor_5_wI_1_5150134171010488909", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_wI_1(n, 0)), _dynamic_array_statemonitor_5_wI_1.m*sizeof(_dynamic_array_statemonitor_5_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_wI_2;
	outfile__dynamic_array_statemonitor_5_wI_2.open("results\\_dynamic_array_statemonitor_5_wI_2_3851735305311260247", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_wI_2(n, 0)), _dynamic_array_statemonitor_5_wI_2.m*sizeof(_dynamic_array_statemonitor_5_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_wI_3;
	outfile__dynamic_array_statemonitor_5_wI_3.open("results\\_dynamic_array_statemonitor_5_wI_3_-2607153077079623210", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_wI_3(n, 0)), _dynamic_array_statemonitor_5_wI_3.m*sizeof(_dynamic_array_statemonitor_5_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_wI_3." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_v;
	outfile__dynamic_array_statemonitor_6_v.open("results\\_dynamic_array_statemonitor_6_v_2416828221725996290", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_v(n, 0)), _dynamic_array_statemonitor_6_v.m*sizeof(_dynamic_array_statemonitor_6_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_wE;
	outfile__dynamic_array_statemonitor_6_wE.open("results\\_dynamic_array_statemonitor_6_wE_-7421803802812048937", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_wE(n, 0)), _dynamic_array_statemonitor_6_wE.m*sizeof(_dynamic_array_statemonitor_6_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_wI_1;
	outfile__dynamic_array_statemonitor_6_wI_1.open("results\\_dynamic_array_statemonitor_6_wI_1_-5130040055852958432", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_wI_1(n, 0)), _dynamic_array_statemonitor_6_wI_1.m*sizeof(_dynamic_array_statemonitor_6_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_wI_2;
	outfile__dynamic_array_statemonitor_6_wI_2.open("results\\_dynamic_array_statemonitor_6_wI_2_7012371385813662033", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_wI_2(n, 0)), _dynamic_array_statemonitor_6_wI_2.m*sizeof(_dynamic_array_statemonitor_6_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_wI_3;
	outfile__dynamic_array_statemonitor_6_wI_3.open("results\\_dynamic_array_statemonitor_6_wI_3_-6168377280630612983", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_wI_3(n, 0)), _dynamic_array_statemonitor_6_wI_3.m*sizeof(_dynamic_array_statemonitor_6_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_wI_3." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_v;
	outfile__dynamic_array_statemonitor_v.open("results\\_dynamic_array_statemonitor_v_-3105046622899922539", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_v.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_v.n; n++)
        {
            if (! _dynamic_array_statemonitor_v(n).empty())
            {
                outfile__dynamic_array_statemonitor_v.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_v(n, 0)), _dynamic_array_statemonitor_v.m*sizeof(_dynamic_array_statemonitor_v(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_v.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_v." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_wE;
	outfile__dynamic_array_statemonitor_wE.open("results\\_dynamic_array_statemonitor_wE_6909533817162512659", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_wE.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_wE.n; n++)
        {
            if (! _dynamic_array_statemonitor_wE(n).empty())
            {
                outfile__dynamic_array_statemonitor_wE.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_wE(n, 0)), _dynamic_array_statemonitor_wE.m*sizeof(_dynamic_array_statemonitor_wE(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_wE.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_wE." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_wI_1;
	outfile__dynamic_array_statemonitor_wI_1.open("results\\_dynamic_array_statemonitor_wI_1_-3192442808059147657", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_wI_1.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_wI_1.n; n++)
        {
            if (! _dynamic_array_statemonitor_wI_1(n).empty())
            {
                outfile__dynamic_array_statemonitor_wI_1.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_wI_1(n, 0)), _dynamic_array_statemonitor_wI_1.m*sizeof(_dynamic_array_statemonitor_wI_1(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_wI_1.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_wI_1." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_wI_2;
	outfile__dynamic_array_statemonitor_wI_2.open("results\\_dynamic_array_statemonitor_wI_2_-7010666930165600416", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_wI_2.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_wI_2.n; n++)
        {
            if (! _dynamic_array_statemonitor_wI_2(n).empty())
            {
                outfile__dynamic_array_statemonitor_wI_2.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_wI_2(n, 0)), _dynamic_array_statemonitor_wI_2.m*sizeof(_dynamic_array_statemonitor_wI_2(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_wI_2.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_wI_2." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_wI_3;
	outfile__dynamic_array_statemonitor_wI_3.open("results\\_dynamic_array_statemonitor_wI_3_9160002384787209381", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_wI_3.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_wI_3.n; n++)
        {
            if (! _dynamic_array_statemonitor_wI_3(n).empty())
            {
                outfile__dynamic_array_statemonitor_wI_3.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_wI_3(n, 0)), _dynamic_array_statemonitor_wI_3.m*sizeof(_dynamic_array_statemonitor_wI_3(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_wI_3.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_wI_3." << endl;
	}
	// Write last run info to disk
	ofstream outfile_last_run_info;
	outfile_last_run_info.open("results/last_run_info.txt", ios::out);
	if(outfile_last_run_info.is_open())
	{
		outfile_last_run_info << (Network::_last_run_time) << " " << (Network::_last_run_completed_fraction) << std::endl;
		outfile_last_run_info.close();
	} else
	{
	    std::cout << "Error writing last run info to file." << std::endl;
	}
}

void _dealloc_arrays()
{
	using namespace brian;


	// static arrays
	if(_static_array__array_neurongroup_1_d!=0)
	{
		delete [] _static_array__array_neurongroup_1_d;
		_static_array__array_neurongroup_1_d = 0;
	}
	if(_static_array__array_neurongroup_1_u!=0)
	{
		delete [] _static_array__array_neurongroup_1_u;
		_static_array__array_neurongroup_1_u = 0;
	}
	if(_static_array__array_neurongroup_1_v!=0)
	{
		delete [] _static_array__array_neurongroup_1_v;
		_static_array__array_neurongroup_1_v = 0;
	}
	if(_static_array__array_neurongroup_2_d!=0)
	{
		delete [] _static_array__array_neurongroup_2_d;
		_static_array__array_neurongroup_2_d = 0;
	}
	if(_static_array__array_neurongroup_2_u!=0)
	{
		delete [] _static_array__array_neurongroup_2_u;
		_static_array__array_neurongroup_2_u = 0;
	}
	if(_static_array__array_neurongroup_2_v!=0)
	{
		delete [] _static_array__array_neurongroup_2_v;
		_static_array__array_neurongroup_2_v = 0;
	}
	if(_static_array__array_neurongroup_3_d!=0)
	{
		delete [] _static_array__array_neurongroup_3_d;
		_static_array__array_neurongroup_3_d = 0;
	}
	if(_static_array__array_neurongroup_3_u!=0)
	{
		delete [] _static_array__array_neurongroup_3_u;
		_static_array__array_neurongroup_3_u = 0;
	}
	if(_static_array__array_neurongroup_3_v!=0)
	{
		delete [] _static_array__array_neurongroup_3_v;
		_static_array__array_neurongroup_3_v = 0;
	}
	if(_static_array__array_neurongroup_4_d!=0)
	{
		delete [] _static_array__array_neurongroup_4_d;
		_static_array__array_neurongroup_4_d = 0;
	}
	if(_static_array__array_neurongroup_4_u!=0)
	{
		delete [] _static_array__array_neurongroup_4_u;
		_static_array__array_neurongroup_4_u = 0;
	}
	if(_static_array__array_neurongroup_4_v!=0)
	{
		delete [] _static_array__array_neurongroup_4_v;
		_static_array__array_neurongroup_4_v = 0;
	}
	if(_static_array__array_neurongroup_5_d!=0)
	{
		delete [] _static_array__array_neurongroup_5_d;
		_static_array__array_neurongroup_5_d = 0;
	}
	if(_static_array__array_neurongroup_5_u!=0)
	{
		delete [] _static_array__array_neurongroup_5_u;
		_static_array__array_neurongroup_5_u = 0;
	}
	if(_static_array__array_neurongroup_5_v!=0)
	{
		delete [] _static_array__array_neurongroup_5_v;
		_static_array__array_neurongroup_5_v = 0;
	}
	if(_static_array__array_neurongroup_6_d!=0)
	{
		delete [] _static_array__array_neurongroup_6_d;
		_static_array__array_neurongroup_6_d = 0;
	}
	if(_static_array__array_neurongroup_6_u!=0)
	{
		delete [] _static_array__array_neurongroup_6_u;
		_static_array__array_neurongroup_6_u = 0;
	}
	if(_static_array__array_neurongroup_6_v!=0)
	{
		delete [] _static_array__array_neurongroup_6_v;
		_static_array__array_neurongroup_6_v = 0;
	}
	if(_static_array__array_neurongroup_d!=0)
	{
		delete [] _static_array__array_neurongroup_d;
		_static_array__array_neurongroup_d = 0;
	}
	if(_static_array__array_neurongroup_u!=0)
	{
		delete [] _static_array__array_neurongroup_u;
		_static_array__array_neurongroup_u = 0;
	}
	if(_static_array__array_neurongroup_v!=0)
	{
		delete [] _static_array__array_neurongroup_v;
		_static_array__array_neurongroup_v = 0;
	}
}

