#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
  int gd = DETECT, gm, i;
  float x, y, p, x1, y1, x2, y2, dx, dy;

  clrscr();

  initgraph(&gd, &gm, "C://TC/BGI");

  printf("Enter Originating Point: ");
  scanf("%f %f",&x1, &y1);

  printf("Enter Ending Point: ");
  scanf("%f %f",&x2, &y2);

  dx = abs(x2 - x1);
  dy = abs(y2 - y1);
  p = 2*dy - dx;
  x = x1;
  y = y1;

  line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
  line(getmaxx()/2,0,getmaxx()/2,getmaxy());
  outtextxy(getmaxx()/2-10,getmaxy()/2+5,"O");

  while(x<=x2)
  {
    if(p<0)
      p = p + 2*dy;
    else
    {
      y = y+1;
      p = p + 2*dy - 2*dx;
    }
    x = x+1;
    putpixel(getmaxx()/2+x,getmaxy()/2-y,7);
  }

  getch();
  closegraph();
  return 0;
}