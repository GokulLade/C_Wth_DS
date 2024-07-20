// Finding even odd using pointer
#include <stdio.h>
void main()
{
    int num = 0, *p;

    puts("Enter the Value to Check Even or Odd");
    scanf("%d", &num);

    p = &num;

    printf(*p % 2 == 0 ? "Even" : "Odd");
}