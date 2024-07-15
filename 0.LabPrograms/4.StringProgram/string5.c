/*1).Write a c program to check the String is Palindrome  or Not*/
#include <stdio.h>
#include<string.h>

void main()
{
    char ch1[100],ch2[100];
    int i,len,j=0;

    printf("Enter the String\n");
    gets(ch1);

    for(len=0;ch1[len]!='\0';len++);

    for(i=len-1;i>=0;i--,j++)
    {
        ch2[j]=ch1[i];
    }
    ch2[j]='\0';

    if(stricmp(ch1,ch2)==0) printf("Palindrome");
    else printf("Not Palindrome");

}