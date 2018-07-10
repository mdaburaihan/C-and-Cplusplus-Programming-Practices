#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int roll;
int dd;
int mm;
int yy;
};
void main()
{
struct student *stud;
printf("Enter student name\n");
gets(stud->name);
printf("Enter student roll\n");
scanf("%d",&stud->roll);
printf("Enter date of birth\n");
scanf("%d/%d/%d",&stud->dd,&stud->mm,&stud->yy);
printf("Display student information\n");
printf("%s\t%d\t%d\t%d\t%d\t\n\n",stud->name,stud->roll,stud->dd,stud->mm,stud->yy);
getch();
}