#include<iostream.h>
#include<conio.h>
void main()
{
  float fh,cl;
  clrscr();
  cout<<"Enter Temperature in Fahrenheit: ";
  cin>>fh;
  cl=(fh-32)/1.8;
  cout<<"Temperature in Celcius: "<<cl;
  getch();
}