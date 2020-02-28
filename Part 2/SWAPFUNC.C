#include<stdio.h>
#include<conio.h>
int swap(int,int);
void main()
{
  int a,b;
  clrscr();
  printf("Enter first number: ");
  scanf("%d",&a);
  printf("\nEnter second number: ");
  scanf("%d",&b);
  swap(a,b);
  getch();
}
int swap(int x,int y)
{
  x=x+y;
  y=x-y;
  x=x-y;
  printf("\nSwapped Numbers: %d and %d",x,y);
}