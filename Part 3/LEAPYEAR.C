//to cjeck whether entered year is leap or not

#include<stdio.h>
#include<conio.h>
void main()
{
  int y;
  clrscr();
  printf("Enter year: ");
  scanf("%d",&y);
  if(y%100==0)
    {
      if(y%400==0)
	printf("\nLeap Year");
    }
  else if(y%4==0)
    printf("\nLeap Year");
  else
    printf("\nNot a Leap Year");
  getch();
}