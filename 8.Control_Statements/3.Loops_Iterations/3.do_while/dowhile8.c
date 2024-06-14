#include <stdio.h>
void main()
{
    int n, r;

    printf("Enter the Number\n");
    scanf("%d", &n);

    if(n<0) printf("-",n=(-n));
    do
    {
        r = n % 100;

        if(n>9 && n<10) printf("0");
        printf("%4d",r);

        n/=100;

    } while (n != 0);
}