//Prog for Armstrong Number

#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,s=0,t;
  clrscr();
  printf("Enter Number: ");
  scanf("%d",&n);
  t=n;
  while(n!=0)
    {
      r=n%10;
      n=n/10;
      s=s+(r*r*r);
    }
  if(s==t)
    printf("\nArmstrong number");
  else
    printf("\nNot an Armstrong number");
  getch();
}