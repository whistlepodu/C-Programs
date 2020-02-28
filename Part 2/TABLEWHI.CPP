#include<iostream.h>
#include<conio.h>
void main()
{
  int num,i=1,k;
  clrscr();
  cout<<"Enter Number: ";
  cin>>num;
  cout<<"Table of "<< num <<" is as \n\n";
  while(i<=10)
   {
     k=num*i;
     cout<<"\t";
     cout << num << "*" << i << " = " << k;
     cout<<"\n";
     i++;
   }
  getch();
}