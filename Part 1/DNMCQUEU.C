#include<stdio.h>
#include<conio.h>

//Structure for Dynamic Queue.
//1st field is INFO, stores the value.
//2nd Field is NEXT, which stores the next node address.

typedef struct queue
{
  int info;
  struct queue *next;
}qu;

//Insertion Function
void Qinsert(qu **, qu **);
//Serving Function
void Qserve(qu **, qu **);
//Display Function
void Qdisplay(qu *);

int main()
{
  qu *front=NULL;
  qu *rear=NULL;
  int ch,i;
  clrscr();
  do
  {
    //clrscr();
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
		Qdisplay(front);        //Qdisplay() function call
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes\n2: No\n");
    scanf("%d",&i);
    printf("\n");
  }while(i==1);
  return 1;
}

//Qinsert() Function Definition which is taking two argument,
//Address of Front and Address of Rear

void Qinsert(qu **front, qu **rear)
{
  int num;
  qu *p;
  p=(qu *)malloc(sizeof(qu));
  if(p==NULL)
    printf("\nNo Memory Allocated");
  else
  {
    printf("\nEnter Element to be Inserted: ");
    scanf("%d",&num);
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
    p->info=num;
    p->next=NULL;
  }
}

//Qserve() Function Definition which is taking two argument,
//Address of Front and Address of Rear

void Qserve(qu **front, qu **rear)
{
  qu *p;
  printf("\nDeleted Element: %d",(*front)->info);
  if(*front==*rear && *front!=NULL)
  {
    p=*front;
    *front=NULL;
    *rear=NULL;
  }
  else
  {
    p=*front;
    (*front)=p->next;
  }
}

//Qdisplay() Function Definition which is taking one argument,
//Address of Front only

void Qdisplay(qu *front)
{
  while(front!=NULL)
  {
    printf("%d ",front->info);
    front=front->next;
  }
}