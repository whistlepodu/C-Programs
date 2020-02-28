#include<stdio.h>
#include<conio.h>
#define N 100
void main()
{
  int arr[N],num,i,n,flag=0,loc=0,lb=0,ub,mid;
  clrscr();
  printf("Enter size of array: ");
  scanf("%d",&n);
  ub=n-1;
  printf("\nEnter elements of array: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("\nEnter number to be searched: ");
  scanf("%d",&num);
  while(ub>=lb)
  {
    mid=(lb+ub)/2;
    {
      if(arr[mid]==num)
      {
	flag=1;
	loc=mid;
	break;
      }
      else if(arr[mid]>num)
      {
	ub=mid-1;
      }
      else
      {
	lb=mid+1;
      }
    }
  }
  if(flag==1)
    printf("\nNumber present at location: %d",loc+1);
  else
    printf("\nNumber not present");
  getch();
}