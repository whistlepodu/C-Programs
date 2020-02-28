#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
  int gd=DETECT, gm;
  int angle=0;
  double x, y, z;

  clrscr();

  initgraph(&gd, &gm, "C://TC/BGI");
  line(0, getmaxy()/4, getmaxx(), getmaxy()/4);
  line(0, 3*getmaxy()/4, getmaxx(), 3*getmaxy()/4);

  for(x=0;x<getmaxx();x+=3)
  {
    y=50*sin(angle*3.141/180);
    z=50*cos(angle*3.141/180);
    y=getmaxy()/4-y;
    z=3*getmaxy()/4-z;
    putpixel(x, y, 15);
    putpixel(x, z, 15);
    delay(50);
    angle += 5;
  }

  getch();
  closegraph();
  return 0;
}
