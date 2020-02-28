//Make a choice between Reverse of number and Sum of digits

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,r,s=0;
  clrscr();
  printf("Enter number: ");
  scanf("%d",&a);
  printf("\nEnter Choice: ");
  scanf("%d",&b);
  switch(b)
    {
      case 1: while(a>0)
		{
		  r=a%10;
		  s=s+r;
		  a=a/10;
		}
	      printf("\nSum of digits: %d",s);break;
      case 2: while(a>0)
		{
		  s=s*10;
		  s=s+(a%10);
		  a=a/10;
		}
	      printf("\nReverse Number: %d",s);break;
    }
  getch();
}