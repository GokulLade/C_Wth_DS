// Finding string length and reverse string, without using predefined functions
#include<stdio.h>
void main()
{
    int len;
    char ch[100];

    puts("Enter the String");
    gets(ch);

    //Finding the length without using strlen() function
    for(len=0;ch[len]!='\0';len++);
    printf("The Length of String is=> %d\n ",len);

    //Reverse String Without using strrev() function
    while(len--)printf("%c",ch[len]);
}