// Finding no of lower, upper, digits, spaces,special char in given string.

#include<stdio.h>
void main()
{
    char ch[100];
    int i,u=0,l=0,d=0,sp=0;

    puts("Enter the String\n");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A' && ch[i]<='Z') u++;
        else if(ch[i]>='a' && ch[i]<='z') l++;
        else if(ch[i]>='0' && ch[i]<='9') d++;
        else sp++;
    }
    printf("Lower => %d \n Upper => %d \n Digits => %d \n Special char => %d \n",l,u,d,sp);
}