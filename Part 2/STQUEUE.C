#include<stdio.h>
#include<conio.h>
#define MAX 20

void insert(int [], int *, int *);
void deletE(int [], int *, int *);
void display(int [], int *, int *);

void main()
{
  int fr=-1,re=-1,ch,i,arr[MAX];
  clrscr();
  do
  {
    clrscr();
    printf("Choices Are: ");
    printf("\n1: Insert Front\n2: Delete Rear\n3: Display\n\n");
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: insert(arr,&fr,&re);    //push() function call
	      //fr=0;
	      break;

      case 2: deletE(arr,&fr,&re);        //pop() function call
	      break;

      case 3: display(arr,&fr,&re);    //display() function call
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes\n2: No\n");
    scanf("%d",&i);
  }while(i==1);
}

void insert(int arr[MAX], int *fr, int *re)
{
  int num;
  printf("Enter Number to be inserted: ");
  scanf("%d",&num);
  if((*fr==0 && *re==MAX-1) || (*re+1==*fr))
  {
    printf("\nQueue is Full");
  }
  else if(*fr==-1 && *re==-1)
  {
    *fr = *fr+1;
    *re = *re+1;
    arr[*re]=num;
    printf("\nElement Inserted");
  }
  else if(*fr<*re && *re!=MAX-1)
  {
    *re = *re+1;
    arr[*re]=num;
    printf("\nElement Inserted");
  }
  else if(*re==MAX-1)
  {
    *re=0;
    arr[*re]=num;
    printf("\nElement Inserted");
  }
  else
  {
    *re = *re+1;
    arr[*re]=num;
    printf("\nElement Inserted");
  }
}

void deletE(int arr[MAX], int *fr, int *re)
{
  if(*fr==-1 && *re==-1)
    printf("\nEmpty Queue");
  else if(*fr==*re)
  {
    printf("\nDeleted Element: %d",arr[*re]);
    *re = *re-1;
    *fr = *fr-1;
  }
  else if(*fr<*re)
  {
    printf("\nDeleted Element: %d",arr[*fr]);
    *fr = *fr+1;
  }
  else if(*re<*fr && *fr==MAX-1)
  {
    printf("\nDeleted Element: %d",arr[*fr]);
    *fr=0;
  }
}

void display(int arr[MAX], int *fr, int *re)
{
  int i;
  if(*fr==-1 && *re==-1)
    printf("\nQueue Empty");
  else
  {
    printf("\nQueue Element(Front to Rear): \n\n");
    if(*re>*fr && *re<=MAX-1)
    {
      for(i=*fr;i<=*re;i++)
	printf("%d ",arr[i]);
    }
    else if(*fr>*re && *fr<=MAX-1)
    {
      for(i=*fr;i<=MAX-1;i++)
	printf("%d ",arr[i]);
      for(i=0;i<*re;i++)
	printf("%d ",arr[i]);
    }
  }
}


