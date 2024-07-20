// Finding digital sum using recursion
#include <stdio.h>
int s = 0; /* global var*/
int dsum(long n)

{
    if (n != 0)
    {
        s = s + n % 10;
        dsum(n / 10);
    }
    return s;
}
void main()
{
    long n;
    printf("Enter a no");
    scanf("%ld", &n);

    printf("%ld digital sum = %d", n, dsum(n));
}