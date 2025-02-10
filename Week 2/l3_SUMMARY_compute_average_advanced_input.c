#include <stdio.h>

int main(void)
{
    long double value = 1.0; // Starting value

    // Infinite loop to generate values
    while (1)
    {
        if (printf("%Le\n", value) < 0) // Handle SIGPIPE or EOF
        {
            break; // Exit if the pipe is closed
        }
        value *= 2; // increase the value
    }

    return 0;
}
