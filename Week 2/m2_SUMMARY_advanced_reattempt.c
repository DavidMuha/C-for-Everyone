/*
By removing or tweaking the tolerance, you allow the program to naturally detect when the two averages start differing based on how floating-point calculations accumulate errors.

1. Reverting to the Original Code + Adding a Comparison Check

    Instead of applying a strict tolerance, you can modify the code to check for a direct difference between avg and navg
*/

#include <stdio.h>

int main(void)
{
    int i;
    double x;
    double avg = 0.0; //better average
    double navg; //naive average
    double sum = 0.0;

    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n",
        "Count", "Item", "Average", "Naive avg",
        "____", "_____", "________", "________");

    for (i = 1; scanf("%lf", &x) == 1; ++i)
    {
        avg += (x - avg) / i; //better average

        sum += x;  //naive sum
        navg = sum / i; //naive average

        printf("%5d%17e%17e%17e\n", i, x, avg, navg);

        // Check when averages become different
        if (avg != navg)
        {
            printf("Averages are no longer identical at iteration %d\n", i);
        }
    }
    return 0;
}

/* 
    Why this *might* work
        By removin the tolerance check, the program directly relies on floating-point precision to detect divergence
        if avg and navg are not bitwise identical, the program stops at the first point of divergence, proving that errors accumulate differently in the naive approach.

    What to expect
        1. if the numbers diverge early: this will prove the better average is more stable in normal conditions (before overflow)
        2. if the numbers stay identical until overflow: This further reinforces that under certain input patterns (e.g. exponential growth), both methods behave similarly up to precision limits
    
    Additional adjustments after testing
        Change the input numbers to a lower number
            instead of:
                1e308
                1
                1e308
                1
                1e308
            
            use (and even increase the number of repetitions for clearer results):
                1e30
                1
                1e30
                1
                1e30

        If avg != navg triggers too early, reintroduce a small absolute tolerance (1e-9) to filter out minor differences cause by rounding
            if (fabs(avg - navg) > 1e-9)
        
        If no diffrences occur before overflow, use controlled input patterns (e.g. alternating large and small values) instead of exponential growth

    How this solves the exercise
        The goal is to demonstrate experimentally that the better average is more numerically stable than the naive average.
        If the program detects a difference between the two, it proves that one method handles precision errors better.


    FINAL STEP: running the Test

        Try running the program with various inputs:
            ./compute_average < input.txt
        
        Or using a generator:
            ./generate_numbers | ./compute_average
*/
