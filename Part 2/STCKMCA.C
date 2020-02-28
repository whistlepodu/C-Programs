//This is a C program to implement Stack using Menu-Driven Approach

#include<stdio.h>
#include<conio.h>
#define MAX 20

//Function Prototype

void push(int [], int *);     //push() function to push value to stack.
void pop(int [], int *);      //pop() function to pop value from stack.
void display(int [], int *);  //display() function to display all values of stack.

void main()
{
  int ch,i,arr[MAX],num,top=-1,x;
  clrscr();
  //Menu-Driven Implementation using Switch-Case
  do
  {
    clrscr();
    printf("Choices Are: ");
    printf("\n1: Push\n2: Pop\n3: Display\n\n");
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(arr,&top);       //push() function call
	      break;

      case 2: pop(arr,&top);        //pop() function call
	      break;

      case 3: display(arr,&top);    //display() function call
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes\n2: No\n");
    scanf("%d",&i);
  }while(i==1);
}

//push() function definition
void push(int arr[MAX], int *top)
{
  int num;
  if(*top==MAX-1)
    printf("\nOverflow");
  else
  {
    printf("\nEnter Value to be Pushed in stack: ");
    scanf("%d",&num);
    *top=*top+1;
    arr[*top]=num;
    printf("\nPushed Element: %d",num);
  }
}

//display() function definition
void display(int arr[MAX], int *top)
{
  int i=0;
  if(*top==-1)
    printf("\nEmpty Stack");
  else
  {
    printf("\nStack Element(Top to Bottom): \n");
    for(i=*top;i>-1;i--)
      printf("%d ",arr[i]);
  }
  getch();
}

//pop() function definition
void pop(int arr[MAX], int *top)
{
  int x;
  if(*top==-1)
    printf("\nEmpty Stack");
  else
  {
    x = arr[*top];
    *top = *top - 1;
    printf("\nPopped Element: %d",x);
  }
}