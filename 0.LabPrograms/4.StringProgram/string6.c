/*2). Write a c Program to check whether two given strings are anagrams of each other or not.

input 1:- listen

input 2:- Silent

this an anagram String


input 1:- Jack

input 2:- Jake

this is not an anagram String
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100],s2[100],temp=0,temp1=0;
    int len,i,j;

    printf("Enter the first String\n");
    gets(s1);
    strlwr(s1);

    printf("Enter the second String\n");
    gets(s2);
    strlwr(s2);

    //Finding the length of string
    for(len=0;s1[len]!='\0';len++);

    //sorting the string
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(s1[i]>s1[j])
            {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
            }
            if(s2[i]>s2[j])
            {
                temp1=s2[i];
                s2[i]=s2[j];
                s2[j]=temp1;
            }
        }
    }
    if(strcmp(s1,s2)==0) printf("This an anagram String\n");
    else puts("This is not an anagram string\n");
}