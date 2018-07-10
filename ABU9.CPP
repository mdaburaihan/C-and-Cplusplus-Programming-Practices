
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[10],b[10];
printf("enter a word\n");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("the word is palindrome");
else
printf("the word is not palindrome");
getch();
}
