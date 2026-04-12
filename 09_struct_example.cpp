#include<stdio.h>
#include<conio.h>

struct student
{
    int rollno;
    char name[100];
    char department[100];
    int year_of_joining[100];
    char coust[100];
    float score;


};

      int main()
      {
        struct student s;
        printf("enter the roll number:");
        scanf("%d",&s.rollno);
        printf("enter the name:");
        scanf("%s[\n]",s.name);
        printf("enter the deparment:");
        scanf("%s[\n]",s.department);
        printf("enter the year of joining:");
        scanf("%s",&s.year_of_joining);
        printf("enter the coust:");
        scanf("%s[\n]",s.coust);
        printf("enter the score:");
        scanf("%f",&s.score);
        printf("\n student details:");
        printf("\n roll no:%d",s.rollno);
        printf("\n name:%s",s.name);
        printf("\n department:%s",s.department);
        printf("\n year of joining:%s",s.year_of_joining);
        printf("\n coust:%s",s.coust);
        printf("\n score:%f",s.score);
        return 0;
      }
