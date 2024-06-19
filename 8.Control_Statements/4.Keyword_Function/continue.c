// Use to skip the statement in program or loop

#include <stdio.h>
void main()
{
    int n = 10, i;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            continue;
        printf(" %d", i); // print even number only
    }
}