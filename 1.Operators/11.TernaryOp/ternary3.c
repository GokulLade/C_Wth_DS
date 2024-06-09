// Finding +Ve/-Ve/0 using ternary operator

#include <stdio.h>
void main()
{
    int n;

    printf("Enter the Number\n");
    scanf("%d", &n);

    printf(n > 0 ? "Positive Number" : n == 0 ? "Zero"
                                              : "Negative Number");
}