#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
FILE *f1;
char c;
printf("data input");
f1=fopen("input","w");
while((c=getchar())!=EOF)
putc(c,f1);
fclose(f1);
printf("data output\n\n");
f1=fopen("input","r");
while((c=getc(f1))!=EOF)
printf("%c",c);
fclose(f1);
getch();
}