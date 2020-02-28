#include<stdio.h>
#include<conio.h>
int swap(int *, int *);
void main()
{
  int a,b;
  clrscr();
  printf("Enter a and b: ");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("\nSwapped Numbers: %d and %d",a,b);
  getch();
}
int swap(int *x, int *y)
{
  *x=*x+*y;
  *y=*x-*y;
  *x=*x-*y;
}