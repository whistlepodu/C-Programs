#include<stdio.h>
#include<conio.h>

typedef struct student
{
  int roll;
  char name[20];
  struct student *next;
}stu;

void insertData(stu *);
void display(stu *);

void main()
{
  stu a,b,c,*start,*temp;
  clrscr();

  start->next=&a;
  c.next=NULL;

  insertData(&a);
  a.next=&b;
  insertData(&b);
  b.next=&c;
  insertData(&c);

  clrscr();

  display(&a);
  display(&b);
  display(&c);

  getch();
}

void insertData(stu *x)
{
  int rl;
  char nm[20];
  clrscr();
  printf("\nEnter Roll No.: ");
  scanf("%d",&x->roll);
  printf("Enter Name: ");
  scanf("%s",x->name);
}

void display(stu *x)
{
  printf("\nRoll No.: %d",x->roll);
  printf("\nName: %s",x->name);
}