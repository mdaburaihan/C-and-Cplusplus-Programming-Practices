#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5][5],b[5][5],i,j,k,l,n,c[5][5];
printf("enter the value of n\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
scanf("%d",&b[i][j]);
for(k=0;k<=n;k++)
for(l=0;l<=n;l++)
c[k][l]=a[k][l]+b[k][l];
printf("result=%d",c[l][k]);
getch();
}