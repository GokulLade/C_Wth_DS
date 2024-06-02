// sizeof():==>  It return the number of bytes taken by a variable /data type / value.

#include <stdio.h>
void main()
{
    int a = 30;

    printf("%d\n", sizeof(a));     //==> For Variable
    printf("%d\n", sizeof(float)); //==> For Datatype
    printf("%d\n", sizeof('A'));   //==> For value
    printf("%d\n", sizeof(char));  //==> For Datatype

    printf("%d\n", sizeof(32768));

    char b[] = "Gokul"; //==> String add null character
    printf("%d\n", sizeof(b));

    int c = 20;
    printf("%d\n", sizeof(c + 4)); //==>In sizeof() operator expression not consider
    printf("%d", c);               //==> So value is still =>20
}