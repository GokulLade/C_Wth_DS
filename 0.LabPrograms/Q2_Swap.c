
// Q2.Write a logic to swap two number with using third variable.

#include <stdio.h>
void main()
{
    int a = 20, b = 30, temp;

    printf("Before Swapping a=%d b=%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping a=%d b=%d", a, b);
}