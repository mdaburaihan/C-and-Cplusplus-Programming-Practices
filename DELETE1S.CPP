#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i;
printf("Enter number of elements of Array\n");
scanf("%d",&n);
printf("Enter values in Array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
a[i]=a[i+1];
printf("Array after deletion from first\n");
for(i=0;i<n-1;i++)
printf("%d\t",a[i]);
getch();
}