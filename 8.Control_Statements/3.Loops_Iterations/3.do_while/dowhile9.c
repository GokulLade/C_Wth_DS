// Print: 102 ==> One Zero Two

#include <stdio.h>
void main()
{
    int n, r, rev = 0;

    printf("Enter the Number\n");
    scanf("%d", &n);
    do // First reverse number
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;

    } while (n != 0);

    do // Reverse and print
    {
        r = rev % 10;

        if (r == 1)
            printf("\tOne");
        else if (r == 2)
            printf("\tTwo");
        else if (r == 3)
            printf("\tThree");
        else if (r == 4)
            printf("\tFour");
        else if (r == 5)
            printf("\tFive");
        else if (r == 6)
            printf("\tSix");
        else if (r == 7)
            printf("\tSeven");
        else if (r == 8)
            printf("\tEight");
        else if (r == 9)
            printf("\tNine");
        rev /= 10;

    } while (rev != 0);
}