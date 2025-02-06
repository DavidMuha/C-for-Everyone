#include <stdio.h>
#define PI 3.14159

int main()
{
    double radius, volume; //declare

    printf("Enter radius: ");  //scan user input for radius
    scanf("%lf", &radius);

    volume = PI * radius * radius * radius * 4.0 / 3.0;  //formula for volume of sphere

    printf("\nVolume is: %.2lf \n\n", volume);  //end result (output)

    return 0;
}
