#include<stdio.h>
#include<conio.h>
struct stack
{
  int info;
  struct stack *next;
};
struct stack *top=NULL;
void push(int);
int pop();
void display();
void main()
{
  int num,ch,t;
  clrscr();
  printf("%d",sizeof(struct stack));
  getch();
  do
    {
      clrscr();
      printf("Choices Are: \n");
      printf("Push: 1\nPop: 2\nDisplay: 3\nExit: 4\n ");
      printf("\nEnter Your Choice: ");
      scanf("%d",&ch);
      switch(ch)
	{
	  case 1: printf("Enter the number: ");
		  scanf("%d",&num);
		  push(num);
		  break;
	  case 2: if(top!=NULL)
		    {
		      t=pop();
		      printf("\nDeleted Element: %d",t);
		    }
		  else
		    {
		      printf("\nStack is empty.");
		    }
		  getch();
		  break;
	  case 3: display();
		  break;
	  case 4: exit(0);
		  break;
	  default: printf("Wrong Choice!!!!!!!!");
		   getch();
	}
    }
  while(ch!=4);
  getch();
}
void push(int num)
{
  struct stack *p;
  p=(struct stack *)malloc(sizeof(struct stack));
  p->info=num;
  p->next=top;
  top=p;
}
int pop()
{
  struct stack *p;
  int temp;
  if(top!=NULL)
    {
      temp=top->info;
      p=top;
      top=top->next;
      free(p);
    }
  return (temp);
}
void display()
{
  struct stack *p;
  p=(struct stack *)malloc(sizeof(struct stack));
  p=top;
  if(p!=NULL)
    {
      printf("\nTop->");
      while(p!=NULL)
	{
	  printf("\t%d\n",p->info);
	  p=p->next;
	}
    }
  else
    printf("\nStack is Empty");
  getch();
}