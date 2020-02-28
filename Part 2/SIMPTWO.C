#include<stdio.h>
#include<conio.h>
#define N 100

float simpt(float x)
{
  return 1/(1+(x*x));
}

int main()
{
  int n,h,i,a[N],b[N];
  float x,x1,x2,ul,ll,sum,sum1,sum2,sum3;
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
      x = (float)simpt((float)i);
      sum = sum + x;
      //printf("%f %d 1 %f\n",x,i,sum);
    }
    else if(i==(ul-ll)/2)
    {
      x1 = (float)simpt((float)i);
      sum1 = sum1 + x1;
      //printf("%f %d 2 %f\n",x1,i,sum1);
    }
    else
    {
      x2 = (float)simpt((float)i);
      sum2 = sum2 + x2;
      //printf("%f %d 3 %f\n",x2,i,sum2);
    }
  }

  sum1 = 2*sum1;
  sum2 = 3*sum2;
  sum3 = (h*3.0/8 * (sum + sum1 + sum2));

  printf("\nSimpson 3/8 Sum: %.2f",sum3);

  getch();
  return 0;
}