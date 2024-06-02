// Life of Variable (When they Delete)

#include <stdio.h>
int a = 100;

void local()
{
    int b = 100;
    printf("%d \n", ++b);
}

void global()
{
    printf("%d\n", ++a);
}
void main()
{
    local(); // Delete variable after function execution
    local();
    local();

    global(); // Delete variable after Total Program execution
    global();
    global();
}