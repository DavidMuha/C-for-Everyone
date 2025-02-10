/* SUMMARY - Exercises

2. The mathematical formula   

sin²(x) + cos²(x) =1

holds for all x real. Does this formula hold on your machine? Try the following program:  */

#include <math.h>
#include <stdio.h>

int main(void)
{
    double two_pi = 2.0 * M_PI; //M_PI in math.h (just PI)
    double h = 0.1;             // step size
    double x;

    for (x = 0.0; x < two_pi; x += h)
    {
        printf("%5.1f: %.15e\n", x, sin(x) * sin(x) + cos(x) * cos(x));
    }

    return 0;
}

/* Understanding the program
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
double two_pi = 2.0 * M_PI;

    two_pi is the multiplication between 2.0 and PI (M_PI is from math.h and represents PI)

for (x = 0.0 < two_pi; x += h)

    x starts with 0.0 and wil be compared with the value of 2*PI (two_pi).

    every time x is smaller than two_pi, x will increase by 0.1 (h)


    For 𝑥=0,0.1,0.2,…,2𝜋, the final outcome will look like this:

    0.0: 1.00000000000000
    0.1: 1.00000000000000
    0.2: 1.00000000000000
    0.3: 1.00000000000000
    ...
    6.2: 1.00000000000000   // 6.2 last digit before going over 2PI 

{
printf("%5.1f: %.15e\n", x, sin(x) * sin(x) + cos(x) * cos(x));
}

    meaning of "%5.1f" assigned to x

    %f 
    value is for a floating-point number and should be formatted in decimal notation (e.g. 123.4) 

    %.1f
    "maximum number of decimal characters diplayed in the output"

    %5f
    "output will occupy at least 5 characters"

    -> specifies the minimum field width - the total width (in characters) allocated for the number, including spaces, digits, the decimal point, and any negative sign.

    -> if the value is shorter, it will add spaces so that the output reaches 5 characters
    -> if its bigger, the field will expand automatically to fit the number (its just a minimum, not a maximum) 
    

---   ---   ---    ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---
    
    **first missread the program and thought that %5.1f was intended for the formula, which didn't make a lot of sense with the output because of all decimal characters printed and the %.1f part

    e.g. if %5.1f was intended for the formula, (with nothing else in the printf statement), this is how the outcome should look like:

    _ _ 1.0

    -> the "_" being an empty space

    insted of the normal outcome of %.15e which is:
    1.000000000000000e+00

---  ---   ---    ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---   ---

    %.15e assigned to formula 
    -> used for printing floating-point numbers in scientific notation (e)
    -> mathematical calculation formatted to 15 digits of precision (.15)

    \n
    -> new line of code


    formula: sin(x) * sin(x) + cos(x) * cos(x)
    -> because C doesn't have "square root of 2" we have to write sin(x)*sin(x)
    -> same concept as         a^2    + b^2      = c^2
    -> pythagorean identity: sin^2(x) + cos^2(x) = 1         (why? comes from the geometry of a unit circle which has the radius of 1, centered at the origin of a coordinate system - still no idea? ask Michael)
    -> "the program should demonstrate that the Pythagorean identity holds true for all values of x in the range"


OUTPUT / Program explained

"every time the x value is higher than two_pi, the number increases by 0.1"
" sin^2(x) + cos^2(x) gets calculated for all x values up until it reaches TWO_PI (with the help of the loop and its set condition)"

Output:
    0.0: 1.00000000000000
    0.1: 1.00000000000000
    0.2: 1.00000000000000
    0.3: 1.00000000000000
    ...
    6.2: 1.00000000000000   // 6.2 last digit before going over 2PI (≈ 2 * 3.14) 

    (6.3 or higher not printed)




! sometimes output 0.999999999999999 or 1.000000000000000001 !
    -> %.15e will print 15 digits of precision in scientific notation
    -> the approximation of sin(x) and cos(x) may resuilt in no visible error when summing it in the formula

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

EXERCISE QUESTION: What happens if the format %.15e is changed to %.15f? Explain.

"Theorie"
%e and %E  -> prints as 1.23456e+00
%f -> prints as 1.23456 (no exponent)

Output with %.15e:

  0.0: 1.000000000000000e+00
  0.1: 1.000000000000000e+00
  0.2: 1.000000000000000e+00
  0.3: 1.000000000000000e+00
  0.4: 1.000000000000000e+00
  0.5: 1.000000000000000e+00
  0.6: 1.000000000000000e+00
  0.7: 1.000000000000000e+00
  0.8: 1.000000000000000e+00
  0.9: 1.000000000000000e+00
  1.0: 9.999999999999998e-01
  1.1: 1.000000000000000e+00
  1.2: 1.000000000000000e+00
  1.3: 1.000000000000000e+00
  1.4: 1.000000000000000e+00
  1.5: 1.000000000000000e+00
  1.6: 9.999999999999999e-01
  1.7: 1.000000000000000e+00
  1.8: 9.999999999999999e-01
  1.9: 9.999999999999999e-01
  2.0: 1.000000000000000e+00
  2.1: 1.000000000000000e+00
  2.2: 1.000000000000000e+00
  2.3: 1.000000000000000e+00
  2.4: 9.999999999999998e-01
  2.5: 1.000000000000000e+00
  2.6: 1.000000000000000e+00
  2.7: 1.000000000000000e+00
  2.8: 9.999999999999999e-01
  2.9: 9.999999999999999e-01
  3.0: 1.000000000000000e+00
  3.1: 9.999999999999999e-01
  3.2: 1.000000000000000e+00
  3.3: 1.000000000000000e+00
  3.4: 1.000000000000000e+00
  3.5: 9.999999999999999e-01
  3.6: 1.000000000000000e+00
  3.7: 1.000000000000000e+00
  3.8: 9.999999999999999e-01
  3.9: 1.000000000000000e+00
  4.0: 1.000000000000000e+00
  4.1: 1.000000000000000e+00
  4.2: 1.000000000000000e+00
  4.3: 1.000000000000000e+00
  4.4: 9.999999999999999e-01
  4.5: 9.999999999999999e-01
  4.6: 1.000000000000000e+00
  4.7: 1.000000000000000e+00
  4.8: 1.000000000000000e+00
  4.9: 1.000000000000000e+00
  5.0: 1.000000000000000e+00
  5.1: 1.000000000000000e+00
  5.2: 1.000000000000000e+00
  5.3: 1.000000000000000e+00
  5.4: 1.000000000000000e+00
  5.5: 1.000000000000000e+00
  5.6: 9.999999999999998e-01
  5.7: 1.000000000000000e+00
  5.8: 9.999999999999999e-01
  5.9: 1.000000000000000e+00
  6.0: 9.999999999999999e-01
  6.1: 1.000000000000000e+00
  6.2: 9.999999999999999e-01

Deviations like 9.999999999999999e-01 are caused by:

- Floating-point approximations of sin(𝑥) and cos(𝑥).
    - Floating-point numbers in C (like double) can only represent numbers with finite precision. For example: sin(1.0) and cos(1.0) are approximated to a finite number of digits, not stored with perfect precision. 
    - Squaring these approximations and summing them introduces small rounding errors.

- Accumulated rounding errors in the formula.
    - Each operation (e.g., squaring, addition) introduces a tiny rounding error.
    - These errors are small but may result in visible deviations when formatted with high precision.

Some values of x (e.g.,0.0, 1.0, 2.0) are represented more precisely in floating-point format.
For other values (e.g., 1.6, 2.4), their floating-point representation is less exact, leading to slightly larger cumulative errors.


The outcome of %.15f should print the output, without the e+00 formatting 

  0.0: 1.000000000000000
  0.1: 1.000000000000000
  0.2: 1.000000000000000
  0.3: 1.000000000000000
  0.4: 1.000000000000000
  0.5: 1.000000000000000
  0.6: 1.000000000000000
  0.7: 1.000000000000000
  0.8: 1.000000000000000
  0.9: 1.000000000000000
  1.0: 1.000000000000000
  1.1: 1.000000000000000
  1.2: 1.000000000000000
  1.3: 1.000000000000000
  1.4: 1.000000000000000
  1.5: 1.000000000000000
  1.6: 1.000000000000000
  1.7: 1.000000000000000
  1.8: 1.000000000000000
  1.9: 1.000000000000000
  2.0: 1.000000000000000
  2.1: 1.000000000000000
  2.2: 1.000000000000000
  2.3: 1.000000000000000
  2.4: 1.000000000000000
  2.5: 1.000000000000000
  2.6: 1.000000000000000
  2.7: 1.000000000000000
  2.8: 1.000000000000000
  2.9: 1.000000000000000
  3.0: 1.000000000000000
  3.1: 1.000000000000000
  3.2: 1.000000000000000
  3.3: 1.000000000000000
  3.4: 1.000000000000000
  3.5: 1.000000000000000
  3.6: 1.000000000000000
  3.7: 1.000000000000000
  3.8: 1.000000000000000
  3.9: 1.000000000000000
  4.0: 1.000000000000000
  4.1: 1.000000000000000
  4.2: 1.000000000000000
  4.3: 1.000000000000000
  4.4: 1.000000000000000
  4.5: 1.000000000000000
  4.6: 1.000000000000000
  4.7: 1.000000000000000
  4.8: 1.000000000000000
  4.9: 1.000000000000000
  5.0: 1.000000000000000
  5.1: 1.000000000000000
  5.2: 1.000000000000000
  5.3: 1.000000000000000
  5.4: 1.000000000000000
  5.5: 1.000000000000000
  5.6: 1.000000000000000
  5.7: 1.000000000000000
  5.8: 1.000000000000000
  5.9: 1.000000000000000
  6.0: 1.000000000000000
  6.1: 1.000000000000000
  6.2: 1.000000000000000
*/
