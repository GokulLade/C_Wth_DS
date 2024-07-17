/*A sum of all elements

Create a function to calculate the sum of all elements in an integer array.

Input:

Size of the array: 5

Array elements: 10 20 30 40 50

Output:

A sum of all elements in the array: 150
*/
#include <stdio.h>

int sumArr(int n)
{
    int arr[n], sum = 0, i;

    printf("Enter the %d Array Element", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    return sum;
}
void main()
{
    int n, i;
    puts("Enter the Array Size");
    scanf("%d", &n);

    int sum = sumArr(n);

    printf("A sum of All Elements in the array : %d ", sum);
}