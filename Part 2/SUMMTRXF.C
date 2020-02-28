#include<stdio.h>
#include<conio.h>
void input(int [2][3]);
void sum(int [2][3],int [2][3], int [2][3]);
void display(int [2][3]);
void main()
{
  int a[2][3],b[2][3],c[2][3];
  clrscr();
  printf("Enter elements of 1st matrix: \n");
  input(a);
  printf("\nEnter elements of 2nd matrix: \n");
  input(b);
  sum(a,b,c);
  display(c);
  getch();
}
void input(int x[2][3])
{
  int i,j;
  for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      scanf("%d",&x[i][j]);
    }
}
void sum(int x[2][3], int y[2][3], int z[2][3])
{
  int i,j;
  z[i][j]=0;
  for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      z[i][j]=x[i][j]+y[i][j];
    }
}
void display(int z[2][3])
{
  int i,j;
  printf("\nResultant matrix: \n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      printf("\t%d",z[i][j]);
      printf("\n");
    }
}