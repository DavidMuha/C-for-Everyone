/*  Fundamental Type char
    09.01.2025

Definition of char:
    o	char is a fundamental type in C used to store individual characters, such as lowercase letters, digits, and special characters.
    o	A literal char is represented using single quotes, e.g., 'a', '7', or 'n'.
    o	Non-printing characters (e.g., newline \n, bell \a) also fall under char and perform actions on the computer, like moving the cursor to a new line or making a sound.

ASCII Table:
    o	char values are represented in the ASCII table (0 – 127), where each character corresponds to a unique integer value.

Uppercase letters: 'A' = 65, 'B' = 66, ..., 'Z' = 90.
Lowercase letters: 'a' = 97, 'b' = 98, ..., 'z' = 122.
Digits: '0' = 48, '1' = 49, ..., '9' = 57.

    o	Other characters like punctuation marks, special symbols (e.g., $, *), and non-printing characters (e.g., newline \n, bell \a) also have corresponding ASCII values.

Non-Printing Characters:
    o	These characters do not show on the screen but perform functions.
    
    	\n (newline): Moves the cursor to the next line, ASCII value 10.
    	\a (bell): Causes a sound to be played, ASCII value 7.
    
    o	The program uses these non-printing characters in its output, where \n creates a new line and \a produces a sound (bell).

*/

//  Char in C
//  A Fundamental Type
//  Sally Coder

#include <stdio.h>

int main(void)
{
    char c = 'A';

    printf("c in ASCII is %d\n", c);

    printf("c the character %c\n", c);

    printf("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);

    printf("Three bell rings chars are: %c%c%c \n", '\a', '\a', '\a');

    return 0;
}

/* Code explained:

char c = 'A';

we will first print c as an integer  - %d
.                     as a character - %c

the expressions (c, c+1 and c+2) are integer expressions but are interpreted as characters - so in effect, the ASCI table gets used to show what gets printed

\a is a non-printing character that will "print" a bell sound (has nothing to do with the char c)

