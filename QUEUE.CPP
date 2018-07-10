#include<stdio.h>
#include<conio.h>
#define max 100

int q[max+1],front=0,rear=0;
void main()
{
clrscr();
void create();
void traverse();
void insert();
void delet();
create();
traverse();
insert();
printf("\n After insert an element");
traverse();
delet();
printf("\n After deletion");
traverse();
getch();
}

void create()
{
char ch;
front=1;
do
{
rear++;
printf("\n Input element in queue:\n");
scanf("%D",&q[rear]);
printf("Press <Y/N> for more element");
ch=getch();
}
while(ch=='Y');
}

void traverse()
{
int i;
printf("\n Elements in the queue are:\n");
for(i=front;i<=rear;++i)
printf("%d\n",q[i]);
}

void insert()
{
int m;
if(rear==max)
{
printf("Queue is overflow\n");
return;
}
printf("\n Input new element to insert\n");
scanf("%d",&m);
rear++;
q[rear]=m;
}

void delet()
{
if(front==0)
{
printf("Queue is underflow\n");
return;
}
if(front==rear)
{
q[front]='\0';
front=rear=0;
}
else
{
q[front]='\0';
front++;
}
}
