/*Write a C program to reverse all the vowels present in a given string. Return the newly created string

or modified string .


Test Data :

Input a string: Aeroplane

Output as : earoplenA
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    scanf("%s", a);
    int len = strlen(a);
    int j = len;
    for (int i = 0; i < len / 2; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            if (a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u')
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                j--;
            }
            else
            {
                i--;
                j--;
            }
        }
    }
    printf("%s", a);
    return 0;
}