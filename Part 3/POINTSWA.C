/*Swapping of two numbers using pointer*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int a=6,b=5,temp,*p,*q;
  clrscr();
  p=&a;
  q=&b;
  temp=*p;
  *p=*q;
  *q=temp;
  printf("\n a= %d, b= %d",a,b);
  getch();
}