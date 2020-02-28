#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,s=0;
  clrscr();
  printf("Enter elements of array: ");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  for(i=0;i<10;i++)
    s=s+a[i];
  printf("\nSum = %d",s);
  getch();
}