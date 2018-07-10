#include<iostream.h>
#include<conio.h>
int count=0;
class adita
{
public:
adita()
{
count++;
cout<<"No of object created:"<<count<<endl;
}
~adita()
{
cout<<"No of object deleted:"<<count<<endl;
count--;
}
}
void main()
{
cout<<"Enter main\n";
adita a1,a2,a3,a4;
cout<<"Enter block1\n";
{
adita a5;
}
cout<<"Enter block2\n";
{
adita a6;
}
cout<<"Re-enter main";
}

