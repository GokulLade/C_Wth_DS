// Scope where we can Access

#include <stdio.h>
int a = 33;
float b;
char c;
void main()
{

    {
        int d = 10;
        float e;
        char f;
        printf("%d", d)
    }
    printf("%d", d); // Access only in function
    printf("%d", a); // Total program Access
}