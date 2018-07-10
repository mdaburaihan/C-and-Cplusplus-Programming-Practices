#include<stdio.h>
#include<conio.h>
#include<string.h>
int xstrcmp(char *,char *);
void main()
{
clrscr();
char s1[50],s2[50];
int l;
printf("enter the first string:");
gets(s1);
printf("\n enter the second string:");
gets(s2);
l=xstrcmp(s1,s2);
printf("\n the comparison result is=%d",l);
getch();
}
int xstrcmp(char *s1,char *s2)
{
while(*s1==*s2)
{
if(*s1=='\0')
return(0);
s1++;
s2++;
}
return(*s1-*s2);
}