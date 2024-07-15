/*3). Write a c program to print all the frequency of character present

For Example:-

String s=" Hello Everyone"


Output as :-


The frequency of H is 1

The frequency of e is 3

The frequency of l is 2

The frequency of o is 2

The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT 

The frequency of E is 1

The frequency of v is 1

The frequency of r is 1

The frequency of y is 1

The frequency of n is 1
*/

#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i,j,len,c=0,sp=0;

    printf("Enter the String\n");
    gets(s);

    for(len=0;s[len]!='\0';len++);

    for(i=0;i<len;i++)
    {
        for(c=1,j=i+1;j<len;j++)
        {
            if(s[i]==' ') c++;
            else if(s[i]==s[j]) c++;
        }
       printf("The frequency of %c is %d \n ",s[i],c);
    }

}