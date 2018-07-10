#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define absolute(x)x<0?abs(x):x
void main()
{
clrscr();
int x,y,z;
printf("enter value of x:");
scanf("%d",&x);
z=absolute(x);
printf("\n the absolute number is: %d",z);
getch();
}
