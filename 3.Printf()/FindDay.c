#include<stdio.h>
void main()
{
    int tday,y,m,w;

    printf("Enter Days : \n");
    scanf("%d",&tday);

    y=tday/365;
    tday=tday%365;

    m=tday/30;
    tday=tday%30;

    w=tday/7;

    tday=tday%7;

    printf("Year : %d  Month : %d Week : %d Day : %d",y,m,w,tday);



}