//Calculation of two number using switch operator

#include<stdio.h>
void main()
{
    int n1,n2,op;
    printf("Enter two Number\n");
    scanf("%d%d",&n1,&n2);
    printf(" 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulus\n");
    scanf("%d",&op);

    switch(op)
    {
        case 1: printf("Addition = %d",(n1+n2));
                break;

        case 2: printf("Subtraction = %d",(n1-n2));
                break;

        case 3: printf("Multiplication = %d",(n1*n2));
                break;

        case 4: printf("Division = %d",(n1/n2));
                break;

        case 5: printf("Modulus = %d",(n1%n2));
                break;

        default:printf("Invalid Number please Enter (1 to 5)");                                               

    }

}