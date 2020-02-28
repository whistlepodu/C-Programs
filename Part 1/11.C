#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
  int a[3][3],i,j,k,b[3][3],c[3][3],d[3][3],c1[3][3];
  float x,y,mdx,mdy;
  int gd=DETECT, gm;

  clrscr();

  initgraph(&gd,&gm,"C://TC/BGI");

  printf("Enter Triangle Co-ordinates: ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==2)
	a[i][j]=1;
      else
       scanf("%d",&a[i][j]);
    }
  }

  mdx=getmaxx()/2;
  mdy=getmaxy()/2;

  line(mdx,0,mdx,getmaxy());
  line(0,mdy,getmaxx(),mdy);

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(j==2)
	line(mdx+a[i][j],mdy-a[i+1][j],mdx+a[0][0],mdy-a[1][0]);
      else
	line(mdx+a[i][j],mdy-a[i+1][j],mdx+a[i][j+1],mdy-a[i+1][j+1]);
    }
    break;
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j && i!=1)
	b[i][j]=1;
      else if(i==j && i==1)
	b[i][j]=-1;
      else
	b[i][j]=0;
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j && i==0)
	d[i][j]=-1;
      else if(i==j)
	d[i][j]=1;
      else
	d[i][j]=0;
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      c[i][j]=0;
      c1[i][j]=0;
      for(k=0;k<3;k++)
      {
	c[i][j]=c[i][j]+b[i][k]*a[k][j];
	c1[i][j]=c1[i][j]+d[i][k]*a[k][j];
      }
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(j==2)
      {
	line(mdx+c[i][j],mdy-c[i+1][j],mdx+c[0][0],mdy-c[1][0]);
	line(mdx+c1[i][j],mdy-c1[i+1][j],mdx+c1[0][0],mdy-c1[1][0]);
      }
      else
      {
	line(mdx+c[i][j],mdy-c[i+1][j],mdx+c[i][j+1],mdy-c[i+1][j+1]);
	line(mdx+c1[i][j],mdy-c1[i+1][j],mdx+c1[i][j+1],mdy-c1[i+1][j+1]);
      }
    }
    break;
  }

  getch();
  return 0;
}