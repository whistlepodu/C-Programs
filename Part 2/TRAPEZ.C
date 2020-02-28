#include<stdio.h>
#include<conio.h>
#define N 100

float trap(float x)
{
  return 1/(1+(x*x));
}

int main()
{
  int n,h,i,a[N],b[N];
  float x,x1,ul,ll,sum,sum1,sum3;
  clrscr();

  printf("Enter no. of Intervals: ");
  scanf("%d",&n);

  printf("Enter Upper Limit: ");
  scanf("%f",&ul);

  printf("Enter Lower Limit: ");
  scanf("%f",&ll);

  h = (ul-ll)/n;

  sum = 0;
  sum1 = 0;
  for(i=ll;i<=ul;i++)
  {
    if(i==ll || i==ul)
    {
      x = (float)trap((float)i);
      sum = sum + x;
      //printf("%f %d %f\n",x,i,sum);
    }
    else
    {
      x1 = (float)trap((float)i);
      sum1 = sum1 + x1;
      //printf("%f %d %f\n",x1,i,sum1);
    }
  }

  sum1 = 2*sum1;
  sum3 = (h*1.0/2 * (sum + sum1));

  printf("Trapezoidal Sum: %.2f",sum3);

  getch();
  return 0;
}