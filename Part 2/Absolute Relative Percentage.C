#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  float abs, rel, perc, true, appr;
  clrscr();
  printf("Enter True value: ");
  scanf("%f",&true);
  printf("Enter Approximation: ");
  scanf("%f",&appr);
  abs = fabs(true-appr);
  rel = abs/true;
  perc=rel*100;
  printf("\nAbsolute Error: %f",abs);
  printf("\nRelative Error: %f",rel);
  printf("\nPercentage Error: %f",perc);
  getch();
  return 0;
}