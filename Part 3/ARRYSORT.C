#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,j,b;
  clrscr();
  printf("Enter elements of array: ");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  for(i=0;i<10;i++)
    {
      for(j=i+1;j<10;j++)
	{
	  if(a[i]>a[j])
	    {
	      b=a[i];
	      a[i]=a[j];
	      a[j]=b;
	    }
	}
    }
  printf("\nAscending Order: ");
  for(i=0;i<10;i++)
    printf("\n%d ",a[i]);
  getch();
}