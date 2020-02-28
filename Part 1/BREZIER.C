#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int x,y,z;

void main()
{
  float u;
  int gd=DETECT,gm,ymax,i,n,c[4][3];

  clrscr();

  printf("Enter Four Points: ");
  for(i=0;i<4;i++)
    scanf("%d %d",&c[i][0],&c[i][1]);

  c[4][0]=c[0][0];
  c[4][1]=c[0][1];

  initgraph(&gd,&gm,"C://TC/BGI");

  ymax=480;
  setcolor(WHITE);
  for(i=0;i<3;i++)
    line(c[i][0],ymax-c[i][1],c[i+1][0],ymax-c[i+1][1]);

  setcolor(WHITE);
  n=3;

  for(i=0;i<=40;i++)
  {
    u=(float)i/40.0;
    bezier(u,n,c);
    if(i==0)
      moveto(x,ymax-y);
    else
      lineto(x,ymax-y);
    getch();
  }
}

bezier(u,n,p)
float u; int n; int p[4][3];
{
  int j;
  float v,b;
  float blend(int,int,float);
  x=y=0;
  for(j=0;j<=n;j++)
  {
    b=blend(j,n,u);
    x=x+(p[j][0]*b);
    y=y+(p[j][1]*b);
  }
}

float blend(int j, int n, float u)
{
  int k;
  float v=1.0,blend;
  v=C(n,j);
  for(k=0;k<j;k++)
    v*=u;
  for(k=1;k<=(n-j);k++)
    v*=(1-u);
  blend=v;
  return blend;
}

C(int n, int j)
{
  int k,a,c;
  a=1;
  for(k=j+1;k<=n;k++)
    a*=k;
  for(k=1;k<=(n-j);k++)
    a=a/k;
  c=a;
  return c;
}