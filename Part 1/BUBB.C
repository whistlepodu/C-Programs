#include<stdio.h>
#include<conio.h>
#define max 100

void insert(int [],int);
void sort(int [],int);
void display(int [],int);

void main()
{
	int arr[max],i,j,n;
	clrscr();
	printf("enter no. of elements: ");
	scanf("%d",&n);
	insert(arr,n);
	sort(arr,n);
	display(arr,n);
	getch();
}

void insert(int arr[max],int n)
{
	int i,j;
	printf("\nenter  of elements:\n");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
}

void sort(int arr[max],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	 {
	  for(j=0;j<n-i-1;j++)
	  {
	   if(arr[j]>arr[j+1])
	   {
	   temp=arr[j];
	   arr[j]=arr[j+1];
	   arr[j+1]=temp;
	   }
	  }
	 }
}

void display(int arr[max],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\t%d",arr[i]);
}

