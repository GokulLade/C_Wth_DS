//Finding the square of the value

#include<stdio.h>
#include<math.h>
void main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Square of the value is : %d",(int)sqrt(n));//sqrt() Always return float value
}