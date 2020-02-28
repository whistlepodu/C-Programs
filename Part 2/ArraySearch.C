#include<stdio.h>
#include<conio.h>
#define N 100

int main()
{
  int i,j,n,arr[N],num,flag=0,loc=0;

  clrscr();

  printf("Enter Size of Array: ");
  scanf("%d",&n);

  printf("Enter Elements of Array: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  printf("Enter Element to Search: ");
  scanf("%d",&num);

  for(i=0;i<n;i++)
  {
    if(arr[i]==num)
    {
      flag=1;
      loc=i+1;
      break;
    }
  }

  if(flag==1)
    printf("Number Found at location %d",loc);
  else
    printf("Number Not Found");

  getch();
  return 0;
}