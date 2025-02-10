#include <stdio.h>
#include <math.h> // For fabs()

int main(void)
{
    int i;
    int max_iterations = 1000000; // Set a maximum number of iterations

    int print_extra_iterations = 50; // Number of extra iterations to print
    int extra_iterations = 0;        // Counter for extra iterations
    int divergence_detected = 0;     // Flag to track divergence detection

    long double x;
    long double avg = 0.0; // A better average
    long double navg;      // A naive average
    long double sum = 0.0;

    printf("%5s%25s%25s%25s\n%5s%25s%25s%25s\n",
           "Count", "Item", "Average", "Naive avg",
           "_____", "_____", "_____", "_____");

    for (i = 1; i <= max_iterations && scanf("%Lf", &x) == 1; ++i)
    {
        avg += (x - avg) / i; // Better average
        sum += x;             // Naive sum
        navg = sum / i;       // Naive average

        // Check for inf or nan and stop the program
        if (isinf(avg) || isinf(navg) || isnan(avg) || isnan(navg))
        {
            printf("Overflow or invalid value detected at iteration %d\n", i);
            break;
        }

        printf("%5d%25Le%25Le%25Le\n", i, x, avg, navg);
    
        // Use a tolerance to compare the averages
        if (!divergence_detected && fabsl(avg - navg) / fabsl(navg) > 1e-6) // relative tolerance
        {
            printf("Averages are no longer identical at iteration %d\n", i);
            divergence_detected = 1; // Mark that divergence is detected
        }

        // Print extra iterations after divergence
        if (divergence_detected)
        {
            extra_iterations++;
            if (extra_iterations > print_extra_iterations)
            {
                break; // Exit after printing 50 extra iterations
            }
        }
    }

    if (i > max_iterations)
    {
        printf("Reached maximum iterations (%d). Terminating.\n", max_iterations);
    }

    return 0;
}
