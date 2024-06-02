#include <stdio.h>
void main()
{
    int a = 10, b = 30, c = 22;
    float d = 4.0;

    a += 10; //==> a=a+10 =20
    b -= 2;  //==> b=b-2 =28
    c *= 5;  //==> c=c*5 =110
    d /= 3;  //==> d=d/3; =1.33

    printf("%d %d %d %.2f\n", a, b, c, d);

    a += b + 5; //==> a=a+(b+5) => a=20+(28+5) => a=53

    printf("%d", a);
}