/*C Program to Display All Characters Present in the Prime Position of a String.

Test Data :

Input a string : today is wednesday

Output as : da sdey
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char ch[100];
    int i, j, c = 0;

    printf("Enter the String\n");
    gets(ch);


    int len = strlen(ch);
    for (i = 0; i<len;i++)
    {
        c=0;
        for (j = i;j>0;j--)
        {
            if(i%j==0)c++;
            
        }
        if(c==2)printf("%c",ch[i]);
    }
}