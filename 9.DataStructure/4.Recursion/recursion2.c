// Finding power using recursion:
#include <stdio.h>
long power(int b, int p)
{
    if (p != 0)
        return b * power(b, p - 1);
    else
        return 1;
}
void main()
{
    int b, p;
    printf("Enter base, power values ");

    scanf("%d %d", &b, &p);

    printf("%d ^ %d = %ld", b, p, power(b, p));
}