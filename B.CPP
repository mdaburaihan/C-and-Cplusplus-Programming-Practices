#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x=7,y=5;
x=y+++x++;
y=++y+x++;
printf("%d %d",x,y);
getch();
}