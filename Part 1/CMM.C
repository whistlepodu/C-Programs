#include<stdio.h>
#include<conio.h>
void cmm(int [10][10],int [10][10],int [10],int);
int ops(int [10][10],int,int);
void display(int[10][10],int);
void main()
{
  int m[10][10]={0},s[10][10]={0};
  int p[10]={0},i,n;
  clrscr();
  printf("Enter total no of matrices: ");
  scanf("%d",&n);
  printf("Enter dimension of matrix: ");
  for(i=0;i<=n;i++)
    scanf("%d",&p[i]);
  cmm(m,s,p,n);
  printf("Cost of optimal soln matrix: ");
  display(m,n);
  printf("Value of split product: ");
  display(s,n);
  printf("Optimal paranthesis: ");
  ops(s,1,n);
  getch();
}

void cmm(int m[10][10],int s[10][10],int p[10],int n)
{
  int i,j,k,q,l;
  for(i=1;i<=n;i++)
    m[i][i]=0;
  for(l=2;l<=n;l++)
  {
    for(i=1;i<=(n-l+1);i++)
    {
      j=i+l-1;
      m[i][j]=999;
      for(k=i;k<=j-1;k++)
      {
	q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
	if(q<m[i][j])
	{
	  m[i][j]=q;
	  s[i][j]=k;
	}
      }
    }
   }
  printf("\n no. of scalar multiplication = %d\n",m[1][n]);
}

int ops(int s[10][10],int i,int j)
{
  if(i==j)
  {
    printf("A%d",i);
    return(0);
  }
  else
  {
    printf("(");
    ops(s,i,s[i][j]);
    ops(s,(s[i][j])+1,j);
    printf(")");
  }
  return(0);
}

void display(int m[10][10],int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
     printf("%d\t",m[i][j]);
    printf("\n");
  }
}