#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
  int gd=DETECT, gm;
  int x1, y1, x2, y2, tx, ty, dep=100;
  clrscr();
  initgraph(&gd,&gm,"C://TC/BGI");
  printf("Enter left Top: ");
  scanf("%d %d", &x1, &y1);
  printf("\nEnter bottom right: ");
  scanf("%d %d", &x2, &y2);
  printf("\nEnter Translation Value: ");
  scanf("%d %d",&tx,&ty);
  bar3d(x1,y1,x2,y2,dep,1);
  bar3d(x1+tx,y1+ty,x2+tx,y2+ty,dep,1);
  //closegraph();
  getch();
  return 0;
}