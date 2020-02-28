//Largest and Smallest among Three

#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
    {
      if(b>c)
	printf("\n%d is largest and %d is smallest",a,c);
      else
	printf("\n%d is largest and %d is smallest",a,b);
    }
  else if(b>c && b>a)
    {
      if(c>a)
	printf("\n%d is largest and %d is smallest",b,a);
      else
	printf("\n%d is largest and %d is smallest",b,c);
    }
  else
    {
      if(b>a)
	printf("\n%d is largest and %d is smallest",c,a);
      else
	printf("\n%d is largest and %d is smallest",c,b);
    }
  getch();
}