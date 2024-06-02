#include <stdio.h>
void main()
{
    int a = printf("Gokul") && printf("Lade");
    int b = printf("Gokul") || printf("Lade");

    printf("%d %d", a, b);
}