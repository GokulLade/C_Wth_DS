// Finding array size:

#include <stdio.h>
void main()
{
    int a[2][2] = {{1, 2}, {3, 4}};

    char b[2][3] = {1,2,3,4,5,6};

    printf("a takes %d bytes\n",sizeof(a));
    printf("b takes %d bytes\n",sizeof(b));
    
}