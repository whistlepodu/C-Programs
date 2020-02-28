#include<stdio.h>
#include<conio.h>
typedef struct cqueue
{
  int info;
  struct cqueue *next;
};
struct cqueue *front=NULL;
struct cqueue *rear=NULL;
void insert(int);
void delete_num();
void display();

void main()
{
  int num,ch;
  clrscr();
  do
    {
      clrscr();
      printf("\nChoices Are: ");
      printf("\n1: Insert\n2: Delete\n3: Display\n4: Exit");
      printf("\nEnter Choice: ");
      scanf("%d",&ch);
      switch(ch)
	{
	  case 1: printf("\nEnter Number: ");
		  scanf("%d",&num);
		  insert(num);
		  break;
	  case 2: delete_num();
		  break;
	  case 3: display();
		  getch();
		  break;
	  case 4: exit (0);
	}
    }while(1);
}
void insert(int num)
{
  struct cqueue *p;
  p=(struct cqueue *)malloc(sizeof(struct cqueue));
  p->info=num;
  if((front!=NULL) && (rear!=NULL))
    {
      p->next=front;
      rear->next=p;
      rear=p;
    }
  else
    {
      rear=p;
      front=p;
      p->next=p;
    }
}
void delete_num()
{
  struct cqueue *p;
  if(front==NULL && rear==NULL)
    {
      printf("\nQueue is Empty");
      getch();
    }
  else if(front==rear && front!=NULL)
    {
      p=front;
      front=rear=NULL;
      free(p);
    }
  else
    {
      p=front;
      front=front->next;
      rear->next=front;
      free(p);
    }
}
void display()
{
  struct cqueue *p,*q;
  p=front;
  q=p;
  if(front==NULL && rear==NULL)
    {
      printf("\nQueue is Empty");
    }
  else
    {
      do
       {
	 if((q==front) && (q==rear))
	   {
	     printf("\n%d <-----I am Front as well as Rear",q->info);
	     q=q->next;
	   }
	 else if(q==front)
	   {
	     printf("\n%d <-----I am Front",q->info);
	     q=q->next;
	   }
	 else if(q==rear)
	   {
	     printf("\n%d <-----I am Rear",q->info);
	     q=q->next;
	   }
	 else
	   {
	     printf("\n%d",q->info);
	     q=q->next;
	   }
       }while(q!=p);
    }
}