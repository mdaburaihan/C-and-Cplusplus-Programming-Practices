#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1, *f2, *f3;
int n,i;
f1=fopen("data","w");
for(i=0;i<100;i++)
{
scanf("%d",&n);
if(n==-1)
break;
putw(n,f1);
}
fclose(f1);
f1=fopen("data","r");
f2=fopen("odd","w");
f3=fopen("even","w");
while((n=getw(f1))!=EOF)
{
if(n%2==0)
putw(n,f3);
else
putw(n,f2);
}
fclose(f1);
fclose(f2);
fclose(f3);
f2=fopen("odd","r");
f3=fopen("even","r");
printf("\n\n contents of even file\n\n");
while((n=getw(f3))!=EOF)
printf("%d",n);
fclose(f2);
fclose(f3);
getch();
}