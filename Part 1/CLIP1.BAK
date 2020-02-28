#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
  int gd=DETECT, gm;
  int x1,y1,x2,y2,x11,y11,x22,y22;
  int i,j,xm,ym,dx,dy,d[4];
  int xmin,ymin,xmax,ymax,q[4];
  float u[4],u1=0.0,u2=1.0;
  clrscr();

  initgraph(&gd,&gm,"C://TC/BGI");

  printf("\nEnter Co-Ordinates of Clip Window: ");
  scanf("%d %d %d %d",&xmin,&ymin,&xmax,&ymax);

  printf("\nEnter Starting Point of Line: ");
  scanf("%d %d",&x1,&y1);
  printf("\nEnter End Point of Line: ");
  scanf("%d %d",&x2,&y2);

  xm=getmaxx()/2;
  ym=getmaxy()/2;

  line(0,ym,getmaxx(),ym);
  line(xm,0,xm,getmaxy());

  rectangle(xm+xmin,ym-ymin,xm+xmax,ym-ymax);

  setcolor(RED);
  line(xm+x1,ym-y1,xm+x2,ym-y2);

  getch();
  closegraph();
  initgraph(&gd,&gm,"C://TC/BGI");

  dx=abs(x2-x1);
  dy=abs(y2-y1);

  q[0]=x1-xmin;
  q[1]=xmax-x1;
  q[2]=y1-ymin;
  q[3]=ymax-y1;

  d[0]=-dx;
  d[1]=dx;
  d[2]=-dy;
  d[3]=dy;

  for(i=0;i<4;i++)
    u[i]=(float)q[i]/d[i];

  for(i=0;i<4;i++)
  {
    if(d[i]==0 && q[i]<0)
    {
      printf("\nLine is Completely Outside Clip Window");
      getch();
      exit(0);
    }
  }

  for(i=0;i<4;i++)
  {
    if(d[i]<0)
    {
      u[i]=(float)q[i]/d[i];
      if(u1<u[i])
	u1=u[i];
    }
    if(d[i]>0)
    {
      u[i]=(float)q[i]/d[i];
      if(u2>u[i])
	u2=u[i];
    }
  }

  if(u1==0.0 && u2==1.0)
  {
    printf("\nLine is Completely Inside Clip Window");
    getch();
    exit(0);
  }

  if(u1<u2)
  {
    x11=(int)(x1+(u1*(float)dx));
    x22=(int)(x1+(u2*(float)dx));
    y11=(int)(y1+(u1*(float)dy));
    y22=(int)(y1+(u2*(float)dy));
    clrscr();
    rectangle(xm+xmin,ym-ymin,xm+xmax,ym-ymax);
    setcolor(BLUE);
    line(xm+x11,ym-y11,xm+x22,ym-y22);
  }
  getch();
  closegraph();
}