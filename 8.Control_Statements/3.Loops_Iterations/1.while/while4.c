// Finding Factorial of number

#include <stdio.h>
void main()
{
    int n, f = 1;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (n >= 1)
    {
        f = n * f;
        n--;
    }

    printf("Factorial is : %d", f);
}