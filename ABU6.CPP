#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,temp,a[5],n;
printf("enter the value of n\n");
scanf("%d",&n);
printf("\n enter 5 numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n\n the descending order is:\n");
for(i=9;i>=0;i--)
printf("%d\t",a[i]);
getch();
}