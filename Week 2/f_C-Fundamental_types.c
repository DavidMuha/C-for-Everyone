/*  C Fundamental Types

    Normal:   
    char     | 'a',    'N',   '5', '\n'  (ASCHI TABLE)   | Represents characters (e.g., letters, digits, and special characters like \n).
    int      |  0,      -3,    77                        | Represents whole numbers 
    double   |  1.245, 3.2e5                             | Represents floating-point numbers used for scientific calculations 

    Modifiers:
    unsigned     | Applies to integers, preventing negative numbers, increasing the positive range.
    long         | Extends the range for both integers and floating-point numbers (for larger calculations).

    Floating-Point Variants:
    float        | Stores floating-point numbers with lower precision.
    double       | Stores floating-point numbers with higher precision.
    long double  | Stores even higher precision floating-point numbers.


MEMORY REPRESENTATION: How many bytes?

Binary Representation: C uses binary to represent numbers. A byte (8 bits) is the basic memory unit.

    a byte is
     ▢ | ▢ | ▢ | ▢ | ▢ | ▢ | ▢ | ▢ |    8 bits
so   0    0   0    0   1    0   1    0      = 10
.                                           = '\n'


int:
On a typical machine, int is 4 bytes, with values between:

- 2 147 483 648
+ 2 147 483 647   =   2³² - 1


32-bit Representation: An int uses 32 bits, with 1 bit for the sign and 31 bits for the number.

System-Dependent Sizes:
    The size of data types can vary across systems, with some systems using 2 bytes for int, while others use 16 bytes.
    C optimizes for different system architectures, meaning data type sizes can vary.

When writing a code, you need to know what is representable -> sizeof Operator
    The sizeof operator can be used to find out the size of a data type on the current system, ensuring compatibility and proper memory usage for your program.

Find out with:
    sizeof (type)
    sizeof (variable)
*/

//  Fundamental Types sizeof operator
//  Sylls Coder
//  09.01.2025

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6; //declare and initialize
    double average = 0.0; //good practice

    printf("ON MY SYSTEM:\n");

    printf("int is %lu bytes.\n", sizeof(int));

    printf("long int is %lu bytes.\n", sizeof(long int));

    printf("char is %lu bytes.\n", sizeof(char));

    printf("float is %lu bytes.\n", sizeof(float));

    printf("double is %lu bytes.\n", sizeof(double));

    printf("long double is %lu bytes.\n", sizeof(long double));

    return 0;
}

/*  OUTPUT
ON MY SYSTEM:
int is 4 bytes.
long int is 8 bytes.
char is 1 bytes.
float is 4 bytes.
double is 8 bytes.
long double is 16 bytes.
*/
