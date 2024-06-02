/*Increment Decrement operators [ ++ / -- ]:
They are used to increment / decrement a variable value by 1.*/

#include <stdio.h>
void main()
{
    int a = 10, b = 15;
    a++; // post increment
    b--; // post decrement

    printf("%d %d\n", a, b);

    ++a; // prefix increment
    --b; // prefix decrement
    printf("%d %d \n", a, b);

    a = 20, b = 30;

    printf("%d %d\n", a++, b++); // First Print then increment or Decrement

    a = 20, b = 30;

    printf("%d %d\n", ++a, --b); // First increment or Decrement then Print
}