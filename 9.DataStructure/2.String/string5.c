// Lower to upper / Upper to lower:
#include<stdio.h>
void main()
{
    char ch[100];
    int i;

    puts("Enter the String\n");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A' && ch[i]<='Z') ch[i]+=32;
        if(ch[i]>='a' && ch[i]<='z') ch[i]-=32;
    }
    puts(ch);

}