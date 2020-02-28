#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void circleDraw(int, int, int);
void drawCircle(int, int, int, int);

void circleDraw(int x1, int y1, int r)
{
  int x=0, y=r;
  int d=3-2*r;
  while(y>=x)
  {
    drawCircle(x1, y1, x, y);
    x++;

    if(d>0)
    {
      y--;
      d=d+4*(x-y)+10;
    }
    else
      d=d+4*x+6;

    drawCircle(x1, y1, x, y);
    delay(50);
  }
}

void drawCircle(int x1, int y1, int x, int y)
{
  int m=getmaxx()/2;
  int n=getmaxy()/2;
  putpixel(m+x1+x,n-y1+y, 7);
  putpixel(m+x1-x,n-y1+y, 7);
  putpixel(m+x1+x,n-y1-y, 7);
  putpixel(m+x1-x,n-y1-y, 7);
  putpixel(m+x1+y,n-y1+x, 7);
  putpixel(m+x1-y,n-y1+x, 7);
  putpixel(m+x1+y,n-y1-x, 7);
  putpixel(m+x1-y,n-y1-x, 7);
}

int main()
{
  int gd=DETECT, gm;
  int x1, y1, r;
  clrscr();

  initgraph(&gd, &gm, "C://TC/BGI");

  printf("Enter Origin Point: ");
  scanf("%d %d",&x1,&y1);

  printf("Enter Radius: ");
  scanf("%d",&r);

  line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
  line(getmaxx()/2,0,getmaxx()/2,getmaxy());
  outtextxy(getmaxx()/2-10,getmaxy()/2+5,"O");
  putpixel(getmaxx()/2+x1,getmaxy()/2-y1,7);
  outtextxy(getmaxx()/2+x1-10,getmaxy()/2-y1+5,"O'");
  circleDraw(x1, y1, r);

  getch();
  closegraph();
  return 0;
}