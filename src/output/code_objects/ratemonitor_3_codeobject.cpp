#include "code_objects/ratemonitor_3_codeobject.h"
#include "objects.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>

////// SUPPORT CODE ///////
namespace {
        
    template < typename T1, typename T2 > struct _higher_type;
    template < > struct _higher_type<int,int> { typedef int type; };
    template < > struct _higher_type<int,long> { typedef long type; };
    template < > struct _higher_type<int,long long> { typedef long long type; };
    template < > struct _higher_type<int,float> { typedef float type; };
    template < > struct _higher_type<int,double> { typedef double type; };
    template < > struct _higher_type<int,long double> { typedef long double type; };
    template < > struct _higher_type<long,int> { typedef long type; };
    template < > struct _higher_type<long,long> { typedef long type; };
    template < > struct _higher_type<long,long long> { typedef long long type; };
    template < > struct _higher_type<long,float> { typedef float type; };
    template < > struct _higher_type<long,double> { typedef double type; };
    template < > struct _higher_type<long,long double> { typedef long double type; };
    template < > struct _higher_type<long long,int> { typedef long long type; };
    template < > struct _higher_type<long long,long> { typedef long long type; };
    template < > struct _higher_type<long long,long long> { typedef long long type; };
    template < > struct _higher_type<long long,float> { typedef float type; };
    template < > struct _higher_type<long long,double> { typedef double type; };
    template < > struct _higher_type<long long,long double> { typedef long double type; };
    template < > struct _higher_type<float,int> { typedef float type; };
    template < > struct _higher_type<float,long> { typedef float type; };
    template < > struct _higher_type<float,long long> { typedef float type; };
    template < > struct _higher_type<float,float> { typedef float type; };
    template < > struct _higher_type<float,double> { typedef double type; };
    template < > struct _higher_type<float,long double> { typedef long double type; };
    template < > struct _higher_type<double,int> { typedef double type; };
    template < > struct _higher_type<double,long> { typedef double type; };
    template < > struct _higher_type<double,long long> { typedef double type; };
    template < > struct _higher_type<double,float> { typedef double type; };
    template < > struct _higher_type<double,double> { typedef double type; };
    template < > struct _higher_type<double,long double> { typedef long double type; };
    template < > struct _higher_type<long double,int> { typedef long double type; };
    template < > struct _higher_type<long double,long> { typedef long double type; };
    template < > struct _higher_type<long double,long long> { typedef long double type; };
    template < > struct _higher_type<long double,float> { typedef long double type; };
    template < > struct _higher_type<long double,double> { typedef long double type; };
    template < > struct _higher_type<long double,long double> { typedef long double type; };
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_mod(T1 x, T2 y)
    {{
        return x-y*floor(1.0*x/y);
    }}
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_floordiv(T1 x, T2 y)
    {{
        return floor(1.0*x/y);
    }}
    #ifdef _MSC_VER
    #define _brian_pow(x, y) (pow((double)(x), (y)))
    #else
    #define _brian_pow(x, y) (pow((x), (y)))
    #endif

}

////// HASH DEFINES ///////



void _run_ratemonitor_3_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _num_clock_dt = 1;
double* const _array_ratemonitor_3_t = _dynamic_array_ratemonitor_3_t.empty()? 0 : &_dynamic_array_ratemonitor_3_t[0];
const size_t _numt = _dynamic_array_ratemonitor_3_t.size();
const size_t _num_clock_t = 1;
double* const _array_ratemonitor_3_rate = _dynamic_array_ratemonitor_3_rate.empty()? 0 : &_dynamic_array_ratemonitor_3_rate[0];
const size_t _numrate = _dynamic_array_ratemonitor_3_rate.size();
const size_t _num_spikespace = 101;
const size_t _numN = 1;
    ///// POINTERS ////////////
        
    double*   _ptr_array_defaultclock_dt = _array_defaultclock_dt;
    double* __restrict  _ptr_array_ratemonitor_3_t = _array_ratemonitor_3_t;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    double* __restrict  _ptr_array_ratemonitor_3_rate = _array_ratemonitor_3_rate;
    int32_t* __restrict  _ptr_array_neurongroup_3__spikespace = _array_neurongroup_3__spikespace;
    int32_t*   _ptr_array_ratemonitor_3_N = _array_ratemonitor_3_N;


    size_t _num_spikes = _ptr_array_neurongroup_3__spikespace[_num_spikespace-1];
    // For subgroups, we do not want to record all spikes
    // We assume that spikes are ordered
    int _start_idx = -1;
    int _end_idx = -1;
    for(size_t _j=0; _j<_num_spikes; _j++)
    {
        const size_t _idx = _ptr_array_neurongroup_3__spikespace[_j];
        if (_idx >= 0) {
            _start_idx = _j;
            break;
        }
    }
    if (_start_idx == -1)
        _start_idx = _num_spikes;
    for(size_t _j=_start_idx; _j<_num_spikes; _j++)
    {
        const size_t _idx = _ptr_array_neurongroup_3__spikespace[_j];
        if (_idx >= 100) {
            _end_idx = _j;
            break;
        }
    }
    if (_end_idx == -1)
        _end_idx =_num_spikes;
    _num_spikes = _end_idx - _start_idx;
    _dynamic_array_ratemonitor_3_rate.push_back(1.0*_num_spikes/_ptr_array_defaultclock_dt[0]/100);
    _dynamic_array_ratemonitor_3_t.push_back(_ptr_array_defaultclock_t[0]);
    _ptr_array_ratemonitor_3_N[0]++;

}


