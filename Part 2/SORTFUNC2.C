#include<stdio.h>
#include<conio.h>
void input(int []);
void sort(int []);
void display(int []);
void main()
{
  int a[10];
  clrscr();
  printf("Enter elements of array: ");
  input(a);
  sort(a);
  display(a);
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
}
void display(int x[])
{
  int i;
  printf("\nAscending Order: ");
  for(i=0;i<10;i++)
  printf("\n%d",x[i]);
}
