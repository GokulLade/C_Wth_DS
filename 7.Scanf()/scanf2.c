//Convert Celsius to Fahrenheit[F=c*1.8+32]
#include<stdio.h>
void main()
{
    float c;
    printf("Enter the celsius\n");
    scanf("%f",&c);

    printf("Fahrenheit = %.2f\n",(c*1.8+32));

    //Convert Fahrenheit to Celsius[C=f-32*5/9]

    float f;
    printf("Enter the Fahrenheit\n");
    scanf("%f",&f);

    printf("Celsius = %.2f\n",((f-32)*5/9));
}