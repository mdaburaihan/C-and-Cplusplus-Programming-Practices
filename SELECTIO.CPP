#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,min,j,loc,x;
clrscr();
printf("Enter number of elements in array\n");
scanf("%d",&n);
printf("Enter numbers now\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
min=a[i];
loc=i;
for(j=i+1;j<n;j++)
{
if(min>a[j])
{
min=a[j];
loc=j;
}
}
x=a[loc];
a[loc]=a[i];
a[i]=x;
}
printf("Array after sorting\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}