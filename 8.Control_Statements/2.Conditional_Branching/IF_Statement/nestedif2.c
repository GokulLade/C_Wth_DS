// ATM PIN Validation

#include <stdio.h>
void main()
{
    int pin, count = 0;

start:
    printf("Enter Pin number :\n");
    scanf("%4d", &pin);

    if (pin == 1234)
    {
        printf("Welcome to HDFC Bank ATM\n");
    }
    else
    {
        count++;
        if (count == 3)
            puts("Your Card blocked 24 hours\n");
        else
        {
            puts("Invalid Pin");
            goto start;
        }
    }
}