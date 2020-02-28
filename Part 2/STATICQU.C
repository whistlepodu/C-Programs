#include<stdio.h>
#include<conio.h>
#define MAX 5
int front=-1;
int rear=-1;
int queue[MAX];
void qinsert(int);
void qdelete();
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
	      qinsert(num);
	      break;
      case 2: qdelete();
	      getch();
	      break;
      case 3: display();
	      getch();
	      break;
      case 4: exit(0);
	      break;
      default: printf("\nWrong choice");
    }
  }while(1);
}
void qinsert(int num)
{
  if(rear==MAX-1)
    {
      printf("\nOverflow");
    }
  else
  {
    if(front==-1)
      {
	front=front+1;
      }
    rear=rear+1;
    queue[rear]=num;
  }
}
void qdelete()
{
  if(front==-1 && rear==-1)
    {
      printf("\nUnderflow");
    }
  else
    {
      if(front==rear)
	{
	  printf("\nDeleted Element: %d",queue[rear]);
	  front=rear=-1;
	}
      else
	{
	  printf("\nDeleted Element: %d",queue[front]);
	  front++;
	}
    }
}
void display()
{
  int i;
  if(front==-1)
    {
      printf("\nQueue is Empty");
    }
  else
    {
      for(i=front;i<=rear;i++)
       {
	 printf("\n%d",queue[i]);
       }
    }
}