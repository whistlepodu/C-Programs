#include<stdio.h>
#include<conio.h>
#define N 100

void input(int [], int);
void sort(int [], int);
void display(int [], int);

void main()
{
  int arr[N],n;
  clrscr();
  printf("Enter No. of Elements: ");
  scanf("%d",&n);
  input(arr,n);
  sort(arr,n);
  display(arr,n);
  getch();
}

void input(int arr[N],int n)
{
  int i;
  printf("\nEnter Elements: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}

void sort(int arr[N],int n)
{
   int i,j,k,temp,flag=0,c=0,x=0;
  for(i=0;i<n-1;i++)
  {
    flag=0;
    for(j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	flag++;
	c++;
      }
    }
    if(flag!=0)
    {
      x++;
      printf("\nPass %d, No. of Exchange: %d\n",i+1,flag);
      for(k=0;k<n;k++)
	printf("%d ",arr[k]);
      printf("\n");
    }
    if(flag==0)
    {
      printf("\nTotal Pass: %d, Total No. of Exchange: %d",x,c);
      break;
    }
  }
}

void display(int arr[N], int n)
{
  int i;
  printf("\nSorted Elements: \n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}