/*Write a C program to count the number of alphabet present in a given String .

Input as : Apple

Output as : The count of alphabet is : 5
*/

#include<stdio.h>
void main()
{
    int i;
    char s[0];
    printf("Enter the string\n");
    gets(s);

    printf("%s",s);

    for(i=0;s[i]!='\0';i++);

    printf("The count of alphabet is : %d",i);
}