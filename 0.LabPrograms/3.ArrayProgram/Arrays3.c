/*3).Write a C program that rearranges the elements of a given array by moving all the zeros to the front. The program should take an array as input and swap the positions of non-zero elements with zeros, such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.


For example:

given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]

Expected output:

1 2 4 5 3 0 0 0 0
*/

#include <stdio.h>
void main()
{
    int i, j, n, t = 0, k = 0;

    printf("Enter the Array Size \n");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d Element", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            t = a[i];
            a[i] = a[k];
            a[k] = t;
            k++;//1
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}