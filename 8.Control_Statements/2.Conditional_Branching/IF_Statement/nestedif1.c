// Read person age and gender and determine that person is eligible for marriage or not.
#include <stdio.h>
void main()
{
    int age;
    char gen;

    printf("Enter the Gender Male(m) and Female(f) : \n");
    scanf(" %c", &gen);

    if (gen == 'm' || gen == 'M' || gen == 'f' || gen == 'F')
    {
        printf("Enter the Age : \n");
        scanf("%d", &age);

        if (gen = 'm' || gen == 'M' && age >= 21)
        {
            printf("eligible for marriage..");
        }
        else if (gen = 'f' || gen == 'F' && age >= 18)
        {
            printf("eligible for marriage..");
        }
        else
        {
            printf("Not eligible for marriage..");
        }
    }
    else
    {
        printf("Invalid Gender\n");
    }
}