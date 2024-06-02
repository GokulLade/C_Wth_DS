/*  2.Arithmetic operators [ +, -, *, %, / ]: They are used
      to perform mathematical calculations.
      Eg: a+b, a-b, a*b,....*/

#include <stdio.h>
#include <math.h>
void main()
{
    //% - modules [ remainder ]:-

    /*Note: if the divisor is bigger than dividend then
          dividend is the answer.*/

    printf("%d\n", (5 % 2));
    printf("%d\n", (2 % 5));
    printf("%d\n", (55 % 72));

    /*Note: In C & C++ we can’t perform floating modules
            with % operator. For this we have to use fmod( )
            function available in <math.h>*/

    printf("%f\n", fmod(3.2, 4.4));

    /*Note: Any no%10 gives last digit.*/

    printf("%d\n", (321 % 10));
    printf("%d\n", (212 % 10));
    printf("%d\n", (45 % 10));
    printf("%d\n", (8 % 10));

    /*Note: In Modules if the numerator is negative then
            result also negative.*/

    printf("%d%d%d\n", (-5 % 10), (-2 % -10), (3 % -4));
}
