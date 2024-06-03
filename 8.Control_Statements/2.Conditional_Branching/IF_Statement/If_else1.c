// Finding lower case char or not using if...else

#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the Character\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The Character is in Lower case");
    }
    else
    {
        printf("The Character is  not in Lower case");
    }
}