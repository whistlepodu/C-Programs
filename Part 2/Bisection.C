#include<stdio.h>
#include<conio.h>
#include<math.h>

float findroot(float x)
{
  return(pow(x,3)-4*x-9);
}

int main()
{
  float x1, y1, x2, y2;
  float root, f1, f2, f3;
  int iter, i;

  clrscr();

  printf("Enter 1st Approximation value: ");
  scanf("%f",&x1);

  printf("Enter 2nd Approximation Value: ");
  scanf("%f",&y1);

  printf("Enter no. of Iterations: ");
  scanf("%d",&iter);

  x2 = x1;
  y2 = y1;

  if(findroot(x2)==0)
    root = x2;
  else if (findroot(y2)==0)
    root = y2;
  else
  {
    for(i=0;i<iter;i++)
    {
      f1 = findroot(x2);
      root = (x2+y2)/2.0;
      f2 = findroot(root);
      f3 = findroot(y2);
      if(f2==0)
      {
	root = f2;
	break;
      }
      printf("\n");
      printf("The root after %d iteration is %f", i+1, root);
      if(f1*f2<0)
	y2 = root;
      else if(f2*f3<0)
	x2 = root;
    }
  }
  printf("\n\nThe Approximation to the root is %3.4f", root);
  getch();
  return 0;
}