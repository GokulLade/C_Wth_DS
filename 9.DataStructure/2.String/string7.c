// Finding palindrome or not using single string
#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch[100];
    int i,len;

    printf("Enter the String\n");
    gets(ch);

    for(len=0;ch[len]!='\0';len++);

    for(i=0;i<len/2;i++)
    {
        if(tolower(ch[i])!=tolower(ch[len-i-1]))
        {
            puts("Not Palindrome");
            return;
        } 
    }
    puts("Palindrome");
}