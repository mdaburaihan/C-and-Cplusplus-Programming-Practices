#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct node
{
int info;
struct node*ptr;
}*front,*rear,*temp,*front1;
int frontelement();
void enq(int data);
void dq();
void display();
void create();
void queuesize();
int count=0;
void main()
{
int n,ch,e;
printf("\n1.Enter queue");
printf("\n2.Delete queue");
printf("\n3.Front element");
printf("\n4.Exit");
printf("\n5.Display");
printf("\n7.Queue size");
create()
while(1)
{
printf("\nEnter Choice:");
scanf("%d",&ch);
switch(ch)
{
case1:
printf("Enter data:");
scanf("%d",&n);
enq(n);
break;
case2:
dq();
break;
case3:
e=frontelement();
if(e!=0)
printf("Front element:%d",e);
else
printf("\nNo front element in queue as queue is empty");
break;
case4:
exit(0);
case5:
display();
break;
case6:
queuesize();
break;
default:
printf("\nWrong entry");
break;
}
}
}
void create()
{
front=rear='\0';
}
void queuesize()
{
printf("\nQueue size:%d",count);
}
void enq(int data)
{
if(rear=='\0')
{
rear=(struct node*)malloc(1*sizeof(struct node));
rear->ptr='\0';
rear->info=data;
front=rear;
}
else
temp=(struct node*)malloc(1*sizeof(struct node));
rear->ptr=temp;
temp->info=data;
temp->ptr='\0';
rear=temp;
}
count++;
}
void display()
{
front1=front;
if((front1=='\0')&&(rear=='\0'))
{
printf("Queue is empty");
return;
}
while(front1==rear)
printf("%d",front1->info);
}
void dq()
{
front1=front;
if(front1=='\0')
{
printf("\n Error:Trying to display elements from empty queue");
return;
}
else
if(front1->ptr!='\0')
{
front1=front1->ptr;
printf