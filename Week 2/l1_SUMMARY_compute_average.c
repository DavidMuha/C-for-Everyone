/*  Compute a better average 
    Summary exercises */

#include <stdio.h>
#include <math.h>

int main(void){

    int i;
    double x;
    double avg = 0.0; //a better average
    double navg; //a naive average
    double sum = 0.0;

    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n", "Count", "Item", "Average", "Naive avg", "_____", "_____", "_____", "_____");

    for (i = 1; scanf("%lf", &x) == 1; ++i)
        {
        avg += (x - avg) / i;  //better average
        
        sum += x;         //naive average 
        navg = sum / i;
        
        printf("%5d%17e%17e%17e\n", i, x, avg, navg);
        }
        return 0;
        }
}

/* Why is AVG better than NAVG?

avg updates the average without having to recalculate everything from scratch again, saving much more computational power and memory (especially when working with larger data sets)

code breakdown: 

avg is set to 0.0 at the beginning

i = 1:
- i is initialized to 1.
- You input a valid number (e.g., 5.5).
- scanf successfully reads the input, and scanf returns 1.
- The loop continues, and each time a valid input is read, i is incremented by 1 after the scanf function successfully reads a number (++i).

scanf statement:
- Using == 1 is effectively checking for success in reading the input, and it's very similar to directly checking for invalid input (0) or EOF. Condition scanf("%lf", &x) == 1 checks if scanf successfully reads a valid double value from the user.
- If the input is valid (e.g., 3.14), scanf returns 1 and the loop continues.
- If the input is invalid (e.g., abc), scanf returns 0, and the loop will exit.

when a new input is given:
    - i increases by 1 (which is used to get the number of how many inputs have been given to this point) 
    - the input is assigned to x
    - the loop will continue to grow as long as a new input is given
    
once the input has been added:
    
naive average:
    - input (x) is added to the sum with +=
    - sum gets divided by i (the counted number of input enterences)
    - the division calculated the average
    - programm is ready for next input

average:
    - avg is 0.0 
    - (x-avg) will determine if the new average will grow (x > avg) or sink (x < avg)
    - the subtraction will be divided by i (the counted number of input enterences)
    - the division will be added to the old sum (number either negative or positive)

Why is it better? ->  will just add (+=) the division (which can make the number bigger or smaller) instead of calculating the sum from scratch
*/
