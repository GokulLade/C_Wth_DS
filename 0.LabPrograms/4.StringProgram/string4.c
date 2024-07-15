/*Write a C program to check is the String contains any vowel or not.


Input as : 

Enter a String : Apple

Output as : 

This String contains vowel.


Input as : 

Enter a String : Rhythm

Output as : 

There is no vowel present in this String.
*/
#include<stdio.h>
void main()
{
    int i,j,v=0;
    char s[0];
    printf("Enter the string\n");
    gets(s);

    printf("%s",s);

    for(i=0;s[i]!='\0';i++);

    for(j=0;j<i;j++)
    {
         if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U')
         {
            v++;
         }
         else v=0;
    }
    if(v>0)
        printf("This String contains vowel.\n");
    else 
    printf("\nThere is no vowel present in this String.");
}