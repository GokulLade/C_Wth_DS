// Q4.Write a logic to make the sum of two number without using +(plus) operator.

#include <stdio.h>
void main()
{
    int a = 20, b = 20;

    int res = -(-a - b);

    printf("Addition =%d", res);
}