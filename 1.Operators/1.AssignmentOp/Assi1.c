// Operator is a special symbol used to do a particular task

// C comes with 44 operators and 14 separators.

/* 1.Assignment operator [ = ]: It copies the value on its
right side into the variable on its left side.
        In assignment operation, the left side operand should
be a variable. i.e. constants or expressions not allowed on left side.*/

#include <stdio.h>
void main()
{
    int a = 10, b, c; // initialization
    a = b = c = 200;  // If we are print any one answer is 200

    // int d=”abc”; ==> Error because of “abc” is a string

    // 10=20; ==> Error because of 10 is a constant

    // 10+20 = 30=30 ==> Error

    /*Note: Always expression evaluates constant value.
          Hence left side expressions not allowed.*/

    printf("%d", c);
}