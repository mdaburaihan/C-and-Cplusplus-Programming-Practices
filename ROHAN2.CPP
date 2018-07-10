#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define max 5
int deq[max];
int left=-1;
int right=-1;
main()
{
int choice;
printf("1.Input restricted deque\n");
printf("2.Output restricted dequeue\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case1:
input_que();
break;
case2:
output_que();
break;
default:
printf("Wrong Entry\n");
}
}
input_que()
{
int choice;
while(1)
{
printf("1.Insert at right\n");
printf("2.delete from left\n");
printf("3.Delete from right\n");
printf("4.Display\n");
printf("5.quit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case1:
input_right();
break;
case2:
delete_left();
break;
case3:
delete_right();
break;
case4:
display_queue();
break;
case5:
exit();
default:
printf("Wrong Entry\n");
}
}
}
output_que()
{
int choice;
while(1)
{
printf("1.insert at right\n");
printf("2.Delete at left\n");
printf("3.Delete from left\n");
printf("4.Display\n");
printf("5.Quit\n");
printf("Enter your choice:\n");
scanf("%d",&choice);
switch(choice)
{
case1:
input_right();
break;
case2:
output_left();
break;
case3:
delete_left();
break;
case4:
delete_queue();
break;
case5:
exit();
default:
printf("Wrong choice\n");
}
}
}
insert_right()
{
int item;
if(left==0 && right==max-1)||(left==right+1))
{
printf("Queue Overflow\n");
return;
}
if(left==-1)

{
left=0;
right=0;
}
else
if(right==max-1)
right=0;
else
right=right+1;
printf("Input the element for adding in queue:");
scanf("%d",&item);
dequ[right]=item;
}
insert_left()
{
int item;
if(left==0 && right==max-1)||(left==right+1)
{
printf("Queue overflow\n");
return;
}
if(left==-1)
{
left=0;
right=0;
}
else
if(left==0)
left=max-1;
else
left=left-1;
printf("Input the element for adding in queue:");
scanf("%d",&item);
dequ[left]=item;
}
delete_left()
{
if(left==-1)
{
printf("Queue underflow\n");
return;
}
printf("Element deleted from queue is:%d\n",dequ[left]);
if(left==right)
{
left=-1;
right=-1;
}
else
if(left==max-1)
left=0;
else
left=left+1;
}
delete_right()
{
if(left==-1)
{
printf("Queue underflow\n");
return;
}
printf("Element deleted from queue is:%d\n",dequ[right]);
if(left==right)
{
left=-1;
right=-1;
}
else
if(right==0)
right=max-1;
else
right=right-1;
}
display_queue()
{
int front_pos=left,rear_pos=right;
if(left==-1)
{
printf("Queue is empty\n");
return;
}
printf("Queue elements\n");
if(front_pos<=rear_pos)
{
while(front_pos<=rear_pos)
{
printf("%d",dequ[front_pos]);
front_pos++;
}
}
else
{
while(front_pos<=max-1)
{
printf("%d",dequ[front_pos]);
front_pos++;
}
front_pos=0;
while(front_pos<=rear_pos)
{
printf("%d",dequ[front_pos]);
front_pos++;
}
}
printf("\n");
}



