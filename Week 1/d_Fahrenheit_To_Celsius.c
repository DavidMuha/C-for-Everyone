/*
Fahrenheit to Celsius
David Muha
18.12.2024
*/

#include <stdio.h>

int main()
{
    double Fahrenheit;
    double Celsius;

    printf("\nEnter Fahrenheit: ");
    scanf("%lf", &Fahrenheit);

    Celsius = (Fahrenheit - 32) * 5 / 9;
    printf("%.2lf Fahrenheit is %.2lf Celsius\n", Fahrenheit, Celsius);

    return 0;
}

/* Important Note on Conversions

Formulas:    Celsius = (Fahrenheit - 32) / 1.8

alternative: Celsius = (Fahrenheit - 32) * 5/9


-> The 1.8 in the formuala is as a literal double constant. Because of this, even though we're working with integers for the variables, the calculatio nwill be performed as a double. The result is then converted back to an integer.
-> This process involves what are called silend conversions, where the program automaticallz changes the type of the values during the calculation.
