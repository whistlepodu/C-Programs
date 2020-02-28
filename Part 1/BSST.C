#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


typedef struct bst
{
    struct bst *left;
    int info;
    struct bst *right;
}bst;


void insert(bst **,int);
void pre(bst *);
void post(bst *);
void in(bst *);
void countNode(bst *,int *);
void count(bst *,int *);




int main()
{

    bst *root=NULL;
    int ch,num,i,m=0;

    do
    {

        printf("\n 1.Insert 2. Display 3.Count Nodes 4. Count");
        printf("\n Enter your choice :- ");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1 : printf("\n Enter the number you want to be inserted :- ");
                     scanf("%d",&num);
                     insert(&root,num);
                     break;

            case 2: if(root==NULL)
                    {

                        printf("\n Empty Tree ");

                    }
                    else
                    {
                     printf("\n Preorder :-");
                     pre(root);
                     printf("\n Postorder :-");
                     post(root);
                      printf("\n Inorder :-");
                     in(root);
		    }
	    case 3: if(root==NULL)
		      printf("\nNo Node");
		     else
		     {
			m=0;
			countNode(root,&m);
			printf("\nTotal Node: %d",m);
		     }
		     break;
	     case 4: if(root==NULL)
                    printf("\nNo Node");
                  else
                    {
                        m=0;
                        count(root,&m);
                        printf("\nTotal Armstrong Node: %d",m);
                    }
                    break;

	}
	printf("\n Do You want to continue ?");
	printf("\n 1.Yes 2. No ");
	printf("\n Enter your choice :- ");
	scanf("%d",&i);

    }while(i==1);
    return 0;
}


void insert(bst **root,int num)
{
    bst *p=NULL;
    if((*root)==NULL)
    {

	p=(bst *)malloc(sizeof(bst));
	p->info=num;
	(*root)=p;
	(*root)->left=NULL;
	(*root)->right=NULL;

    }
    else if((*root)->info<num)
    {

	insert(&((*root)->right),num);

    }
    else if((*root)->info>num)
    {

	insert(&((*root)->left),num);

    }

}



void pre(bst *root)
{

    if(root!=NULL)
    {

	printf(" %d",root->info);
	pre(root->left);
	pre(root->right);

    }
}


void post(bst *root)
{

    if(root!=NULL)
    {



	post(root->left);
	post(root->right);
	 printf(" %d",root->info);

    }
}


void in(bst *root)
{

    if(root!=NULL)
    {

	in(root->left);
	printf(" %d",root->info);
	in(root->right);

    }
}

void countNode(bst *root, int *n)
{
	if(root!=NULL)
	{
		(*n)=(*n)+1;
		countNode(root->left,&(*n));
		countNode(root->right,&(*n));
	}
}

void count(bst *root, int *n)
{

    int t,sum=0;
    int x;
    if (root!=NULL)
    {
        x=root->info;
        while(x>0)
        {
            t=x%10;
            sum=sum+(t*t*t);
            x=x/10;
        }
        if(root->info==sum)
        {
            (*n)=(*n)+1;
        }
        count((root->left),&(*n));
		count((root->right),&(*n));
    }
}
