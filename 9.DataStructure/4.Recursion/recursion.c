// Finding factorial using recursion:
#include <stdio.h>
#include <conio.h>
long fact(int n)
{
    if (n != 0)
        return n * fact(n - 1);
    else
        return 1;
}
void main()
{
    int n;
    printf("Enter a no ");
    scanf("%d", &n);
    printf("%d Factorial = %ld", n, fact(n));
}