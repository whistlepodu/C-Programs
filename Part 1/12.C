#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void bfill(int x1, int y1, int fc, int bc)
{
  if(getpixel(x1,y1)!=fc && getpixel(x1,y1)!=bc)
  {
    putpixel(x1,y1,fc);
    delay(5);
    bfill(x1,y1-1,fc,bc);
    bfill(x1+1,y1,fc,bc);
    bfill(x1,y1+1,fc,bc);
    bfill(x1-1,y1,fc,bc);
  }
}

int main()
{
  int gm,gd=DETECT,x1,y1,x2,y2,x3,y3,cx,cy,m,n;
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

  m=getmaxx()/2;
  n=getmaxy()/2;

  line(0,n,getmaxx(),n);
  line(getmaxx()/2,0,getmaxx()/2,getmaxy());
  outtextxy(m-10,n+5,"O");

  setcolor(BLUE);
  line(m+x1,n-y1,m+x2,n-y2);
  outtextxy(m+x1-10,n-y1-5,"A");
  line(m+x2,n-y2,m+x3,n-y3);
  outtextxy(m+x2+10,n-y2-5,"B");
  line(m+x1,n-y1,m+x3,n-y3);
  outtextxy(m+x3-10,n-y3-5,"C");

  bfill(m+cx,n-cy,RED,BLUE);

  getch();
  return 0;
}