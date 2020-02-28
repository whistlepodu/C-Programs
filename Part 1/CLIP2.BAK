#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void main()
{
  float xmin,ymin,xmax,ymax,xvmin,xvmax,yvmin,yvmax;
  float a[3][3],b[3][3],c[3][3],d[3][3],e[3][3];
  float f[3][1],g[3][1],ll[3][1],ur[3][1];
  int i,j,k;
  int gd=DETECT,gm;
  float xm,ym,sx,sy;

  clrscr();

  initgraph(&gd,&gm,"C://TC/BGI");

  printf("\nEnter Lower Left of WindowPort: ");
  scanf("%f %f",&xmin,&ymin);
  printf("\nEnter Upper Right of WindowPort: ");
  scanf("%f %f",&xmax,&ymax);

  xm=getmaxx()/2;
  ym=getmaxy()/2;

  line(0,ym,getmaxx(),ym);
  line(xm,0,xm,getmaxy());
  rectangle(xm+xmin,ym-ymin,xm+xmax,ym-ymax);

  getch();

  printf("\nEnter Lower Left of ViewPort: ");
  scanf("%f %f",&xvmin,&yvmin);
  printf("\nEnter Upper Right of ViewPort: ");
  scanf("%f %f",&xvmax,&yvmax);

  sx=(xvmax-xvmin)/(xmax-xmin);
  sy=(yvmax-yvmin)/(ymax-ymin);

  a[0][0]=a[1][1]=a[2][2]=1;
  a[0][2]=-xmin;
  a[1][2]=-ymin;
  a[0][1]=a[1][0]=a[2][0]=a[2][1]=0;

  b[0][0]=sx;
  b[1][1]=sy;
  b[2][2]=1;
  b[0][1]=b[0][2]=b[1][0]=b[1][2]=b[2][0]=b[2][1]=0;

  c[0][0]=c[1][1]=c[2][2]=1;
  c[0][2]=xvmin;
  c[1][2]=yvmin;
  c[0][1]=c[1][0]=c[2][0]=c[2][1]=0;

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      d[i][j]=0;
      for(k=0;k<3;k++)
	d[i][j]+=b[i][k]*a[k][j];
    }
  }

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      e[i][j]=0;
      for(k=0;k<3;k++)
	e[i][j]+=c[i][k]*d[k][j];
    }
  }

  ll[0][0]=xmin;
  ll[1][0]=ymin;
  ll[2][0]=1;

  for(i=0;i<3;i++)
  {
    for(j=0;j<1;j++)
    {
      f[i][j]=0;
      for(k=0;k<3;k++)
	f[i][j]+=e[i][k]*ll[k][j];
    }
  }

  ur[0][0]=xmax;
  ur[1][0]=ymax;
  ur[2][0]=1;

  for(i=0;i<3;i++)
  {
    for(j=0;j<1;j++)
    {
      g[i][j]=0;
      for(k=0;k<3;k++)
	g[i][j]+=e[i][k]*ur[k][j];
    }
  }

  line(0,ym,getmaxx(),ym);
  line(xm,0,xm,getmaxy());
  rectangle(xm+f[0][0],ym-f[1][0],xm+g[0][0],ym-g[1][0]);

  getch();
  closegraph();
}