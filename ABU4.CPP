#include<stdio.h>
#include<conio.h>
void main()
{
char c1;
c1=getch();
if(isalpha(c1)==1)
printf("%c is alphabet",c1);
elseif(isdigit(c1)==1)
printf("%c is a digit",c1);
else
printf("%c is a special character",c1);
getch();
}