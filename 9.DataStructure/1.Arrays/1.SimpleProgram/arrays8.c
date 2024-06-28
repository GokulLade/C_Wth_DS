// Read a stu id, name, 6 sub marks and find stu tot, avg and

#include <stdio.h>
#include <conio.h>
void main()
{
    int rollno, sub[6], tot = 0, i, p = 1;
    char name[30], dob[20],
        gender[10], father[30], mother[30], school[30],
        id1[30], id2[30],
        subj[6][10] = {"Tel", "Eng", "Hin", "Mat", "Sci", "Soc"};

    float avg;

    printf("Enter stu Rollno ");
    scanf("%d", &rollno);
    fflush(stdin);
    printf("Enter stu name ");
    gets(name);
    printf("Enter date of birth ");
    gets(dob);
    printf("Enter gender ");
    gets(gender);
    printf("Enter father name ");
    gets(father);
    printf("Enter mother name ");
    gets(mother);
    printf("Enter school name ");
    gets(school);
    printf("Enter identification marks 1 ");
    gets(id1);
    printf("Enter identification marks 2 ");
    gets(id2);
    printf("Enter 6 sub marks ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &sub[i]);
        tot += sub[i];
        if (sub[i] < 35)
            p = 0;
    }

    avg = tot / 6.0;
    puts("-----------------------------------------------------------------");
    puts("\t\t\t BOARD OF SECONDARY EDUCATION");
    puts("\t\t\t ANDHRA PRADESH");
    puts("-----------------------------------------------------------------");
    printf("Roll No: %d\t Name: %s\n"

           ,
           rollno, name);

    printf("DOB: %s\t Gender: %s\n"

           ,
           dob, gender);
    printf("Father: %s\t Mother: %s\n"

           ,
           father, mother);

    printf("School: %s\n", school);

    puts("-----------------------------------------------------------------");
    printf("Identification Mark 1: %s\n"

           ,
           id1);

    printf("Identification Mark 2: %s\n"

           ,
           id2);

    puts("-----------------------------------------------------------------");
    puts("Subject\t Marks \t Pass / Fail");
    puts("-----------------------------------------------------------------");
    for (i = 0; i < 6; i++)
        printf("%s \t %d \t %s\n"

               ,
               subj[i], sub[i], sub[i] >= 35 ? "P" : "F");
    puts("-----------------------------------------------------------------");
    printf("%s tot=%d, avg=%.2f and got ", name, tot, avg);

    if (p == 0)
        puts("Failed");
    else if (avg >= 75)
        puts("Distinction");
    else if (avg >= 60)
        puts("1st class");
    else if (avg >= 50)
        puts("2nd class");
    else
        puts("3rd class");
    puts("-----------------------------------------------------------------");
    getch();
}