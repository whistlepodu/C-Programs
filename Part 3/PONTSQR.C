//square of largest number using pointer

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *p,*q;
  clrscr();
  p=(int*)malloc(2);
  q=(int*)malloc(2);
  printf("Enter values at respective location: ");
  scanf("%d%d",p,q);
  if(*p>*q)
    printf("\nSquare is %d",(*p**p));
  else
    printf("\nSquare is %d",(*q**q));
  free(p);
  free(q);
  getch();
}