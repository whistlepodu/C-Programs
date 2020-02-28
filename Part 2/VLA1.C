#include<stdio.h>
#include<conio.h>
#include<stdarg.h>
int sum(int n,...)
{
  va_list vl;
  float s=0;
  int i;
  va_start(vl,n);
  for(i=0;i<n;i++)
    {
      s=s+va_arg(vl,int);
    }
  va_end(vl);
  return s;
}
float avg(int n,...)
{
  va_list vl;
  float s=0, a;
  int i;
  va_start(vl,n);
  for(i=0;i<n;i++)
    {
      s=s+va_arg(vl,int);
      a=(float)s/n;
    }
  va_end(vl);
  return(a);
}
int main()
{
  float s;
  float a;
  clrscr();
  s=sum(5,2,4,6,8,10);
  a=avg(5,2,4,6,8,10);
  printf("\nSum: %f\nAverage: %f",s,a);
  s=sum(3,12,14,3);
  a=avg(3,12,14,3);
  printf("\nSum: %f\nAverage: %f",s,a);
  s=sum(8,2,4,6,8,10,12,14,16);
  a=avg(8,2,4,6,8,10,12,14,16);
  printf("\nSum: %f\nAverage: %f",s,a);
  getch();
  return 0;
}