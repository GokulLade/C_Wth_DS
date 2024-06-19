// Use only in switch or loop

#include <stdio.h>
void main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf(" %d", i); // print 1 to 5 only
        if (i == 5)
            break;
    }

    switch (1)
    {
    case 1:
        printf("\n1");
    case 2:
        printf("\n2");
        break; // break the switch program only print 1,2
    case 3:
        printf("\n3");
    }
}