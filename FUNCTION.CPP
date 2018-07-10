#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int sum(int,int);
int sum(int,int,int);
int sum(int,int,int,int);

void main()
{
cout<<"Sum:"<<sum(10,10)<<endl;
cout<<"Sum:"<<sum(10,10,10)<<endl;
cout<<"Sum:"<<sum(10,10,10,10)<<endl;
getch();
}
int sum(int a,int b)
{
return(a+b);
}
int sum(int a,int b,int c)
{
return(a+b+c);
}
int sum(int a,int b,int c,int d)
{
return(a+b+c+d);
}