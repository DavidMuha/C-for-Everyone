#include <stdio.h>
#include <math.h>

int main() {
    double value;

    printf("Enter a value between 0 and 1 (non-inclusive): ");
    scanf("%lf", &value);

    if (value <= 0.0 || value >= 1.0) {
        printf("Error: The value must be between 0 and 1 (non-inclusive).\n");
        return 1;
    }

    double sineValue = sin(value);
    printf("The sine of %.6lf is %.6lf\n", value, sineValue);

    return 0;
}
