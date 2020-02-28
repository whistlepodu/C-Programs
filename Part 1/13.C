#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void ffill(int x1, int y1, int nc, int oc)
{
  if(getpixel(x1,y1)==oc)
  {
    putpixel(x1,y1,nc);
    delay(5);
    ffill(x1+1,y1,nc,oc);
    ffill(x1,y1+1,nc,oc);
    ffill(x1-1,y1,nc,oc);
    ffill(x1,y1-1,nc,oc);
  }
}

int main()
{
  int gm,gd=DETECT,rad,x1,y1,x2,y2,x3,y3,cx,cy,oc;
  int m=getmaxx()/2;
  int n=getmaxy()/2;

  clrscr();

  initgraph(&gd,&gm,"C://TC/BGI");

  printf("Enter Line 1 Coordinates: ");
  scanf("%d %d",&x1,&y1);
  printf("Enter Line 2 Coordinates: ");
  scanf("%d %d",&x2,&y2);
  printf("Enter Line 3 Coordinates: ");
  scanf("%d %d",&x3,&y3);

  cx=(x1+x2+x3)/3;
  cy=(y1+y2+y3)/3;

  oc=getpixel(cx,cy);

  m=getmaxx()/2;
  n=getmaxy()/2;

  line(0,n,getmaxx(),n);
  line(getmaxx()/2,0,getmaxx()/2,getmaxy());
  outtextxy(m-10,n+5,"O");

  setcolor(RED);
  line(m+x1,n-y1,m+x2,n-y2);
  outtextxy(m+x1-10,n-y1-5,"A");
  setcolor(BLUE);
  line(m+x2,n-y2,m+x3,n-y3);
  outtextxy(m+x2+10,n-y2-5,"B");
  setcolor(YELLOW);
  line(m+x1,n-y1,m+x3,n-y3);
  outtextxy(m+x3-10,n-y3-5,"C");

  ffill(m+cx,n-cy,GREEN,oc);

  getch();
  return 0;
}