#include "code_objects/before_run_synapses_18_pre_push_spikes.h"
#include "objects.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>

void _before_run_synapses_18_pre_push_spikes()
{
    using namespace brian;
    ///// CONSTANTS ///////////
    double* const _array_synapses_18_delay = _dynamic_array_synapses_18_delay.empty()? 0 : &_dynamic_array_synapses_18_delay[0];
const size_t _numdelay = _dynamic_array_synapses_18_delay.size();
const size_t _num_spikespace = 101;
const size_t _num_source_dt = 1;
    ///// POINTERS ////////////
        
    double* __restrict  _ptr_array_synapses_18_delay = _array_synapses_18_delay;
    int32_t* __restrict  _ptr_array_neurongroup_3__spikespace = _array_neurongroup_3__spikespace;
    double*   _ptr_array_defaultclock_dt = _array_defaultclock_dt;

    std::vector<double> &real_delays = _dynamic_array_synapses_18_delay;
    double* real_delays_data = real_delays.empty() ? 0 : &(real_delays[0]);
    int32_t* sources = synapses_18_pre.sources.empty() ? 0 : &(synapses_18_pre.sources[0]);
    const size_t n_delays = real_delays.size();
    const size_t n_synapses = synapses_18_pre.sources.size();
    synapses_18_pre.prepare(100,
                           100,
                           real_delays_data, n_delays, sources,
                           n_synapses,
                           _ptr_array_defaultclock_dt[0]);

}
