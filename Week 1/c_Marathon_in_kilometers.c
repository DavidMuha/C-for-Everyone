/* Distance of a marathon from yards in kilometers
David Muha (copied from simple input/output miles -> tried the "fun experiment" to see if changing the double into an integer will lead to the output 42)
19.12.2024
*/

#include <stdio.h>

/*
int main()
{
    int yards = 385, miles = 26;
    int kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %d kilometers.\n", kilometers);
    return 0;
}
*/

// Modify the program (from above) to input miles and yards from the user, making it a more general conversion tool.

int main()
{
    // define the variables
    double yards, miles, kilometers;  //double instead of integer since we need higher accuracy

    // scan user input
    printf("\nInput yards: ");
    scanf("%lf", &yards);
    printf("\nInput miles: ");
    scanf("%lf", &miles);

    // conversion formula for kilometers
    kilometers = 1.609 * (miles + yards / 1760.0);
    
    // end result (output with only 2 decimals)
    printf("\nThe marathon (%.2lf yards and %.2lf miles) is %.2lf kilometers.\n", yards, miles, kilometers);
    
    return 0;
}
