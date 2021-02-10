#include <stdlib.h>
#include "objects.h"
#include <ctime>
#include <time.h>

#include "run.h"
#include "brianlib/common_math.h"
#include "randomkit.h"

#include "code_objects/neurongroup_1_resetter_codeobject.h"
#include "code_objects/neurongroup_1_stateupdater_codeobject.h"
#include "code_objects/neurongroup_1_thresholder_codeobject.h"
#include "code_objects/neurongroup_2_resetter_codeobject.h"
#include "code_objects/neurongroup_2_stateupdater_codeobject.h"
#include "code_objects/neurongroup_2_thresholder_codeobject.h"
#include "code_objects/neurongroup_3_resetter_codeobject.h"
#include "code_objects/neurongroup_3_stateupdater_codeobject.h"
#include "code_objects/neurongroup_3_thresholder_codeobject.h"
#include "code_objects/neurongroup_4_resetter_codeobject.h"
#include "code_objects/neurongroup_4_stateupdater_codeobject.h"
#include "code_objects/neurongroup_4_thresholder_codeobject.h"
#include "code_objects/neurongroup_5_resetter_codeobject.h"
#include "code_objects/neurongroup_5_stateupdater_codeobject.h"
#include "code_objects/neurongroup_5_thresholder_codeobject.h"
#include "code_objects/neurongroup_6_resetter_codeobject.h"
#include "code_objects/neurongroup_6_stateupdater_codeobject.h"
#include "code_objects/neurongroup_6_thresholder_codeobject.h"
#include "code_objects/neurongroup_resetter_codeobject.h"
#include "code_objects/neurongroup_stateupdater_codeobject.h"
#include "code_objects/neurongroup_thresholder_codeobject.h"
#include "code_objects/ratemonitor_1_codeobject.h"
#include "code_objects/ratemonitor_2_codeobject.h"
#include "code_objects/ratemonitor_3_codeobject.h"
#include "code_objects/ratemonitor_4_codeobject.h"
#include "code_objects/ratemonitor_5_codeobject.h"
#include "code_objects/ratemonitor_6_codeobject.h"
#include "code_objects/ratemonitor_codeobject.h"
#include "code_objects/spikemonitor_1_codeobject.h"
#include "code_objects/spikemonitor_2_codeobject.h"
#include "code_objects/spikemonitor_3_codeobject.h"
#include "code_objects/spikemonitor_4_codeobject.h"
#include "code_objects/spikemonitor_5_codeobject.h"
#include "code_objects/spikemonitor_6_codeobject.h"
#include "code_objects/spikemonitor_codeobject.h"
#include "code_objects/statemonitor_1_codeobject.h"
#include "code_objects/statemonitor_2_codeobject.h"
#include "code_objects/statemonitor_3_codeobject.h"
#include "code_objects/statemonitor_4_codeobject.h"
#include "code_objects/statemonitor_5_codeobject.h"
#include "code_objects/statemonitor_6_codeobject.h"
#include "code_objects/statemonitor_codeobject.h"
#include "code_objects/synapses_10_pre_codeobject.h"
#include "code_objects/synapses_10_pre_push_spikes.h"
#include "code_objects/before_run_synapses_10_pre_push_spikes.h"
#include "code_objects/synapses_10_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_11_pre_codeobject.h"
#include "code_objects/synapses_11_pre_push_spikes.h"
#include "code_objects/before_run_synapses_11_pre_push_spikes.h"
#include "code_objects/synapses_11_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_12_pre_codeobject.h"
#include "code_objects/synapses_12_pre_push_spikes.h"
#include "code_objects/before_run_synapses_12_pre_push_spikes.h"
#include "code_objects/synapses_12_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_13_pre_codeobject.h"
#include "code_objects/synapses_13_pre_push_spikes.h"
#include "code_objects/before_run_synapses_13_pre_push_spikes.h"
#include "code_objects/synapses_13_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_14_pre_codeobject.h"
#include "code_objects/synapses_14_pre_push_spikes.h"
#include "code_objects/before_run_synapses_14_pre_push_spikes.h"
#include "code_objects/synapses_14_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_15_pre_codeobject.h"
#include "code_objects/synapses_15_pre_push_spikes.h"
#include "code_objects/before_run_synapses_15_pre_push_spikes.h"
#include "code_objects/synapses_15_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_16_pre_codeobject.h"
#include "code_objects/synapses_16_pre_push_spikes.h"
#include "code_objects/before_run_synapses_16_pre_push_spikes.h"
#include "code_objects/synapses_16_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_17_pre_codeobject.h"
#include "code_objects/synapses_17_pre_push_spikes.h"
#include "code_objects/before_run_synapses_17_pre_push_spikes.h"
#include "code_objects/synapses_17_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_18_pre_codeobject.h"
#include "code_objects/synapses_18_pre_push_spikes.h"
#include "code_objects/before_run_synapses_18_pre_push_spikes.h"
#include "code_objects/synapses_18_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_1_pre_codeobject.h"
#include "code_objects/synapses_1_pre_push_spikes.h"
#include "code_objects/before_run_synapses_1_pre_push_spikes.h"
#include "code_objects/synapses_1_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_2_pre_codeobject.h"
#include "code_objects/synapses_2_pre_push_spikes.h"
#include "code_objects/before_run_synapses_2_pre_push_spikes.h"
#include "code_objects/synapses_2_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_3_pre_codeobject.h"
#include "code_objects/synapses_3_pre_push_spikes.h"
#include "code_objects/before_run_synapses_3_pre_push_spikes.h"
#include "code_objects/synapses_3_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_4_pre_codeobject.h"
#include "code_objects/synapses_4_pre_push_spikes.h"
#include "code_objects/before_run_synapses_4_pre_push_spikes.h"
#include "code_objects/synapses_4_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_5_pre_codeobject.h"
#include "code_objects/synapses_5_pre_push_spikes.h"
#include "code_objects/before_run_synapses_5_pre_push_spikes.h"
#include "code_objects/synapses_5_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_6_pre_codeobject.h"
#include "code_objects/synapses_6_pre_push_spikes.h"
#include "code_objects/before_run_synapses_6_pre_push_spikes.h"
#include "code_objects/synapses_6_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_7_pre_codeobject.h"
#include "code_objects/synapses_7_pre_push_spikes.h"
#include "code_objects/before_run_synapses_7_pre_push_spikes.h"
#include "code_objects/synapses_7_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_8_pre_codeobject.h"
#include "code_objects/synapses_8_pre_push_spikes.h"
#include "code_objects/before_run_synapses_8_pre_push_spikes.h"
#include "code_objects/synapses_8_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_9_pre_codeobject.h"
#include "code_objects/synapses_9_pre_push_spikes.h"
#include "code_objects/before_run_synapses_9_pre_push_spikes.h"
#include "code_objects/synapses_9_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_pre_codeobject.h"
#include "code_objects/synapses_pre_push_spikes.h"
#include "code_objects/before_run_synapses_pre_push_spikes.h"
#include "code_objects/synapses_synapses_create_generator_codeobject.h"


#include <iostream>
#include <fstream>
#include <string>


        std::string _format_time(float time_in_s)
        {
            float divisors[] = {24*60*60, 60*60, 60, 1};
            char letters[] = {'d', 'h', 'm', 's'};
            float remaining = time_in_s;
            std::string text = "";
            int time_to_represent;
            for (int i =0; i < sizeof(divisors)/sizeof(float); i++)
            {
                time_to_represent = int(remaining / divisors[i]);
                remaining -= time_to_represent * divisors[i];
                if (time_to_represent > 0 || text.length())
                {
                    if(text.length() > 0)
                    {
                        text += " ";
                    }
                    text += (std::to_string(time_to_represent)+letters[i]);
                }
            }
            //less than one second
            if(text.length() == 0) 
            {
                text = "< 1s";
            }
            return text;
        }
        void report_progress(const double elapsed, const double completed, const double start, const double duration)
        {
            if (completed == 0.0)
            {
                std::cout << "Starting simulation at t=" << start << " s for duration " << duration << " s";
            } else
            {
                std::cout << completed*duration << " s (" << (int)(completed*100.) << "%) simulated in " << _format_time(elapsed);
                if (completed < 1.0)
                {
                    const int remaining = (int)((1-completed)/completed*elapsed+0.5);
                    std::cout << ", estimated " << _format_time(remaining) << " remaining.";
                }
            }

            std::cout << std::endl << std::flush;
        }
        


int main(int argc, char **argv)
{
        

	brian_start();
        

	{
		using namespace brian;

		
                
        _array_defaultclock_dt[0] = 0.0001;
        _array_defaultclock_dt[0] = 0.0001;
        _array_defaultclock_dt[0] = 0.0001;
        
                        
                        for(int i=0; i<_num__array_neurongroup_lastspike; i++)
                        {
                            _array_neurongroup_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_not_refractory; i++)
                        {
                            _array_neurongroup_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_v; i++)
                        {
                            _array_neurongroup_v[i] = _static_array__array_neurongroup_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_u; i++)
                        {
                            _array_neurongroup_u[i] = _static_array__array_neurongroup_u[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_d; i++)
                        {
                            _array_neurongroup_d[i] = _static_array__array_neurongroup_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_1_lastspike; i++)
                        {
                            _array_neurongroup_1_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_1_not_refractory; i++)
                        {
                            _array_neurongroup_1_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_1_d; i++)
                        {
                            _array_neurongroup_1_d[i] = _static_array__array_neurongroup_1_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_1_v; i++)
                        {
                            _array_neurongroup_1_v[i] = _static_array__array_neurongroup_1_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_1_u; i++)
                        {
                            _array_neurongroup_1_u[i] = _static_array__array_neurongroup_1_u[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_2_lastspike; i++)
                        {
                            _array_neurongroup_2_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_2_not_refractory; i++)
                        {
                            _array_neurongroup_2_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_2_d; i++)
                        {
                            _array_neurongroup_2_d[i] = _static_array__array_neurongroup_2_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_2_v; i++)
                        {
                            _array_neurongroup_2_v[i] = _static_array__array_neurongroup_2_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_2_u; i++)
                        {
                            _array_neurongroup_2_u[i] = _static_array__array_neurongroup_2_u[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_3_lastspike; i++)
                        {
                            _array_neurongroup_3_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_3_not_refractory; i++)
                        {
                            _array_neurongroup_3_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_3_d; i++)
                        {
                            _array_neurongroup_3_d[i] = _static_array__array_neurongroup_3_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_3_v; i++)
                        {
                            _array_neurongroup_3_v[i] = _static_array__array_neurongroup_3_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_3_u; i++)
                        {
                            _array_neurongroup_3_u[i] = _static_array__array_neurongroup_3_u[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_4_lastspike; i++)
                        {
                            _array_neurongroup_4_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_4_not_refractory; i++)
                        {
                            _array_neurongroup_4_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_4_d; i++)
                        {
                            _array_neurongroup_4_d[i] = _static_array__array_neurongroup_4_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_4_v; i++)
                        {
                            _array_neurongroup_4_v[i] = _static_array__array_neurongroup_4_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_4_u; i++)
                        {
                            _array_neurongroup_4_u[i] = _static_array__array_neurongroup_4_u[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_5_lastspike; i++)
                        {
                            _array_neurongroup_5_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_5_not_refractory; i++)
                        {
                            _array_neurongroup_5_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_5_d; i++)
                        {
                            _array_neurongroup_5_d[i] = _static_array__array_neurongroup_5_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_5_v; i++)
                        {
                            _array_neurongroup_5_v[i] = _static_array__array_neurongroup_5_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_5_u; i++)
                        {
                            _array_neurongroup_5_u[i] = _static_array__array_neurongroup_5_u[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_6_lastspike; i++)
                        {
                            _array_neurongroup_6_lastspike[i] = - 10000.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_6_not_refractory; i++)
                        {
                            _array_neurongroup_6_not_refractory[i] = true;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_6_d; i++)
                        {
                            _array_neurongroup_6_d[i] = _static_array__array_neurongroup_6_d[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_6_v; i++)
                        {
                            _array_neurongroup_6_v[i] = _static_array__array_neurongroup_6_v[i];
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_6_u; i++)
                        {
                            _array_neurongroup_6_u[i] = _static_array__array_neurongroup_6_u[i];
                        }
                        
        _run_synapses_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_dynamic_array_synapses_delay.size(); i++)
                        {
                            _dynamic_array_synapses_delay[i] = 0.002;
                        }
                        
        _run_synapses_1_synapses_create_generator_codeobject();
        _run_synapses_2_synapses_create_generator_codeobject();
        _run_synapses_3_synapses_create_generator_codeobject();
        _run_synapses_4_synapses_create_generator_codeobject();
        _run_synapses_5_synapses_create_generator_codeobject();
        _run_synapses_6_synapses_create_generator_codeobject();
        _run_synapses_7_synapses_create_generator_codeobject();
        _run_synapses_8_synapses_create_generator_codeobject();
        _run_synapses_9_synapses_create_generator_codeobject();
        _run_synapses_10_synapses_create_generator_codeobject();
        _run_synapses_11_synapses_create_generator_codeobject();
        _run_synapses_12_synapses_create_generator_codeobject();
        _run_synapses_13_synapses_create_generator_codeobject();
        _run_synapses_14_synapses_create_generator_codeobject();
        _run_synapses_15_synapses_create_generator_codeobject();
        _run_synapses_16_synapses_create_generator_codeobject();
        _run_synapses_17_synapses_create_generator_codeobject();
        _run_synapses_18_synapses_create_generator_codeobject();
        
                        
                        for(int i=0; i<_num__array_neurongroup_2_y; i++)
                        {
                            _array_neurongroup_2_y[i] = 1.8;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_1_y; i++)
                        {
                            _array_neurongroup_1_y[i] = 1.2;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_y; i++)
                        {
                            _array_neurongroup_y[i] = 0.6000000000000001;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_3_y; i++)
                        {
                            _array_neurongroup_3_y[i] = 0.9;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_4_y; i++)
                        {
                            _array_neurongroup_4_y[i] = 0.6;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_5_y; i++)
                        {
                            _array_neurongroup_5_y[i] = 0.0;
                        }
                        
        
                        
                        for(int i=0; i<_num__array_neurongroup_6_y; i++)
                        {
                            _array_neurongroup_6_y[i] = 0.2;
                        }
                        
        _array_defaultclock_timestep[0] = 0;
        _array_defaultclock_t[0] = 0.0;
        _before_run_synapses_10_pre_push_spikes();
        _before_run_synapses_11_pre_push_spikes();
        _before_run_synapses_12_pre_push_spikes();
        _before_run_synapses_13_pre_push_spikes();
        _before_run_synapses_14_pre_push_spikes();
        _before_run_synapses_15_pre_push_spikes();
        _before_run_synapses_16_pre_push_spikes();
        _before_run_synapses_17_pre_push_spikes();
        _before_run_synapses_18_pre_push_spikes();
        _before_run_synapses_1_pre_push_spikes();
        _before_run_synapses_2_pre_push_spikes();
        _before_run_synapses_3_pre_push_spikes();
        _before_run_synapses_4_pre_push_spikes();
        _before_run_synapses_5_pre_push_spikes();
        _before_run_synapses_6_pre_push_spikes();
        _before_run_synapses_7_pre_push_spikes();
        _before_run_synapses_8_pre_push_spikes();
        _before_run_synapses_9_pre_push_spikes();
        _before_run_synapses_pre_push_spikes();
        magicnetwork.clear();
        magicnetwork.add(&defaultclock, _run_statemonitor_codeobject);
        magicnetwork.add(&defaultclock, _run_statemonitor_1_codeobject);
        magicnetwork.add(&defaultclock, _run_statemonitor_2_codeobject);
        magicnetwork.add(&defaultclock, _run_statemonitor_3_codeobject);
        magicnetwork.add(&defaultclock, _run_statemonitor_4_codeobject);
        magicnetwork.add(&defaultclock, _run_statemonitor_5_codeobject);
        magicnetwork.add(&defaultclock, _run_statemonitor_6_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_1_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_2_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_3_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_4_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_5_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_6_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_stateupdater_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_1_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_2_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_3_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_4_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_5_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_6_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_thresholder_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_1_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_2_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_3_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_4_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_5_codeobject);
        magicnetwork.add(&defaultclock, _run_spikemonitor_6_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_10_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_10_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_11_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_11_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_12_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_12_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_13_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_13_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_14_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_14_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_15_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_15_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_16_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_16_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_17_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_17_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_18_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_18_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_1_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_1_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_2_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_2_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_3_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_3_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_4_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_4_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_5_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_5_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_6_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_6_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_7_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_7_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_8_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_8_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_9_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_9_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_synapses_pre_push_spikes);
        magicnetwork.add(&defaultclock, _run_synapses_pre_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_1_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_2_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_3_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_4_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_5_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_6_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_neurongroup_resetter_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_1_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_2_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_3_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_4_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_5_codeobject);
        magicnetwork.add(&defaultclock, _run_ratemonitor_6_codeobject);
        magicnetwork.run(25.0, report_progress, 10.0);
        #ifdef DEBUG
        _debugmsg_spikemonitor_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_spikemonitor_1_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_spikemonitor_2_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_spikemonitor_3_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_spikemonitor_4_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_spikemonitor_5_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_spikemonitor_6_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_10_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_11_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_12_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_13_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_14_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_15_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_16_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_17_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_18_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_1_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_2_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_3_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_4_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_5_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_6_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_7_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_8_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_9_pre_codeobject();
        #endif
        
        #ifdef DEBUG
        _debugmsg_synapses_pre_codeobject();
        #endif

	}
        

	brian_end();
        

	return 0;
}