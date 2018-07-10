#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,temp,ptr;
clrscr();
printf("Enter numbers of element\n");
scanf("%d",&n);
printf("Enter numbers now\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
a[-1]=-5000;
for(i=0;i<n;i++)
{
temp=a[i];
ptr=i-1;
while(temp<a[ptr])
{
a[ptr+1]=a[ptr];
ptr=ptr-1;
}
a[ptr+1]=temp;
}
printf("Array after sorting\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}