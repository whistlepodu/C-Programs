//Swapping of number using pointer

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *p,*q, temp;
  clrscr();
  p=(int*)malloc(2);
  q=(int*)malloc(2);
  printf("Address of p: %d",p);
  printf("\nAddress of q: %d",q);
  printf("\n\nEnter numbers at respective locations: ");
  scanf("%d%d",p,q);
  printf("\n\nBefore Swapping: ");
  printf("\n\n\tFirst Number: %d at Address: %d",*p,p);
  printf("\n\tSecond Number: %d at Address: %d",*q,q);
  temp=*p;
  *p=*q;
  *q=temp;
  printf("\n\nAfter Swapping: ");
  printf("\n\n\tFirst Number: %d at Address: %d",*p,p);
  printf("\n\tSecond Number: %d at Address: %d",*q,q);
  free(p);
  free(q);
  getch();
}