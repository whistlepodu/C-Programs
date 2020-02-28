#include<stdio.h>
#include<conio.h>
int top=-1;
int stack[20];
void push(int);
int pop();
void display();
void main()
{
  int num,ch,t;
  clrscr();
  do
    {
      clrscr();
      printf("Choices Are: \n");
      printf(" Push: 1\n Pop: 2\n Display: 3\n Exit: 4\n ");
      printf("\nEnter Your Choice: ");
      scanf("%d",&ch);
      switch(ch)
	{
	  case 1: printf("Enter the number: ");
		  scanf("%d",&num);
		  push(num);
		  break;
	  case 2: t=pop();
		  printf("\nDeleted Element: %d",t);
		  getch();
		  break;
	  case 3: display();
		  break;
	  case 4: exit(0);
	}
    }
  while("Ask again the choice");
  getch();
}
void push(int num)
{
  if(top==20)
    printf("\nFULL");
  else
    {
      top=top+1;
      stack[top]=num;
    }
}
int pop()
{
  int x;
  if(top<0)
    printf("\nUnderflow");
  else
    {
      x=stack[top];
      top=top-1;
    }
  return (x);
}
void display()
{
  int i;
  for(i=top;i>=0;i--)
    printf("\n%d",stack[i]);
  getch();
}