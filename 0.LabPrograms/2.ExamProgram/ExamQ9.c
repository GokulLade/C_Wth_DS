/*Program 1 ( Point 5 )


write a C program to check the given string is palindrome or not ?

Input: liril
output:liril is palindrome

input :exam
output:exam is not a palindrome

*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
    char ch[100];
    int i;

    puts("Enter the String");
    gets(ch);

    int len=strlen(ch);

    for(i=0;i<len/2;i++)
    {
        if(tolower(ch[i])!=tolower(ch[len-i-1]))
        {
            printf("%s is Not A Palindrome",ch);
            return;
        }
    }
    printf("%s is Palindrome\n",ch);
}