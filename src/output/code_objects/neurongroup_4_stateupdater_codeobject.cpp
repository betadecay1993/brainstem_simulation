#include "code_objects/neurongroup_4_stateupdater_codeobject.h"
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



void _run_neurongroup_4_stateupdater_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _numv = 100;
const size_t _numwI_3 = 100;
const size_t _numwE2 = 100;
const size_t _numwI_1 = 100;
const size_t _numwE = 100;
const size_t _numy = 100;
const size_t _numwI_2 = 100;
const size_t _numnot_refractory = 100;
const size_t _numdt = 1;
const size_t _numu = 100;
    ///// POINTERS ////////////
        
    double* __restrict  _ptr_array_neurongroup_4_v = _array_neurongroup_4_v;
    double* __restrict  _ptr_array_neurongroup_4_wI_3 = _array_neurongroup_4_wI_3;
    double* __restrict  _ptr_array_neurongroup_4_wE2 = _array_neurongroup_4_wE2;
    double* __restrict  _ptr_array_neurongroup_4_wI_1 = _array_neurongroup_4_wI_1;
    double* __restrict  _ptr_array_neurongroup_4_wE = _array_neurongroup_4_wE;
    double* __restrict  _ptr_array_neurongroup_4_y = _array_neurongroup_4_y;
    double* __restrict  _ptr_array_neurongroup_4_wI_2 = _array_neurongroup_4_wI_2;
    char* __restrict  _ptr_array_neurongroup_4_not_refractory = _array_neurongroup_4_not_refractory;
    double*   _ptr_array_defaultclock_dt = _array_defaultclock_dt;
    double* __restrict  _ptr_array_neurongroup_4_u = _array_neurongroup_4_u;


    //// MAIN CODE ////////////
    // scalar code
    const size_t _vectorisation_idx = -1;
        
    const double dt = _ptr_array_defaultclock_dt[0];
    const double _lio_1 = 20.0 * 0.001;
    const double _lio_2 = 1.0f*((- 0.00055) * dt)/0.001;
    const double _lio_3 = 1.0f*dt/0.001;
    const double _lio_4 = (- 0.06) * 0.001;
    const double _lio_5 = 1.0f*16.2760416666667/0.001;
    const double _lio_6 = 2.5 * 0.001;
    const double _lio_7 = 10.0 * 0.001;
    const double _lio_8 = 1.0f*(0.1 * (- dt))/0.001;
    const double _lio_9 = 1.0f*(0.06666666666666667 * (- dt))/0.001;


    const int _N = 100;
    
    for(int _idx=0; _idx<_N; _idx++)
    {
        // vector code
        const size_t _vectorisation_idx = _idx;
                
        double v = _ptr_array_neurongroup_4_v[_idx];
        double wI_3 = _ptr_array_neurongroup_4_wI_3[_idx];
        double wE2 = _ptr_array_neurongroup_4_wE2[_idx];
        double wI_1 = _ptr_array_neurongroup_4_wI_1[_idx];
        double wE = _ptr_array_neurongroup_4_wE[_idx];
        const double y = _ptr_array_neurongroup_4_y[_idx];
        double wI_2 = _ptr_array_neurongroup_4_wI_2[_idx];
        char not_refractory = _ptr_array_neurongroup_4_not_refractory[_idx];
        double u = _ptr_array_neurongroup_4_u[_idx];
        if(!not_refractory)
            not_refractory = false || (! (v >= _lio_1));
        else 
            not_refractory = true || (! (v >= _lio_1));
        const double _u = (_lio_2 * u) + u;
        const double _v = (_lio_3 * (((_lio_4 * u) + (_lio_5 * (_brian_pow(0.001 + (0.016 * v), 2)))) - (((_lio_6 + (0.0333333333333333 * v)) * ((wI_1 + wI_2) + wI_3)) + ((_lio_7 + v) * (((0.0333333333333333 * wE) + (0.0333333333333333 * wE2)) + (0.1 * y)))))) + v;
        const double _wE = (_lio_8 * wE) + wE;
        const double _wE2 = (_lio_8 * wE2) + wE2;
        const double _wI_1 = (_lio_9 * wI_1) + wI_1;
        const double _wI_2 = (_lio_9 * wI_2) + wI_2;
        const double _wI_3 = (_lio_9 * wI_3) + wI_3;
        u = _u;
        v = _v;
        wE = _wE;
        wE2 = _wE2;
        wI_1 = _wI_1;
        wI_2 = _wI_2;
        wI_3 = _wI_3;
        _ptr_array_neurongroup_4_v[_idx] = v;
        _ptr_array_neurongroup_4_wI_3[_idx] = wI_3;
        _ptr_array_neurongroup_4_wE2[_idx] = wE2;
        _ptr_array_neurongroup_4_wI_1[_idx] = wI_1;
        _ptr_array_neurongroup_4_wE[_idx] = wE;
        _ptr_array_neurongroup_4_wI_2[_idx] = wI_2;
        _ptr_array_neurongroup_4_not_refractory[_idx] = not_refractory;
        _ptr_array_neurongroup_4_u[_idx] = u;

    }

}


