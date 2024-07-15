/*Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .

Input as :

Enter a String : Nareshit @123

Output as :

Vowel count is : 3

Consonant count is : 5

Digit count is : 3

Special Character count is : 1
*/
#include <stdio.h>
void main()
{
    int i, j, sp = 0, v = 0, c = 0, d = 0, sc = 0;
    char s[100];

    printf("Enter the String\n");
    gets(s);

    for (i = 0; s[i] != '\0'; i++)
        ;

    for (j = 0; j < i; j++)
    {
        if (s[j]==" ")
            sp++;
        else if (s[j] <= '0' && s[j] <= '9')
            d++;
        else if (s[j] >= 'A' && s[j] <= 'z')
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
            {
                v++;
            }
            else
                c++;
        }
        else
            sp++;
    }

    printf("Vowel count is : %d\n", v);
    printf("Consonant count is : %d\n", c);
    printf("Digit count is : %d\n", d);
    printf("Special Character count is : %d\n", sc);
    printf("Space: %d\n", sp);
}