#include<stdio.h>
void main()
{
    char ch[100];
    int len,i,j,temp=0;

    puts("Enter the String\n");
    gets(ch);

    for(len=0;ch[len]!='\0';len++);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(ch[i]>ch[j])
            {
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }

    puts(ch);

}