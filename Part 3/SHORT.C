#include<stdio.h>
#include<conio.h>
	void main()
	{
	int a[5],i,j,temp;
	clrscr();
	printf("enter the element of array:");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		{
		for(j=0;j<((5-i)-1);j++)
		    {
			if(a[j]>a[j+1])
			  {
			   temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			  }
		    }
		}
	printf("array in asccending order is :");
	for(i=0;i<5;i++)
	{
	printf("%d",a[i]);
	}
getch();
	}