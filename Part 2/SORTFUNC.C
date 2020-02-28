#include<stdio.h>
#include<conio.h>
void sort(int []);
void input(int []);
void main()
{
  int a[10];
  clrscr();
  printf("\nEnter elements of array: ");
  input(a);
  sort(a);
  getch();
}
void input(int x[])
{
  int i;
  for(i=0;i<10;i++)
  scanf("%d",&x[i]);
}
void sort(int x[])
{
  int j,b,i;
  for(i=0;i<10;i++)
    {
      for(j=i+1;j<10;j++)
	{
	  if(x[i]>x[j])
	  {
	    b=x[i];
	    x[i]=x[j];
	    x[j]=b;
	  }
	}
    }
  printf("\nAscending Order: ");
  for(i=0;i<10;i++)
    printf("\n%d",x[i]);
 }