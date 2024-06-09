// Read a stu id, name, marks in 6 sub. Find the stu total, avg and result.

#include <stdio.h>
#include <string.h>
void main()
{
    char rollNo[20], name[20], res[10], grade[10];
    int mar, hin, eng, math, sci, soc, total, p = 1;
    float avg;

    printf("Enter the Student Roll Number :\n"); // Inputs from user
    scanf("%s", rollNo);

    printf("Enter the Student Name :\n");
    scanf("%s", name);

    printf("Enter the Mark of 6 subject :\n");
    scanf("%d%d%d%d%d%d", &mar, &hin, &eng, &math, &sci, &soc);

    total = mar + hin + eng + math + sci + soc; // Finding the total
    avg = (float)total / 6;                     // Finding the Avg

    printf("----------------------------------------------------------------------\n");
    printf("\t\tBord of Secondary education\n"); // only printing
    printf("\t\t\tMaharashtra\n");

    printf("----------------------------------------------------------------------\n");
    printf("Roll No : %s", rollNo); // only printing
    printf("\t\t\tName : %s\n", name);
    printf("School  : N.N Mundada malegoan \n");

    printf("----------------------------------------------------------------------\n");
    printf("Subject\t\t\tMarks\t\t\tPass/fail\n"); // only printing

    if (mar >= 35) // if mark is less than 35 then fail otherwise Pass
        strcpy(res, "Pass");
    else
    {
        strcpy(res, "Fail");
        p = 0; // For checking grade
    }
    printf("mar     \t\t %d  \t\t\t %s\n", mar, res); // only printing

    if (hin >= 35) // if mark is less than 35 then fail otherwise Pass
        strcpy(res, "Pass");
    else
    {
        strcpy(res, "Fail");
        p = 0; // For checking grade
    }
    printf("hin     \t\t %d  \t\t\t %s\n", hin, res); // only printing

    if (eng >= 35) // if mark is less than 35 then fail otherwise Pass
        strcpy(res, "Pass");
    else
    {
        strcpy(res, "Fail");
        p = 0; // For checking grade
    }
    printf("eng     \t\t %d  \t\t\t %s\n", eng, res); // only printing

    if (math >= 35) // if mark is less than 35 then fail otherwise Pass
        strcpy(res, "Pass");
    else
    {
        strcpy(res, "Fail");
        p = 0; // For checking grade
    }
    printf("math     \t\t %d  \t\t\t %s\n", math, res); // only printing

    if (sci >= 35) // if mark is less than 35 then fail otherwise Pass
        strcpy(res, "Pass");
    else
    {
        strcpy(res, "Fail");
        p = 0; // For checking grade
    }
    printf("sci     \t\t %d  \t\t\t %s\n", sci, res); // only printing

    if (soc >= 35) // if mark is less than 35 then fail otherwise Pass
        strcpy(res, "Pass");
    else
    {
        strcpy(res, "Fail");
        p = 0; // For checking grade
    }
    printf("soc     \t\t %d  \t\t\t %s\n", soc, res); // only printing

    printf("----------------------------------------------------------------------\n");

    if (p == 0)
        strcpy(grade, "Fail");
    else if (avg >= 60)
        strcpy(grade, "1st Class");
    else if (avg >= 50)
        strcpy(grade, "2st Class");
    else if (avg >= 35)
        strcpy(grade, "3st Class");
    printf("Name = %s \t Total = %d \t Avg = %.2f \t and got %s\n", name, total, avg, grade); // only printing
    printf("----------------------------------------------------------------------\n\n\n");
}