// Finding palindrome:

#include <stdio.h>
void main()
{
    int n, r, rev = 0;

    printf("Enter the Number\n");
    scanf("%d", &n);

    int temp = n;
    do
    {
        r = n % 10;
        rev = rev * 10 + r;

    } while (n != 0);

    if (rev == temp)
        puts("The Number is palindrome");
    else
        puts("The Number is Not palindrome");
}