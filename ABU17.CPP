#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k=1;
printf("1");
printf("\n");
printf("enter the no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",k++);
}
if(j>=2)
k=j;
printf("\n");
}
getch();
}