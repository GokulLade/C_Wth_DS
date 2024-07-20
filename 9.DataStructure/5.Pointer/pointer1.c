// Storing value into pointer
#include <stdio.h>
void main()
{
    int a = 100, *p;

    p = &a;

    printf("%d\n", p);
    printf("%d", *p);
}