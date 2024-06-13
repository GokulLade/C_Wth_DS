// Finding 1st and last digits of given no.

#include <stdio.h>
void main()
{
    int n, f=0,l=0;

    printf("Enter the number\n");
    scanf("%d", &n);
    
    l=n%10; //Last digit number

    f=n;

    do
    {
        f=f/10;
        
    } while (f>=10);
    
    printf("First number is : %d", f);
    printf("Last number is : %d",l);
}