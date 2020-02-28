//to find factorial of a number

#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  long int f=1;
  clrscr();
  printf("Enter the number: ");
  scanf("%d",&a);
  while(a>=0)
    {
      f=f*a;
      a--;
    }
  printf("Factorial of %d: %ld",a,f);
  getch();
}