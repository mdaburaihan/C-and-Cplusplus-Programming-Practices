#include<stdio.h>
#include<conio.h>
void demo(int,int &);
void main()
{
int x,y;
x=5;
y=6;
printf("\nValue of x=%d and y=%d\n",x,y);
demo(x,y);
printf("\nValue of x=%d and y=%d\n",x,y);
getch();
}
void demo(int a,int &b)
{
a++;
b++;
printf("\nValue of x=%d and y=%d\n",a,b);
}
