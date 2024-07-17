/*Implement a function to check if two strings are anagrams of each other.


Input:

First string: listen

Second string: silent

Output:

The strings are anagrams.

Input:

First string: hello

Second string: world

Output:

The strings are not anagrams.
*/
#include<stdio.h>
#include<string.h>

int checkStr(char ch1[], char ch2[])
{
    int len,i,temp=0,j;

    //Finding the Length
    for(len=0;ch1[len]!='\0';len++);

    //sorting the string
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(ch1[i]<ch1[j])
            {
                temp=ch1[i];
                ch1[i]=ch1[j];
                ch1[j]=temp;
            }
            if(ch2[i]<ch2[j])
            {
                temp=ch2[i];
                ch2[i]=ch2[j];
                ch2[j]=temp;
            }
        }
    }

    return stricmp(ch1,ch2);
}
void main()
{
   char ch1[100],ch2[100];

   puts("Enter the First String");
   gets(ch1); 

   puts("Enter the Second String");
   gets(ch2); 

   int r=checkStr(ch1,ch2);

   if(r)puts("The string are not anagrams");
   else puts("The string are anagrams");
}