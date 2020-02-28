#include<iostream.h>
#include<conio.h>
void swap(int &x,int &y)
{
  x=x+y;
  y=x-y;
  x=x-y;
}
void main()
{
  int x,y;
  clrscr();
  cout<<"Enter Two Numbers: ";
  cin>>x>>y;
  cout<<"\nNumbers Before Swapping: "<<x<<" and "<<y;
  swap(x,y);
  cout<<"\nNumbers After Swapping: "<<x<<" and "<<y;
  getch();
}