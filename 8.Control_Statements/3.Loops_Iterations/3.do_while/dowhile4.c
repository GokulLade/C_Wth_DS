// Finding max, min digits of given no.

#include <stdio.h>
void main()
{
    long n;
    int r, min = 9, max = -9;

    printf("Enter the number\n");
    scanf("%d", &n);

    do
    {
        r = n % 10;

        if (max < r)
            max = r;

        if (min > r)
            min = r;

        n /= 10;

    } while (n != 0);

    printf("Max = %d Min = %d",max,min);
}