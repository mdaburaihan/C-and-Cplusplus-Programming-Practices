#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,p,q,s,r;
long int x;
printf("enter the value of n,r\n");
scanf("%d %d",&n,&r);
p=fact(n);
q=fact(n-r);
s=fact(r);
x=p/(q*s);
printf("nCr=%ld",x);
getch();
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
f*=i;
return(f);
}
