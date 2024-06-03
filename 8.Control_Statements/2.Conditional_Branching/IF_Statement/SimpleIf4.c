
// Find the absolute [+Ve] value of given no absolute value means Positive value

#include <stdio.h>
void main()
{
    int n;

    printf("Enter the Number\n");
    scanf("%d", &n);

    if (n < 0)
        n = -n; //(n=-n ==> (-ve) or (-ve)=(+ve))

    printf("The Absolute Value is : %d\n", n);
}