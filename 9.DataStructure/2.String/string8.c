// Finding palindrome or not using single string
#include<stdio.h>
void main()
{
    char ch1[100],ch2[100];
    int i,len,j;

    printf("Enter the String\n");
    gets(ch1);

    for(len=0;ch1[len]!='\0';len++);
   
    for(i=len-1;i>=0;i--,j++)
    {
        ch2[j]=ch1[i];
        puts(ch2);
    }
    ch2[j]='\0';
}