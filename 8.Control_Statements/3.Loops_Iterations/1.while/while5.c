// Finding power without using pow()

#include <stdio.h>
void main()
{
    int b, p, r = 1;

    printf("Enter the Base and Power\n");
    scanf("%d%d", &b, &p);

    int temp = p; // only for printing

    while (p >= 1)
    {
        r = r * b;
        p--;
    }
    printf("The %d power %d is : %d", b, temp, r);
}