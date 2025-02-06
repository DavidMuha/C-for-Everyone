#include <stdio.h>

int main()
{
    float number_1;
    float number_2;
    double sum;

    printf("\nPrint the sum of two numbers!\n");
    
    printf("\nInput your first number: ");
    scanf("%f", &number_1);
    
    printf("Input your second number: ");
    scanf("%f", &number_2);

    sum = number_1 + number_2;
    printf("\nThe sum of your numbers is: %.2lf\n", sum);

    return 0;
}
