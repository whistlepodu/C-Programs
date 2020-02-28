#include<stdio.h>
#include<conio.h>
void main()
{
  int a,s,t;
  clrscr();
  printf("Enter Number: ");
  scanf("%d",&a);
  s=0;
  t=a;
  while(a!=0)
    {
      s=s*10;
      s=s+(a%10);
      a=a/10;
    }
  if(s==t)
    printf("\nNumber is Palindrome");
  else
    printf("\nNumber is Not Palindrome");
  getch();
}