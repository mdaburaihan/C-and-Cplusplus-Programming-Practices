 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 struct node
 {
 int data;
 struct node*next;
 };
 void main()
 {
 struct node *h,*first;
 int t;
 h=(struct node*)malloc(sizeof(struct node));
 printf("Enter first data\n");
 scanf("%d",&h->data);
 first=h;
 printf("Enter 0 to terminate and others to add data\n");
 scanf("%d",&t);
 while(t!=0)
 {
 h->next=(struct node*)malloc(sizeof(struct node));
 h=h->next;
 printf("Enter data\n");
 scanf("%d",&h->data);
 printf("Enter 0 to terminate and others to add data\n");
 scanf("%d",&t);
 }
 h->next='\0';
 h=first;
 while(h!='\0')
 {
 printf("%d-->",h->data);
 h=(h->next);
 }
 getch();
 }

