#include<stdio.h>
#include<conio.h>
void main()
{
char string[20];
int i,l,b=0;
printf("enter a word\n");
gets(string);
l=strlen(string[20]);
for(i=0;i<l;i++)
{
if(string[i] !=string[l-i-1])
{
b=1;
break;
}
}
if(b)
{
printf("the word is not palindrome");
else
printf("the word is palindrome");
}