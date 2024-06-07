// Finding lower / upper / digit / space / special char.

#include <stdio.h>
void main()
{
    char ch;

    printf("Enter the Character : \n");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
        puts("Lower case Character");
    else if (ch >= 'A' && ch <= 'Z')
        puts("Upper case Character");
    else if (ch >= '0' && ch <= '9')
        puts("Digit");
    else if (ch == ' ')
        puts("Space");
    else
        puts("Spacial character");
}