/*1). Write a C program that finds pairs in an array whose sum is 15.


Test Data :


Input the size of array: 12

Input 8 elements in the array :

2 4 6 7 8 9 10 11 12 13 14 16


Expected output :

(2, 13)

(4, 11)

(6, 9)

(7, 8)
 */

#include <stdio.h>
void main()
{
    int i, j, n;

    printf("Enter the size of Array\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d Element \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == 15)
            {
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
        printf("\n");
    }
}