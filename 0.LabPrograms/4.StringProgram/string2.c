/*Write a C program to print the reverse of a given String 

Input as :

Enter a String : NareshIT

Output as : 

The reverse of the String is : TIhseraN
*/

#include<stdio.h>
void main()
{
    int i,j;
    char s[100];

    printf("Enter the String\n");
    gets(s);

    for(i=0;s[i]!='\0';i++);
   
    for(j=i;j>=0;j--)
    {
        printf("%c",s[j]);
    }
}