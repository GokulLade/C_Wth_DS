/*Note: In division if both operands are integers then
result also int. if anyone or both are floats then result
also float.*/

#include<math.h>
#include<stdio.h>
void main()
{
/*Note: In division if both operands are integers then
result also int. if anyone or both are floats then result
also float.*/

printf("%f %f %d\n",(5.1/2),(3/2.4),(2/4));

printf("%f\n",(float)(5/2));//==> TypeCasting

/*Note: Any no/10 removes last digit.*/

printf("%d %d\n",(231/10),(274/10));

/*Note: In division any one operand is negative then
result also negative. If both are negative then result is
positive.*/

printf("%d %d %d",(-26/23),(22/-4),(-5/-2));

}