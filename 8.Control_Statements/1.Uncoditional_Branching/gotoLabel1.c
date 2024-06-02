#include<stdio.h>
void main()
{
    goto g;

    l:
    puts("Lade");
    return;

    s:
    puts("Subhash");
    goto l;

    g:
    puts("Gokul");
    goto s;

}