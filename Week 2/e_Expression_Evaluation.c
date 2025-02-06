/* Expression Evaluation
   Sally Coder
   07.01.2025
   Expressions and precedence
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 0, d = 0; //iinitialize

//easy
    c = a - b;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

// modulo operator (%) -> calculates the remainder after divion
    c = a % b; // c = 5 % 7 -> 5/7 -> 0. -> 5-0 = 5
    d = b % a; // d = 7 % 5 -> 7/5 -> 1. -> 7-5 = 2
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

// unary and binary minus
    c = -a - b; // c = (-5) - (+7) = -12
    d = -b - a; // d = (-7) - (+5) = -12
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

// pre and post increment
    c = ++a + b++; // c = ++5 + 7++ ->  c = 5+1 (first increases the value, then uses the updated value) + 7(first uses the value of x - so no value increase before print - then +1) ->  c = 6+7
    
// OUTPUT
    // a = 6
    // b = 8
    // c = 6 + 7 (value of 7 hasn't increased during the operation to get c yet)

    d += 5; //assignment operators -> += (plus assign) ; -= (minus assign) 

    // 0 += 5 -> d = 0 + 5 -> d = 5
}
