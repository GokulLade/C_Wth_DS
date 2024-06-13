// Find the no of digits in given no

#include <stdio.h>
void main()
{
    int n, c = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    // Using loop
    do
    {
        c++;
        n /= 10;
    } while (n != 0);

    printf("Digit are %d\n",c);

    // Without using loop
    int d = printf("1234567890");

    printf(" Digit are : %d ", d);
}