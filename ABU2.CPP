#include<stdio.h>
#include<conio.h>
int fact(int n)
{
int q,i,f=1;
for(i=1;i<=q;i++)
{
f*=i;
return f;
}
void main()
{
int n,p;
printf("enter a number\n");
scanf("%d",&n);
p=fact(n);
printf("result=%d",p);
getch();
}


