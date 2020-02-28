#include<stdio.h>
#include<conio.h>
#define N 100

int main()
{
  int a[N],i=0,b=0,flag=0,d1=0,d2=0,n;

  clrscr();

  printf("Enter Size of Array: ");
  scanf("%d",&n);

  printf("\nEnter Elements: ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  for(i=0;i<n;i++)
  {
    d1=a[i+1]-a[i];
    d2=a[i+2]-a[i+1];

    if(d1!=d2)
    {
      b=i;
      flag=0;
      break;
    }
    else
      flag=1;
  }

  if(flag==0)
    printf("Not AP, Element: %d %d %d.",a[b],a[b+1],a[b+2]);
  else
    printf("In Arithmetic Progression.");
  getch();
  return 0;
}