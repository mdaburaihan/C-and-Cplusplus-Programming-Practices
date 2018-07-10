#include<stdio.h>
#include<conio.h>
int factorial(int)
void main()
{
int n;
printf("enter a number\n");
scanf("%d",&n);
printf("factorial=%d",factorial(n));
getch();
}
int factorial(int n)
{
int fact;
if(n==1)
return 1;
else
fact=n*factorial(n-1);
return(fact);
}


