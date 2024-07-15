/*Program 1 ( Point 5 )

 Write a  C program to count the vowels and consonant of a given String.

Input: elegant

output:
vowel count is :3
consonant count is :4 */
#include <stdio.h>
void main()
{
    char ch[100];
    int i, len, v = 0, c = 0;

    puts("Enter the String\n");
    gets(ch);

    for (len = 0; ch[len] != '\0'; len++);

    for (i = 0; i < len; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'z')
        {
            if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            {
                v++;
            }
            else
                c++;
        }
    }

    printf("Vowel count is : %d\n", v);
    printf("Consonant count is : %d\n", c);
}