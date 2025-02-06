/* The int type (sort, long, unsigned)


90:10 rule
- if you concentrate on the things tat are typical, then you can get 90% of your study by only looking at 10 percent of the entire language.


Typical modern machine:
    int stored in 32 bits - that's 32 0s and 1s (4 bytes)

Range:
    -2 147 483 648  to  + 2 147 483 647

int:
    used to represent integer values

Other ints:
    short           -> fewer bytes (typically 2 bytes)
    long            -> more bytes (typically 8 bytes)
    unsigned        -> (4 bytes, unsigned int can go from 0 to over 4 billion)   -> data only interpreted wit positive numbers + doubles the upper range of numbers 

literals:
    35     (ordinary int)
    35L    (long)
    35 u   (unsigned)
    35 uL  (unsigned long)

WARNING: CONVERSION
    2/3   is   0 
  2.0/3   is   0.66666 

*/

// Fundamental Types INT
// Sally Coder
// 10.01.2025

#include <stdio.h>

int main(void)
{
    short short_a = 5;
    int normal_a = 67;
    unsigned unsigned_a = 67u;
    long long_a = 67l;

    printf("short_a = %hd, divide by int 2 is %d\n", short_a, short_a / 2);

    printf("short_a = %hd, divided by float 2 is %lf\n", short_a, short_a / 2.0);

    printf("67 as a char is %c\n", normal_a);

    printf("sizes in bytesof short, int, unsigned and long on my machine:");

    printf("%lu, %lu, %lu\n", sizeof(short_a), sizeof(normal_a), sizeof(unsigned_a).sizeof(long_a));

    return 0;
}

/*

Integer Division:
    The result is always an integer and the remainder is discarded
    5/2 will print out 2 (not 2.5)

Floating-Point Division:
    if one or both operands are floating-point values, the result will be a floating- point number
    5.0/2 will print out 2.5


Format Specifiers for Different Types
    %d    :    integer
    %hd   :    short integer
    %lu   :    size of a variable in bytes
    %lf   :    floating-point value


%lu in depth:
    typically used wit the sizeof() function in C - but its not limited to it.

breakdown:
    l stand for long
    u stands for unsigned

In use:
    often used with sizeof() because it returns the size of a data type or variable in bytes, which is typically representes as an unsigned long

    int x = 10;
    printf("Size of x: %lu bytes\n", sizeof(x));

    In this case, sizeof(x) returns the size of a variable x in bytes

Other use:
    can  also be used with any other variable of type unsigned long:

    unsigned long val = 12345;
    printf("%lu\n", val); //prints the unsigned long value


Code example --------------------------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
    short short_a = 5;
    int normal_a = 67;
    unsigned unsigned_a = 67u;
    long long_a = 67l;

    printf("short_a = %hd, divide bby int 2 is %d\n", short_a, short_a/2);
    
    printt("short_a = %hd, divide by float 2 is %lf\n", short_a, short_a/2);

    printf("67 as a char is %c\n", normal_a);

    printf("sizes in bytes of short, int, unsigned and long on my machine:");
    printf("%lu, %lu, %lu\n", sizeof(short_a), sizeof(normal_a), sizeof(unsigned_a), sizeof(long_a));

    
    return 0;
}

----------------------------------------------------------------------------------------------------------


THE INTEGER AND FLOATING POINT TYPES

-> difference only on modern super computers clearly distinguishable

float types:
    float
    double
    long double


float
    range:  10⁻³⁸ to 10⁺³⁸
    
    6 significant figures: 0.123456e12

    smallest floating-point type

    typically stored in 4 bytes 


double
    range: 10⁻³⁰⁸ to 10⁺³⁰⁸

    15 significant figures

    used for most scientific and engineering calculations

    stored in 8 bytes


long double
    range: 10⁻³⁰⁸ to 10⁺³⁰⁸
    
    number of significant digits varies is system dependent (might not be available on all systems)
    up to 31 significant digits


float <= double <= long double



LITERALS

all the same:
    1.0
    1.
    0.1e1

WARNING: significance in computation (precision)

    Floating-point numbers are approximations and may lose precision in computations.
    π (Pi) can only be approximated with 6 to 15 significant digits in float or double.

    0.1 + 123e12
    
    == 123e12 (the 0.1 would not have an effect on the number)


SPECIFIERS

%e and %E
-> prints as 1.23456e+00

%f
-> prints as 1.23456 (no exponent)

%g and %G
-> analyses between %e and %f and picks the shortest to display on the screen
