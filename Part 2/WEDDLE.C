#include<stdio.h>
#include<conio.h>

float wedd(float x)
{
  return 1/(1+(x*x));
}

int main()
{
  int n,h,i;
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

  if(n%6==0)
  {
    for(i=ll;i<=ul;i++)
    {
      if(i%2==0)
      {
	x = (float)wedd((float)i);
	sum = sum + x;
      }
      else
      {
	if(i==3)
	{
	  x = 6.0 * (float)wedd((float)i);
	  sum = sum + x;
	}
	else
	{
	  x = 5.0 * (float)wedd((float)i);
	  sum = sum + x;
	}
      }
    }
    sum = (h*3.0/10 * sum);
    printf("\nWeddle Sum: %.2f",sum);
  }
  else
    printf("\nWeddle Rule Can't be applied");

  getch();
  return 0;
 }