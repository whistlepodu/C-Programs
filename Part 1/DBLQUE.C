#include<stdio.h>
#include<conio.h>

typedef struct dblque
{
  struct dblque *prev;
  int info;
  struct dblque *next;
}dq;

void Qinsert(dq **,dq **);
void Qserve(dq **,dq **);
void Qdisplay(dq *,dq *);

void main()
{
  dq *lt=NULL;
  dq *rt=NULL;
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
      case 1: Qinsert(&lt,&rt);    //Qinsert() function call
	      break;

      case 2: if(lt==NULL && rt==NULL)
		printf("\nEmpty Queue");
	      else
		Qserve(&lt, &rt);  //Qserve() function call
	      break;

      case 3: if(lt==NULL && rt==NULL)
		printf("\nEmpty Queue");
	      else
		Qdisplay(lt,rt);        //Qdisplay() function call
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes 2: No\n");
    scanf("%d",&i);
    printf("\n");
  }while(i==1);
}

void Qinsert(dq **lt,dq **rt)
{
  dq *p;
  int num;
  p=(dq *)malloc(sizeof(dq));
  printf("Enter Element to be Inserted: ");
  scanf("%d",&num);
  if(*lt==NULL && *rt==NULL)
  {
    *lt=p;
    *rt=p;
    (*lt)->prev=NULL;
    (*rt)->next=NULL;
  }
  else
  {
    (*rt)->next=p;
    p->prev=*rt;
    *rt=p;
    p->next=NULL;
  }
  p->info=num;
  printf("\nElement Inserted");
}

void Qserve(dq **lt,dq **rt)
{
  dq *p;
  int num;
  p=*lt;
  if(*lt==*rt)
  {
    *lt=NULL;
    *rt=NULL;
    free(p);
  }
  else
  {
    printf("Enter Element to be Deleted: ");
    scanf("%d",&num);
    while(p->info!=num && p!=NULL)
      p=p->next;
    if(p==NULL)
      printf("Element Not Found");
    else
    {
      if(p->prev==NULL)
      {
	*lt=p->next;
	(*lt)->prev=NULL;
	printf("Element Deleted");
	free(p);
      }
      else if(p->next==NULL)
      {
	*rt=p->prev;
	(*rt)->next=NULL;
	printf("Element Deleted");
	free(p);
      }
      else
      {
	p->prev->next=p->next;
	p->next->prev=p->prev;
	printf("Element Deleted");
	free(p);
      }
    }
  }
}

void Qdisplay(dq *lt,dq *rt)
{
  if(lt==rt)
    printf("%d ",lt->info);
  else
  {
    while(lt!=rt)
    {
      printf("%d ",lt->info);
      lt=lt->next;
    }
    printf("%d ",lt->info);
  }
}