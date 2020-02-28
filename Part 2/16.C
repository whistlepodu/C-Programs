#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
  int gd=DETECT, gm;
  int x1,y1,x2,y2,dep=10;
  float mdx,mdy;
  float x11,y11,x22,y22;
  int ang;
  clrscr();

  initgraph(&gd,&gm,"C://TC/BGI");

  printf("Enter Left Top: ");
  scanf("%d %d",&x1,&y1);

  printf("Enter Bottom Right: ");
  scanf("%d %d",&x2,&y2);

  mdx=getmaxx()/2;
  mdy=getmaxy()/2;

  line(getmaxx()/2,0,getmaxx()/2,getmaxy());
  line(0,getmaxy()/2,getmaxx(),getmaxy()/2);

  bar3d(mdx+x1,mdy-y1,mdx+x2,mdy-y2,dep,4);

  printf("Enter Angle: ");
  scanf("%d",&ang);

  x11=(float)x1*cos(ang*3.14/180)-y1*sin(ang*3.14/180);
  y11=(float)x1*sin(ang*3.14/180)+y1*cos(ang*3.14/180);
  x22=(float)x2*cos(ang*3.14/180)-y2*sin(ang*3.14/180);
  x22=(float)x2*sin(ang*3.14/180)+y2*cos(ang*3.14/180);

  bar3d(mdx+x11,mdy-y11,mdx+x22,mdy-y22,dep,4);
  bar3d(mdx+x1,mdy-x11,mdx+x2,mdy-x22,dep,4);
  bar3d(mdx+x11,mdy-y1,mdx+x22,mdy-y2,dep,4);

  getch();
  return 0;
}