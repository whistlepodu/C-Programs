#include<stdio.h>
#include<conio.h>
#define N 100
void main()
{
  int arr[N],num;
  int i,n,loc=0,flag=0;
  clrscr();
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("\nEnter elements of array: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("\nEnter number to be searched: ");
  scanf("%d",&num);
  for(i=0;i<n;i++)
    {
      if(arr[i]==num)
	{
	  flag=1;
	  loc=i;
	  break;
	}
    }
  if(flag==1)
    printf("\nNumber present at location: %d",loc+1);
  else
    printf("\nNumber not present");
  getch();
}