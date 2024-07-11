// Storing of multiple string:

#include<stdio.h>
void main()
{
    char name[5][30]={"Gokul","Ganesh","Swapnil","Shreyas","Aniket"};

    puts("Names :");
    puts("***********************************");

    for(int i=0;i<5;i++)
    {
        puts(name[i]);
    }
    puts("***********************************");

}