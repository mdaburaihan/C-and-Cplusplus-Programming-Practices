#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float f,c;
printf("enter temperature in farenheit\n");
scanf("%f",&f);
c=(5*f-160)/9;
printf("temperature in centigrade:%f",c);
getch();
}
