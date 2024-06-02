#include <stdio.h>
void main()
{
    int a = (2, 3, 4); // left to right
    printf("%d\n", a);

    a = 2, 3, 4; // first priority is ==> equal symbol(=)==> 2
    printf("%d\n", a);

    a = (2, (2, 3), 6, (2, 4), 1 + 3); //(2,3,6,4,4)==> 4
    printf("%d", a);
}