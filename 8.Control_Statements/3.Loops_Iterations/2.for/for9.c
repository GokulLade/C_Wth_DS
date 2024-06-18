/*Prime / composite no:
2 factors are 1, 2 ==> prime no’s
3 factors are 1,3
4 factors are 1, 2, 4 ==> composite no
*/

#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter the number\n");
    scanf("%d", &n);

    if (n == 1)
        printf("Not Prime number or Composite number\n");

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("Composite Number");
            return;
        }
    }
    printf("Prime Number");
}