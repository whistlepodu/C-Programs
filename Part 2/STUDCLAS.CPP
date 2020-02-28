#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class person
{
  int age;
  char name[30];
  public:
    void getdata(void);
    void display(void);
};
void person::getdata(void)
{
  cout<<"Enter Name: ";
  gets(name);
  cout<<"Entre Age: ";
  cin>>age;
}
void person::display(void)
{
  cout<<"\nName: "<<name;
  cout<<"\nAge: "<<age;
}
int main()
{
  person p;
  clrscr();
  p.getdata();
  p.display();
  getch();
  return 0;
}