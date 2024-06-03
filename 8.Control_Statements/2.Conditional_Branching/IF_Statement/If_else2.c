// Finding 2 digit no or not.

#include <stdio.h>
void main()
{
    int n;

    printf("Enter the Number\n");
    scanf("%d", &n);

    if (n >= 10 && n <= 99 || n >= -10 && n <= -99)
    {
        printf("The Number is Two Digit...\n");
    }
    else
    {
        printf("The Number is Not Two Digit number\n");
    }
}