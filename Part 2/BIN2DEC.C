#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void dectobin(long int);
void bintodec(long int);

void main()
{
  long int n;
  char m[30];
  int ch;
  clrscr();
  do
    {
      clrscr();
      printf("\nChoices Are: ");
      printf("\n1: Decimal To Binary\n2: Binary to Decimal");
      printf("\n3: Exit");
      printf("\nEnter Choice: ");
      scanf("%d",&ch);
      switch(ch)
       {
	 case 1: printf("\nEnter Number: ");
		 scanf("%ld",&n);
		 dectobin(n);
		 break;

	 case 2: printf("\nEnter Number: ");
		 scanf("%ld",&n);
		 bintodec(n);
		 break;

	 case 3: exit(0);
       }
    }while(1);
}

void dectobin(long int n)
{
  int a[20],i=0,j;
  long int t;
  t=n;
  while(n>0)
    {
      a[i]=n%2;
      i++;
      n=n/2;
    }
  printf("\nBinary of %ld is ",t);
  for(j=i-1;j>=0;j--)
    {
      printf("%d",a[j]);
    }
  getch();
}

void bintodec(long int n)
{
  int s=0,i=0;
  long int t;
  t=n;
  while(n>0)
    {
      s=s+(n%10*(pow(2,i)));
      i++;
      n=n/10;
    }
  printf("\nDecimal of %ld is %d",t,s);
  getch();
}