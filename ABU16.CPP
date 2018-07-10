#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[] )
{
clrscr();
FILE *fp;
int i;
char word[15];
fp=fopen("argv[1]","w");
printf("number of arguments in the line=%d\n\n",argc);
fprintf(fp,"%s",argv[1]);
fclose(fp);
printf("contents of %s file\n\n",argv[1]);
fp=fopen(argv[1],"r");
for(i=2;i<argc;i++)
{
fscanf(fp,"%s",word);
printf("%s",word);
}
fclose(fp);
printf("\n\n");
for(i=0;i<argc;i++)
printf("%*s\n",i*5,argv[i]);
getch();
}