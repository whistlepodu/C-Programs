/*ADD USING POINTERS*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int a=5;
  int b=6;
  int c;
  int *p1;
  int *p2;
  clrscr();
  p1=&a;
  p2=&b;
  c=*p1+*p2;
  printf("Sum = %d",c);
  getch();
}