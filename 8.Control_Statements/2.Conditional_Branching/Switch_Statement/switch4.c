#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float a,b; char op;
start:
puts("---------------------------------------------------------------------");
printf("Enter two numbers "); scanf("%f %f",&a,
&b);
puts("---------------------------------------------------------------------");
puts("\t\t\t M E N U");

puts("---------------------------------------------------------------------");
puts("\t\t\t +. Add");
puts("\t\t\t -. Sub");
puts("\t\t\t *. Mul");
puts("\t\t\t %. Mod");
puts("\t\t\t /. Div");
puts("\t\t\t ^. Pow");
puts("\t\t\t E. Exit");
puts("---------------------------------------------------------------------");
printf("\t\t\t Enter ur option[ ]\b\b");
scanf(" %c",&op);
switch(op)

{
case '+': printf("\t\t\t\t\t\t\tSum=%.2f\n",a+b);break;
case '-': printf("\t\t\t\t\t\t\tSub=%.2f\n",a-b);break;
case '*': printf("\t\t\t\t\t\t\tmul=%.2f\n",a*b);break;
case '%': printf("\t\t\t\t\t\t\tmod=%.2f\n",fmod(a,b));break;
case '/': printf("\t\t\t\t\t\t\tDiv=%.2f\n",a/b);break;
case '^': printf("\t\t\t\t\t\t\tPow=%.2f\n",pow(a,b));break;
case 'e': case 'E': exit(0);
default : printf("Invalid Option");
}
goto start;
}