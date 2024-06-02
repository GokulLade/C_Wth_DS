#include <stdio.h>
void main()
{
    int b = 2;
    int a = 0 && ++b; // If First case is fail then second is not check
    int c = 1 || b++; // If First case is true then second is not check

    printf("%d", b); // Because the value of b is still ==> 2
}