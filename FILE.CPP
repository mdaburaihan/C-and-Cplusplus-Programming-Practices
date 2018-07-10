#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,temp;
FILE*p;
p=fopen("abu.txt","a+");
printf("Enter number of terms\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
temp=0;
if(i%j==0)
temp=1;
}
if(temp==0)
{
printf("%d",i);
putw(i,p);
}
fclose(p);
getch();
}