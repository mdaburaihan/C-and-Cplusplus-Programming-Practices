   #include<stdio.h>
   #include<conio.h>
   void main()
   {
   int a[10],i,j,n,x;
   clrscr();
   printf("Enter numbers of elements in array\n");
   scanf("%d",&n);
   printf("Enter numbers now\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<=n-1;i++)
   {
   for(j=0;j<=n-i;j++)
   {
   if(a[j]>a[j+1])
   {
   x=a[j];
   a[j]=a[j+1];
   a[j+1]=x;
   }
   }
   printf("Array after sorting\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   getch();
   }
   }