/*reate a function to check if a string contains only digits.

Input:

String: 12345

Output:

The string contains only digits.

Input:

String: 45A7

Output:

The string contains non-digit characters.*/

#include <stdio.h>

int checkNum(char ch[])
{
    int len, i;

    // finding the Length
    for (len = 0; ch[len] != '\0'; len++)
        ;

    // finding the digit in string
    for (i = 0; i < len; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'z')
            return 1;
    }
    return 0;
}
void main()
{
    char ch[100];

    puts("Enter the String");
    gets(ch);

    int r = checkNum(ch);

    if (r)
        puts("The String contains non-digit characters");
    else
        puts("The String contains only digit");
}