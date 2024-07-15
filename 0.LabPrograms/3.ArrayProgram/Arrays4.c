/* 4). Write a C program to find and print all the missing elements that are not present in a given array. Given an array of integers, your task is to identify and print all the numbers that are missing within a specified range.


For example:

given the input array arr = [1, 4, 7, 12, 17]

Expected output as : 2 3 5 6 8 9 10 11 13 14 15 16

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

    for(i=a[n-1];i>=1;i--)
    {
        for()
    }

}