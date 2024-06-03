// Finding special char or not?

#include <stdio.h>
void main()
{
    char ch;

    printf("Enter the Character\n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        printf("It is not a Special Character...\n");
    }
    else
    {
        printf("It is a Special Character...\n");
    }
}