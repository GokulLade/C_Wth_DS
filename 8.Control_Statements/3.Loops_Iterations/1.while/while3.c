// Finding the Even and odd sum using while loop

#include <stdio.h>
void main()
{
    int i = 1, n, sumE = 0, sumO = 0;

    printf("Enter the n number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sumE += i;
        }
        else
        {
            sumO += i;
        }
        i++;
    }
    printf("Addition of Even Number is : %d\n", sumE);
    printf("Addition of Odd Number is : %d\n", sumO);
}
