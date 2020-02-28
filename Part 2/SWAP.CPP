#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,temp=0;
  clrscr();
  cout<<"Enter 1st Number: ";
  cin>>a;
  cout<<"Enter 2nd Number: ";
  cin>>b;
  cout<<"Numbers Before Swapping: " <<a<<" and "<<b<<"\n";
  temp=a;
  a=b;
  b=temp;
  cout<<"Numbers After Swapping: " <<a<<" and "<<b;
  getch();
}
