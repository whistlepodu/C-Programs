#include<stdio.h>
#include<conio.h>
#define N 100

int main()
{
  int i,j,n,a[N],b;
  clrscr();
  printf("Enter no. of Elements of Array: ");
  scanf("%d",&n);
  printf("Enter Elements of Array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
	b=a[i];
	a[i]=a[j];
	a[j]=b;
      }
    }
  }
  printf("Sorted Elements Are: ");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  getch();
  return 0;
}