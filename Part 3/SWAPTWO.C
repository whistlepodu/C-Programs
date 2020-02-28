/*Normal Swapping of two numbers*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,temp;
  clrscr();
  a=5;
  b=6;
  temp=a;
  a=b;
  b=temp;
  printf("\n a= %d, b= %d",a,b);
  getch();
}