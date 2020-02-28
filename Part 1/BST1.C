#include<stdio.h>
#include<conio.h>

typedef struct bst
{
  struct bst *left;
  int info;
  struct bst *right;
}bst;

void binsert(bst **, int);
void bdelete(bst **);
void display1(bst *);
void display2(bst *);
void display3(bst *);
void countNode(bst *, int *);
void countLeaf(bst *, int *);
void countLeftLeaf(bst *, int *);
void countRightLeaf(bst *, int *);
void countRootLeft(bst *, int *);
void countRootRight(bst *, int *);
void countMin(bst *,int *);
void countMax(bst *,int *);

void main()
{
  bst *root=NULL;
  int ch,i,num,m=0;
  clrscr();
  do
  {
    clrscr();
    printf("Choices Are: ");
    printf("\n1: Insert Elemenet\n2: Delete\n3: Display");
    printf("\n4: Node Count\n5: Leaf Node Count");
    printf("\n6: Node Which have only Left Child\n7: Node Which have only Right Child");
    printf("\n8: Node Count Left of Root\n9: Node Count Right of Node");
    printf("\n10: Minimum Node Info\n10: Maximum Node Info\n\n");
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\nEnter Element to be Inserted: ");
	      scanf("%d",&num);
	      binsert(&root,num);
	      break;

      case 2: if(root==NULL)
		printf("\nEmpty Tree");
	      else
		bdelete(&root);
	      break;

      case 3: if(root==NULL)
		printf("\nEmpty Tree");
	      else
	      {
		printf("\nInOrder: ");
		display1(root);
		printf("\n\nPreOrder: ");
		display2(root);
		printf("\n\nPostOrder: ");
		display3(root);
	      }
	      break;

      case 4: if(root==NULL)
		printf("\nNo Node");
	      else
	      {
		m=0;
		countNode(root,&m);
		printf("\nTotal Node: %d",m);
	      }
	      break;

      case 5: if(root==NULL)
		printf("\nNo Node");
	      else
	      {
		m=0;
		countLeaf(root,&m);
		printf("\nTotal Leaf Node: %d",m);
	      }
	      break;

      case 6: if(root==NULL || root->left==NULL)
		printf("\nNo Node");
	      else
	      {
		m=0;
		countLeftLeaf(root,&m);
		printf("\nTotal Node which have only Left Child: %d",m);
	      }
	      break;

      case 7: if(root==NULL || root->right==NULL)
		printf("\nNo Node");
	      else
	      {
		m=0;
		countRightLeaf(root,&m);
		printf("\nTotal Node Which have only Right Child: %d",m);
	      }
	      break;

      case 8: if(root==NULL || root->left==NULL)
		printf("\nNo Node");
	      else
	      {
		m=0;
		countRootLeft(root->left,&m);
		printf("\nTotal Node Left of Root: %d",m);
	      }
	      break;

      case 9: if(root==NULL || root->right==NULL)
		printf("\nNo Node");
	      else
	      {
		m=0;
		countRootLeft(root->right,&m);
		printf("\nTotal Node Right of Root: %d",m);
	      }
	      break;

      case 10: if(root==NULL)
		printf("\nNo Node");
	      else
	      {
		m=root->info;
		countMin(root->left,&m);
		printf("\nMinimum Node Info: %d",m);
	      }
	      break;

      case 11: if(root==NULL)
		printf("\nNo Node");
	      else
	      {
		m=root->info;
		countMax(root->right,&m);
		printf("\nMaximum Node Info: %d",m);
	      }
	      break;
    }
    printf("\n\nDo you want to continue: ");
    printf("\n1: Yes 2: No\n");
    scanf("%d",&i);
    printf("\n");
  }while(i==1);
}

void binsert(bst **root, int num)
{
  if((*root)==NULL)
  {
    (*root)=(bst *)malloc(sizeof(bst));
    if((*root)==NULL)
      printf("\nNo Memory Allocated");
    else
    {
      (*root)->info=num;
      (*root)->left=(*root)->right=NULL;
    }
  }
  else if(num<(*root)->info)
    binsert(&(*root)->left,num);
  else
    binsert(&(*root)->right,num);
}

void bdelete(bst **root)
{
  bst *a,*b,*c;
  int num;
  printf("\nEnter Element to Be Deleted: ");
  scanf("%d",&num);
  a=*root;

}

void display1(bst *root)
{
  if(root!=NULL)
  {
    display1(root->left);
    printf("%d  ",root->info);
    display1(root->right);
  }
}

void display2(bst *root)
{
  if(root!=NULL)
  {
    printf("%d  ",root->info);
    display2(root->left);
    display2(root->right);
  }
}

void display3(bst *root)
{
  if(root!=NULL)
  {
    display3(root->left);
    display3(root->right);
    printf("%d  ",root->info);
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

void countLeaf(bst *root, int *m)
{
  if(root!=NULL)
  {
    if(root->left==NULL && root->right==NULL)
      (*m)=(*m)+1;
    countLeaf(root->left,&(*m));
    countLeaf(root->right,&(*m));
  }
}

void countLeftLeaf(bst *root, int *m)
{
  if(root!=NULL)
  {
    if(root->left!=NULL && root->right==NULL)
      (*m)=(*m)+1;
    countLeftLeaf(root->left,&(*m));
    countLeftLeaf(root->right,&(*m));
  }
}

void countRightLeaf(bst *root,int *m)
{
  if(root!=NULL)
  {
    if(root->right!=NULL && root->left==NULL)
      (*m)=(*m)+1;
    countRightLeaf(root->left,&(*m));
    countRightLeaf(root->right,&(*m));
  }
}

void countRootLeft(bst *root, int *m)
{
  if(root!=NULL)
  {
    (*m)=(*m)+1;
    countRootLeft(root->left,&(*m));
    countRootLeft(root->right,&(*m));
  }
}

void countRootRight(bst *root, int *m)
{
  if(root!=NULL)
  {
    (*m)=(*m)+1;
    countRootLeft(root->left,&(*m));
    countRootLeft(root->right,&(*m));
  }
}

void countMin(bst *root,int *m)
{
  if(root!=NULL)
  {
    if(root->info<(*m))
      (*m)=root->info;
    countMin(root->left,&(*m));
  }
}

void countMax(bst *root,int *m)
{
  if(root!=NULL)
  {
    if(root->info>(*m))
      (*m)=root->info;
    countMax(root->right,&(*m));
  }
}