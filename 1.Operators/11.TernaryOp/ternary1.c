// Even Number Program using Ternary Operator

#include <stdio.h>
void main()
{
    int n;
    
    printf("Enter the Number\n");
    scanf("%d", &n);

    printf((n % 2) ? "Odd\n" : "Even\n");
}