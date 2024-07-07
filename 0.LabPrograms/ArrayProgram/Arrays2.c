/* 2).Write a C program that prints the elements of a given array in a specific format. The program should take an array as input and display the array elements in pairs, with each pair consisting of the first and last elements, followed by the second and second-to-last elements, and so on. If the array has an odd number of elements, the middle element should be printed alone.


For example, given the array: [2, 5, 1, 6, 7, 9, 8, 3], the expected output should be:


2 3

5 8

1 9

6 7
*/

#include <stdio.h>
void main()
{
    int n, i, j;

    printf("Enter the Array Size\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the %d Element\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2; i++)
        {
            printf("%d %d\n",a[i],a[n-i-1]);
        }
        printf("\n");
    }
    else{
        for(i=0;i<n/2;i++)
        {
            printf("%d %d \n",a[i],a[n-i-1]);
        }
        printf("%d ",a[(n/2)]);
    }
}