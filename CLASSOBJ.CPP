#include<iostream.h>
class student
{
private:
char sname[30];
int roll;
public:
void getdata()
{
cout<<"Enter name of the student:";
cin>>sname;
cout<<"Enter roll:";
cin>>roll;
}
void putdata()
{
cout<<"Student name:"<<sname<<endl;
cout<<"Roll:"<<roll<<endl;
}
};
void main()
{
student s;
s.getdata();
s.putdata();
}