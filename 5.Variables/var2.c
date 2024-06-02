// Initial values

#include <stdio.h>
int a;
float b;
char c;
void main()
{
    int d;
    float e;
    char f;

    printf("%d %d %d\n", a, b, c); // Initial value of Global variable is or int=0,float=0.00000,char=blank space
    printf("%d %d %d\n", d, e, f); // Initial value of Local variable is Garbage
}