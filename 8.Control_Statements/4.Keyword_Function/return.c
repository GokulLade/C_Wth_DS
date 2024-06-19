// use to close function

#include <stdio.h>
void main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is Even Number\n", n);
        return; // Close the function if condition true
    }
    printf("%d is Odd number", n);
}