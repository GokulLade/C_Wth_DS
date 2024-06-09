// Finding big in two no’s using ternary operator

#include <stdio.h>
void main()
{
    int a, b;

    printf("Enter two number a,b");
    scanf("%d%d", &a, &b);

    puts(a > b ? "a is big" : b > a ? "b is big "
                                    : "Both are same");
}