//to add two numbers using pointer(non-contiguous)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *p,*q,s;
  clrscr();
  p=(int*)malloc(2);
  q=(int*)malloc(2);
  printf("Address of p: %d",p);
  printf("\nAddress of q: %d",q);
  printf("\nEnter two numbers in respective locations: ");
  scanf("%d%d",p,q);
  s=*p+*q;
  printf("\nSum: %d",s);
  free(p);
  free(q);
  getch();
}