#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void b_fill(int,int,int,int);
void main()
{
	int xc,yc,x1,y1,x2,y2,x3,y3;
	int i,gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TC/BGI");
	printf("Enter coordinates of first point");
	scanf("%d %d",&x1,&y1);
	printf("Enter cooridinates of second point");
	scanf("%d %d",&x2,&y2);
	printf("Enter coordinates of third point");
	scanf("%d %d",&x3,&y3);
	setcolor(BLUE);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	xc=(x1+x2+x3)/3;
	yc=(y1+y2+y3)/3;
	b_fill(xc,yc,GREEN,BLUE);
	getch();
}


void b_fill(int seed_x,int seed_y,int f_c,int b_c)
{
   if(getpixel(seed_x,seed_y)!=b_c && getpixel(seed_x,seed_y)!=f_c)
   {
	  putpixel(seed_x,seed_y-1,f_c);
	  b_fill(seed_x,seed_y-1,f_c,b_c);
	  b_fill(seed_x+1,seed_y,f_c,b_c);
	  b_fill(seed_x,seed_y+1,f_c,b_c);
	  b_fill(seed_x-1,seed_y,f_c,b_c);
   }
}


