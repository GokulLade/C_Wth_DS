// Direct initialization of a string

#include<stdio.h>
void main()
{
    //First way
    char str1[]="Gokul Subhash lade";

    printf("%s\n",str1);
    puts(str1);
    printf(str1,"\n");

    //Second Way
    char str2[]="\n Naresh \n It \t Hyd \0 erabad";
    puts(str2);

    //Third Way
    char str3[2]="N", str4[]="N", str5[2]={'N'},str6[]={'N','\0'},str7[]={'N'};
    puts(str3);
    puts(str4);
    puts(str5);
    puts(str6);
    puts(str7);

}