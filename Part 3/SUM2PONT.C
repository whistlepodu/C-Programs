//to add two numbers using pointer(Contiguous)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *p,s;
  clrscr();
  p=(int*)malloc(4);
  printf("Address of p: %d",p);
  printf("\nAddress of (p+1): %d",(p+1));
  printf("\nEnter two numbers in respective locations: ");
  scanf("%d%d",p,(p+1));
  s=*p+*(p+1);
  printf("\nSum: %d",s);
  free(p);
  free(p+1);
  getch();
}