#include<stdio.h>
#include<conio.h>

typedef struct dlink
{
  struct dlink *prev;
  int info;
  struct dlink *next;
}dlink;

void Dinsert(dlink **,dlink **);
void Ddisplay(dlink *,dlink *);

void main()
{
  dlink *rt=NULL;
  dlink *lt=NULL;
  int ch,i;
  clrscr();
  do
  {
    clrscr();
    printf("Choices Are: ");
    printf("\n1: Push\n2: Pop\n3: Display\n\n");
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: Dinsert(&lt,&rt);
	      break;

      case 2: //top = pop(top);
	      //break;

      case 3: Ddisplay(lt,rt);
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes\n2: No\n");
    scanf("%d",&i);
  }while(i==1);
}

void Dinsert(dlink **lt,dlink **rt)
{
  dlink *p,*q;
  int num;
  x:p=(dlink *)malloc(sizeof(dlink));
  if(p==NULL)
    goto x;
  printf("Enter Element to be Inserted: ");
  scanf("%d",&num);
  p->info=num;
  if(*lt==*rt && *lt==NULL)
  {
    *lt=*rt=p;
    p->next=NULL;
    p->prev=NULL;
  }
  else if(p->info<(*lt)->info)
  {
    p->next=*lt;
    (*lt)->prev=p;
    *lt=p;
    p->prev=NULL;
  }
  else if(p->info>(*rt)->info)
  {
    p->next=NULL;
    p->prev=*rt;
    (*rt)->next=p;
    *rt=p;
  }
  else
  {
    q=*lt;
    while(q->info<p->info)
      q=q->next;
    p->next=q;
    q->prev->next=p;
    p->prev=q->prev;
    q->prev=p;
  }
}

void Ddisplay(dlink *lt,dlink *rt)
{
  printf("\nElements in Ascending Order:\n");
  while(lt!=NULL)
  {
    printf("%d ",lt->info);
    lt=lt->next;
  }

  printf("\n\nElements in Descending Order:\n");
  while(rt!=NULL)
  {
    printf("%d ",rt->info);
    rt=rt->prev;
  }
}