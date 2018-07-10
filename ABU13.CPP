#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int n,i;
printf("enter the length of fibonacci series:");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
printf("\t%d",fib(i));
getch();
}
int fib(int num)
{
if(num<=1)
return(num);
else
return(fib(num-1)+fib(num-2));
}