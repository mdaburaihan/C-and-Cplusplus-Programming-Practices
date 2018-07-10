#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
long int s=0;
int n,x,i;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the value of x\n");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
s=s+pow(x,i);
}
printf("sum=%ld",s);
getch();
}
