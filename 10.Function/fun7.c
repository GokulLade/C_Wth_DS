/*
Palindrome.

Implement a function to check if a given string is a palindrome.

Input: radar

Output: The string is a palindrome.


Input: hello

Output: The string is not a palindrome.*/

#include <stdio.h>
#include <string.h>
int rev(char ch[])
{
    int len, i = 0, j = 0;
    char ch1[100];

    // Finding the length
    for (len = 0; ch[len] != '\0'; len++)
        ;

    // Reverse the string;
    for (i = len - 1; i >= 0; j++, i--)
    {
        ch1[j] = ch[i];
    }
    ch1[j] = '\0';

    return stricmp(ch, ch1);
}
void main()
{
    char ch[100];

    puts("Enter the String");
    gets(ch);

    int r = rev(ch);

    if (r)
        printf("The String is not a palindrome");
    else
        printf("The String is a palindrome");
}