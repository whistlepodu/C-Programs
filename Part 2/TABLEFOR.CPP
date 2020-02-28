#include<iostream.h>
#include<conio.h>
void main()
{
  int num,i,k;
  clrscr();
  cout<<"Enter Number: ";
  cin>>num;
  cout<<"Table of "<< num <<" is as \n\n";
  for(i=1;i<=10;i++)
   {
     k=num*i;
     cout<<"\t";
     cout << num << "*" << i << " = " << k;
     cout<<"\n";
   }
  getch();
}