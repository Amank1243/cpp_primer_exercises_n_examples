#include <iostream>
#include <cfloat>

int main() {
    using namespace std;
    // Ways to represent floating point numbers:
    // 12.34 // floating-point
    // 939001.32 // floating-point
    // 0.00023 // floating-point
    // 8.0 // still floating-point


    // You can also represent very very big numbers in floating point exponential notation by doing:
    
    // 2.52e+8 // can use E or e, + is optional
    // 8.33E-4 // exponent can be negative
    // 7E5 // same as 7.0E+05
    // -18.32e13 // can have + or - sign in front
    // 1.69e12 // 2010 Brazilian public debt in reais
    // 5.98E24 // mass of earth in kilograms
    // 9.11e-31 // mass of an electron in kilograms

    // the following are the minimum number of significant digits
    #define DBL_DIG 15 // double
    #define FLT_DIG 6 // float
    #define LDBL_DIG 18 // long double
    // the following are the number of bits used to represent the mantissa
    #define DBL_MANT_DIG 53
    #define FLT_MANT_DIG 24
    #define LDBL_MANT_DIG 64
    // the following are the maximum and minimum exponent values
    #define DBL_MAX_10_EXP +308
    #define FLT_MAX_10_EXP +38
    #define LDBL_MAX_10_EXP +4932
    #define DBL_MIN_10_EXP -307
    #define FLT_MIN_10_EXP -37
    #define LDBL_MIN_10_EXP -4931

    cout << DBL_DIG;
    
    return 0;
}