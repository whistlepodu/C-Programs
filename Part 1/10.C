
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd=DETECT,gm,k,i,j,x1,y1,flag=0;
   float sx,sy,a[3][4],b[3][3],n[3][4],a1,b1,x,y;
   clrscr();

   initgraph(&gd,&gm,"C://TC/BGI");

   printf("Enter Triangle Co-ordinate: ");
   for(i=0;i<3;i++)
   {
     for(j=0;j<4;j++)
     {
       if(i==2)
	 a[i][j]=1;
       else
	 scanf("%f",&a[i][j]);
     }
   }

   line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
   line(getmaxx()/2,0,getmaxx()/2,getmaxy());
   //outtextxy(getmaxx()/2+10,getmaxy()/2+5,"O");
   x1=getmaxx()/2;
   y1=getmaxy()/2;

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      if(j==3)
      {
	line(x1+a[i][j],y1-a[i+1][j],x1+a[0][0],y1-a[1][0]);
	//outtextxy(x1+a[i][j]+5,y1-a[i+1][j]+5,"A");
      }
      else
      {
	line(x1+a[i][j],y1-a[i+1][j],x1+a[i][j+1],y1-a[i+1][j+1]);
	/*if(flag==1)
	{
	  outtextxy(x1+a[i][j]+5,y1-a[i+1][j]+5,"B");
	}
	else
	{
	  outtextxy(x1+a[i][j]+5,y1-a[i+1][j]+5,"C");
	  flag=1;
	} */
      }
    }
    break;
  }

   printf("Enter Scaling Factor (X and Y): ");
   scanf("%f %f",&sx,&sy);

   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
       if(i!=j)
	 b[i][j]=0;
       else if(i==j && i==2)
	 b[i][j]=1;
       b[0][0]=sx;
       b[1][1]=sy;
     }
   }

   for(i=0;i<3;i++)
   {
     for(j=0;j<4;j++)
     {
       n[i][j]=0;
       for(k=0;k<3;k++)
	 n[i][j]+=b[i][k] * a[k][j];
     }
   }

   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
       printf("%f ",n[i][j]);
     printf("\n");
   }
  flag=0;

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      if(j==3)
      {
	line(x1+n[i][j],y1-n[i+1][j],x1+n[0][0],y1-n[1][0]);
	//outtextxy(x1+n[i][j]+5,y1-n[i+1][j]+5,"A'");
      }
      else
      {
	line(x1+n[i][j],y1-n[i+1][j],x1+n[i][j+1],y1-n[i+1][j+1]);
	/*if(flag==1)
	{
	  outtextxy(x1+n[i][j]+5,y1-n[i+1][j]+5,"B'");
	}
	else
	{
	  outtextxy(x1+n[i][j]+5,y1-n[i+1][j]+5,"C'");
	  flag=1;
	} */
      }
    }
    break;
  }

   getch();
   return 0;
}