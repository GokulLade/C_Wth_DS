// Reading and printing a string:

#include<stdio.h>
void main()
{
    char name[50];

    printf("Enter Your Name\n");
    scanf("%s",name);

    printf("Your name is => %s ",name);
    fflush();


    //Using gets() and puts() method
    char name1[50];

    puts("Enter your name\n");
    gets(name1);

    puts(name1);
}