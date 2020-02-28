#include<stdio.h>
#include<conio.h>
#define N 100

void input(int [][N], int);
void arrsmry(int [][N], int);

void main()
{
  int arr[N][N], n;
  clrscr();

  printf("Enter size of Matrix: ");
  scanf("%d",&n);

  input(arr,n);
  arrsmry(arr,n);
}

void input(int arr[][N], int n)
{
  int i=0,j=0;

  printf("Enter Elements of Array: \n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&arr[i][j]);
}

void arrsmry(int arr[][N], int n)
{
  int i=0,j=0;

  printf("Row: \t");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i][j]>0)
	printf("%d ",i);
    }
  }

  printf("\n");

  printf("Column: ");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i][j]>0)
	printf("%d ",j);
    }
  }

  printf("\n");

  printf("Value: \t");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i][j]>0)
	printf("%d ",arr[i][j]);
    }
  }

  getch();
}