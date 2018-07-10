#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,beg,end,mid,item;
printf("Enter number of elements of Array\n");
scanf("%d",&n);
printf("Enter values in Array in ascending order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter item to search\n");
scanf("%d",&item);
beg=0;
end=n-1;
mid=int((beg+end)/2);
while((beg<=end) && (a[mid]!=item))
{
if(item<a[mid])
end=mid-1;
else
beg=mid+1;
mid=int((beg+end)/2);
}
if(a[mid]==item)
printf("Search is succesful,\tPosition=%d",mid+1);
else
printf("Search is unsuccessful");
getch();
}