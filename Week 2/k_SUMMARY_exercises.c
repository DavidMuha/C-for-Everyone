/* EXERCISES (file; summary "chapter 3")

------------------------------------------------------------------------------------------------------------------------------------------------

1.  Not all real numbers are machine-representable; there are too many of them.Thus, the numbers that
are available on a machine have a "graininess" to them.As an example of this, the code
*/

/*----------------------------------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    double x = 123.45123451234512345;
    double y = 123.45123451234512300; //last 2 digits zero compare to x

    printf("%17fui%17fui", x, y);

    return 0;
}
----------------------------------------------------------------------------------------------*/

/*  causes two identical numbers to be printed. How many zeros must the initializer for y end with to get
different numbers printed? Explain your answer.

-   double displys max. 15 floating-point digits

1. maybe change from double to long double (since it can print up to 32 floating point digits instead of only 15)
2. change the number to 12345,.......


gpt: Correct! To address the problem in Exercise 1 and ensure all digits are displayed correctly, you have two main approaches:

1. Adjust the Floating-Point Digits to Fit Within double Precision
    Reason: The double type in C has a precision limit of approximately 15–17 significant digits.

    If you reduce the total digits of the numbers to 15 or fewer significant digits, both x and y can be stored and displayed accurately.

*/

/*----------------------------------------------------------------------------------------------
#include <stdio.h>
int main(void)
{
    double x = 123.451234512345;
    double y = 123.451234512340; // Different by last digit within double precision
    printf("%.15f %.15f\n", x, y);
    return 0;
}
------------------------------------------------------------------------------------------------*/

/* OUTPUT: 123.451234512345 123.451234512340

2. Change to long double for Higher Precision
Reason: A long double can typically store 19–21 significant digits, depending on the platform, allowing more digits to be represented and displayed accurately.

    Change:

    Use long double for the variable declarations.
    Add the L suffix to the number literals to ensure they are treated as long double.
    Use the %Lf format specifier in printf to print long double.

*/

/*----------------------------------------------------------------------------------------------

#include <stdio.h>
int main(void)
{
    long double x = 123.45123451234567890L;
    long double y = 123.45123451234567800L; // Different by last few digits
    printf("%.18Lf%.18Lf\n", x, y);
    return 0;
}

-----------------------------------------------------------------------------------------------*/

/* OUTPUT: 123.451234512345678900 123.451234512345678000

SUMMARY: If you stick with double, limit the digits to 15 significant digits or fewer.
If you need higher precision, switch to long double with the L suffix for literals and the %Lf specifier for printing.
Both approaches ensure the numbers are distinguishable in the output.

------------------------------------------------------------------------------------------------------------------------------------------------
