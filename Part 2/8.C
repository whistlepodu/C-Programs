#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
  float a[3][3],b[3][3],c[3][3];
  int i,j,k;
  float sx,sy;
  int gd=DETECT, gm;

  clrscr();

  initgraph(&gd, &gm, "C://TC/BGI");

  printf("Enter Scaling Factor (x and y): ");
  scanf("%f %f",&sx,&sy);

  printf("\nEnter Main Object: ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i!=2)
	scanf("%f",&b[i][j]);
      else
	b[i][j]=1;
    }
  }

  for(i=0;i<1;i++)
  {
    for(j=0;j<3;j++)
    {
      if(j==2)
	{
	  line(b[0][0],b[1][0],b[0][2],b[1][2]);
	  break;
	}
      if(i<=j)
	line(b[i][j],b[i+1][j],b[i][j+1],b[i+1][j+1]);
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i!=j)
	a[i][j]=0;
      else if(i==j && i==2)
	a[i][j]=1;
      a[0][0]=sx;
      a[1][1]=sy;
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      c[i][j]=0;
      for(k=0;k<3;k++)
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
  }

  for(i=0;i<1;i++)
  {
    for(j=0;j<3;j++)
    {
      if(j==2)
	{
	  line(c[0][0],c[1][0],c[0][2],c[1][2]);
	  break;
	}
      if(i<=j)
	line(c[i][j],c[i+1][j],c[i][j+1],c[i+1][j+1]);
    }
  }

  getch();
  return 0;
}