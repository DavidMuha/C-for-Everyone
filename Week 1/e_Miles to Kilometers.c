#include <stdio.h>

int main()
{
    // define the variables
    double yards, miles, kilometers;
    
    // scan user input
    printf("\nInput yards: ");
    scanf("%lf", &yards);
    printf("\nInput miles: ");
    scanf("%lf", &miles);

    // conversion formula for kilometers
    kilometers = 1.609 * (miles + yards / 1760.0);
    
    // end result (output)
    printf("\nThe marathon (%.2lf yards and %.2lf miles) is %.2lf kilometers.\n", yards, miles, kilometers);

    return 0;
}

// Outcome: The marathon ? yards and ? miles is ? kilometers. 

/* We had previously used itegers, which provide a rough estimate. However, for the marathon conversion, we need more precision, so we could use doubles instead of int.

If we had used integers, the result would be approximately 42 kilometers, which would be less accurate conversion

Why 1760.0 instead of 1760:

    1760.0 is a double, and dividing by a double ensure floating-point division, which gives a more accurate results.
    1760 would perform integer division, which could return 0 (if 386 is divided by 1760) instead of a fractional value.
  */
