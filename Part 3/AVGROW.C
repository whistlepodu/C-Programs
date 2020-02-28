#include<stdio.h>
#include<conio.h>
#define N 100
#define M 100
void main()
{
  int arr[M][N],n,i,j,m;
  float a,s=0,l;
  clrscr();
  printf("Enter number of rows: ");
  scanf("%d",&m);
  printf("\nEnter number of columns: ");
  scanf("%d",&n);
  printf("\nEnter elements of matrix: \n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      scanf("%d",&arr[i][j]);
    }
  printf("\nMatrix: \n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("\t%d",arr[i][j]);
	}
      printf("\n");
    }
  for(i=0;i<m;i++)
    {
      l=arr[i][0];
	{
	  for(j=0;j<n;j++)
	    {
	      if(l<arr[i][j])
	      l=arr[i][j];
	    }
	}
      printf("\nLargest Element of Row %d: %f",i+1,l);
      printf("\n");
      s=s+l;
    }
  a=s/m;
  printf("\nAverage: %f",a);
  getch();
}