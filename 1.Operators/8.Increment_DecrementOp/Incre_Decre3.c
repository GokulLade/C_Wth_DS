#include "stdio.h"
main() //Default it is int main()
{
    int a = 1, b;
    b = ++a + ++a + a++;
    printf("%d %d\n", a, b);

    return 0;
}