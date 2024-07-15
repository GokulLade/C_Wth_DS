#include<stdio.h>
void main()
{
    float pa,rate,time;

    printf("Enter the Amount : \n");
    scanf("%f",&pa);

    printf("Enter the Rate of Interest : \n");
    scanf("%f",&rate);

    printf("Enter the Time(in year) : \n");
    scanf("%f",&time);

    printf("The Simple Interest is : %.2f \n",((pa*rate*time)/100));


}