/*  Read in 3 Floats and Print sum
    Sally Coder
    Compiling,debuggin and running a program 
*/

#include <stdio.h>

int main(void)
{
    float a, b, sum;

    printf("Input two floats: ");
    scanf("a = %f, b = %f\n", a, b);
    printf("a = %f, b = %f\n", a, b);

    sum = a + b;
    printf("sum = %f\n\n", sum);

    return 0;
}
