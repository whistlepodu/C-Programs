
#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct dlink
	{
	struct dlink *prev;
	int info;
	struct dlink *next;
	}dlink;

void insert(dlink **,dlink **);
void display(dlink *,dlink *);
void removee(dlink **,dlink **);
void reverse(dlink *,dlink *);

int main()
{
int ch;
dlink *left=NULL;
dlink *right=NULL;

printf("\n dynamic q");
do
{
clrscr();
printf("\n1.insert\n2.delete \n3.display \n4.exit \n5. for reverse display");
printf("\n enter choice=");
 scanf("%d",&ch);
switch(ch)
	{
	case 1:insert(&left,&right);
		break;
	case 2: if(left==NULL && right==NULL)
		printf("empty");
		else
		removee(&left,&right);
		break;
	case 3: if(left==NULL && right==NULL)
		printf("empty");
		else
		display(left,right);
		break;
	case 4:exit(0);
		break;
	case 5:reverse(left,right);
		break;

	default:printf("\n wrong input");
	}
getch();
}
while(1);
}
void removee(dlink **left,dlink **right)
{
dlink *p=*left;
int num;
	if(*left==*right)//if only one block
	{
	printf("%d is deleted",p->info);
	 *left=NULL;
	 *right=NULL;
	 free(p);
	}
	else
	{
	printf("\n enter number to be deleted=");
	scanf("%d",&num);
		while((p->info!=num)&&(p!=NULL))
		{
		p=p->next;
		}
	if(p==NULL)
	printf("not found");
	else
	{
		if(p->prev==NULL)//if delete left
		{
		 *left=p->next;
		 (*left)->prev=NULL;
		 printf("\n%d is deleted",p->info);
		 free(p);
		}
		else if(p->next==NULL) // if delete right
		{
		*right=p->prev;
		(*right)->next=NULL;
		printf("\n%d is deleted",p->info);
		free(p);
		}
		else					//middle block
		{
		 p->next->prev=p->prev;
		 p->prev->next=p->next;
		 printf("\n%d is deleted",p->info);
		 free(p);
		}
	}
	}
}
void reverse(dlink *left,dlink *right)
{
while(right!=NULL)
	{
		printf("\n%d",right->info);
		right=right->prev;
	}
}
void display(dlink *left,dlink *right)
{
	int j=0;
if(left==right)
{
printf("left-->%d<---right",left->info);
}
while(left!=right)
	{
	printf("\n%d",left->info);
		if(j==0)
		printf("<---left");
	left=left->next;
	j++;
	}
	printf("\n%d<--rear",right->info);
}
void insert(dlink **left,dlink **right)
{
int num;dlink *p,temp;
printf("\n enter number to insert:");
scanf("%d",&num);
	p=(dlink*)malloc(sizeof(dlink));
	p->info=num;

	if((*right==NULL)&&(*left==NULL))	//if p is 1st block
	{
		*right=*left=p;
		p->next=NULL;
		p->prev=NULL;
	}
	else if((p->info)<((*right)->info))
	{
		p->prev=NULL;
		(*right)->prev=p;
		p->next=*right;
		*right=p;
	}
	else if((p->info)>((*left)->info))
	{
		p->prev=(*left);
		(*left)->next=p;
		(*left)=p;
	}
	temp=(*right)->next;

	while((temp->info)<(p->info))
	{
		temp=temp->next;
	}

	(temp->prev)->next=p;
	p->prev=temp->prev;
	temp->prev=p;
	p->next=temp;

printf("%d is inserted:",num);

}
