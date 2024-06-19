// exit() is function use to terminate total program

#include <stdio.h>
#include <stdlib.h>
void display()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf(" %d", i);
        if (i == 5)
            exit(0);
    }
}
void main()
{
    display();
    printf("Good Morning"); // Not print because program terminated using exit(0) function
}