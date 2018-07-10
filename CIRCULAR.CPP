 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<alloc.h>
 #define max 5

 int cqueue[max];
 int front=-1;
 int rear=-1;

 void main()
 {
 clrscr();
 void insert(),del(),display();
 int choice;
 while(1)
 {
 printf("1.Insert\n");
 printf("2.Delete\n");
 printf("3.Quit\n");
 printf("Enter your choice:");
 scanf("%d",&choice);
switch(choice)
{
case1:
insert();
break;
case2:
del();
break;
case3:
display();
break;
case4:
exit(1);
default:
printf("Wrong Entry\n");
}
}
}
void insert()
{
int item;
if((front==0 && rear==max-1)||(front==rear+1))
{
printf("Queue is overflow\n");
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else
if(rear==max-1)
rear=0;
else
rear=rear+1;
printf("Input the element to insert:");
scanf("%d",&item);
cqueue[rear]=item;
}

void del()
{
if(front==-1)
{
printf("Queue is underflow\n");
return;
}
printf("Deleted element from the queue is:%d\n",cqueue[front]);

if(front==rear)
{
front=-1;
rear=-1;
}
else
if(front==max-1)
front=0;
else
front=front+1;
}

void display()
{
int f_pos=front,r_pos=rear;
if(front==-1)
{
printf("Queue is empty\n");
return;
}
printf("Queue elements are:\n");
if(f_pos<=r_pos)
	while(f_pos<=r_pos)
	{
	printf("%d\n",cqueue[f_pos]);
	f_pos++;
	}
	else
{
	while(f_pos<=max-1)
	{
	printf("%d\n",cqueue[f_pos]);
	f_pos++;
	}
	f_pos=0;
	while(f_pos<=r_pos)
	{
	printf("%d\n",cqueue[f_pos]);
	f_pos++;
	}
}
printf("\n");
}


