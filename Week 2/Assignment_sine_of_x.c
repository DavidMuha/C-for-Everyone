/* Peer-graded Assignment (week 2)
   Write a program that can give the sine of a value between 0 and 1 (non inclusive) 
   26.12.2024
*/

#include <stdio.h>
#include <math.h>      //added the math library for the sin() function 

int main()
{
    double x, sine; //declare

    printf("\nFind our what the sine of your number is!");  

    printf("\n Input a value between 0 and 1: ");      //scan user input for x
    scanf("%lf", &x);

    sine = sin(x); //calculate sine of x

    printf("\nThe sine of %.2lf is: %.6lf\n", x, sine);  //end result (output)

    return 0;
}
