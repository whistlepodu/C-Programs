#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *p,i;
  clrscr();
  p=(int*)malloc(5*sizeof(int));
  for(i=0;i<=4;i++)
    scanf("%d",(p+i));
  for(i=0;i<=4;i++)
    printf("\n%d",*(p+i));
  free(p);
  getch();
}