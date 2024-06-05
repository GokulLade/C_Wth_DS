//Read a person age and gender and determine that person is eligible for marriage or not

#include<stdio.h>
void main()
{
    int age;
    char gender;

    printf("Enter the Gender Male(m),Female(f)\n");
    scanf("%c",&gender);

    printf("Enter the Age\n");
    scanf("%d",&age);

    if(age>=21 && gender=='m')
    {
        printf("eligible for marriage");
    }
    else if(age>=18 && gender=='f')
    {
        printf("eligible for marriage");
    }
    else{
        printf("Not eligible for marriage");
    }

}