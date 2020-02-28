#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
  int gdriver = DETECT, gmode, i, j;
  clrscr();

  initgraph(&gdriver, &gmode, "c://tc/bgi");

  for(i=0;i<getmaxx();i++)
  {
    line(20+i, 100, 300+i, 100);
    line(20+i, 100, 05+i, 200);
    line(05+i, 200, 05+i, 250);
    line(300+i, 100, 400+i, 200);
    line(40+i, 120, 280+i, 120);
    line(40+i, 180, 280+i, 180);
    line(40+i, 120, 40+i, 180);
    line(280+i, 120, 280+i, 180);
    line(400+i, 200, 400+i, 250);
    line(05+i, 250, 400+i, 250);
    circle(100+i, 250, 30);
    circle(300+i, 250, 30);
    delay(10);
    cleardevice();
  }

  getch();
  closegraph();
  return 0;
}