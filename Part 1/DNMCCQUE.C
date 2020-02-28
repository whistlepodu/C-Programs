#include<stdio.h>
#include<conio.h>

typedef struct cqueue
{
  int info;
  struct cqueue *next;
}cq;

void Qinsert(cq **,cq **);
void Qserve(cq **,cq **);
void Qdisplay(cq *,cq *);

void main()
{
  cq *front=NULL;
  cq *rear=NULL;
  int ch,i;
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
      case 1: Qinsert(&front,&rear);    //Qinsert() function call
	      break;

      case 2: //Check whether Queue is empty or not.
	      if(front==NULL && rear==NULL)
		printf("\nEmpty Queue");
	      else
		Qserve(&front, &rear);  //Qserve() function call
	      break;

      case 3: //Check whether Queue is empty or not.
	      if(front==NULL && rear==NULL)
		printf("\nEmpty Queue");
	      else
		Qdisplay(front,rear);        //Qdisplay() function call
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes 2: No\n");
    scanf("%d",&i);
    printf("\n");
  }while(i==1);
}

void Qinsert(cq **front, cq **rear)
{
  cq *p;
  int num;
  p=(cq *)malloc(sizeof(cq));
  if(p==NULL)
    printf("No Memory Allocated");
  else
  {
    printf("Enter Element to be Inserted: ");
    scanf("%d",&num);
    printf("\nElement Inserted");
    p->info=num;
    p->next=*front;
    if(*front==NULL && *rear==NULL)
    {
      *front=p;
      *rear=p;
    }
    else
    {
      (*rear)->next=p;
      *rear=p;
    }
  }
}

void Qserve(cq **front, cq **rear)
{
  cq *p;
  printf("\nServed Element: %d",(*front)->info);
  if(*front==*rear)
  {
    p=*front;
    *front=*rear=NULL;
  }
  else
  {
    p=*front;
    *front=(*front)->next;
    (*rear)->next=*front;
  }
  free(p);
}

void Qdisplay(cq *front,cq *rear)
{
  int j=0;
  if(front==rear)
    printf("%d <---Front",front->info);
  else
  {
    while(front!=rear)
    {
      printf("\n%d ",front->info);
      if(j==0)
	printf("<---Front");
      front=front->next;
      j++;
    }
  printf("\n%d <---Rear",rear->info);
  }
}