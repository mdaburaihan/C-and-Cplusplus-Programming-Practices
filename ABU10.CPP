#include<stdio.h>
#include<conio.h>
#include<math.h>
void quad(float,float,float);
void main()
{
clrscr();
float a,b,c;
printf("enter the coefficients of a,b,c;\n");
scanf("%f%f%f",&a,&b,&c);
quad(a,b,c);
getch();
}
void quad(float a,float b,float c)
{
float determinant,r1,r2,real,imag;
determinant=b*b-4*a*c;
if(determinant>0)
{
r1=(-b+sqrt(determinant))/(2*a);
r2=(-b-sqrt(determinant))/(2*a);
printf("roots are:%0.2f and %0.2f",r1,r2);
}
else if(determinant==0)
{
r1=r2=-b/(2*a);
printf("roots are:%0.2f and %0.2f",r1,r2);
}
else
{
real=-b/(2*a);
imag=sqrt(-determinant/(2*a));
printf("roots are:%0.2f+%0.2fi and %0.2f-%0.2fi",real,imag,real,imag);
}
}

