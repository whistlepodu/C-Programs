/*size of pointer using user*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,*p1,*p2;
  clrscr();
  printf("Enter first number: ");
  scanf("%d",&a);
  printf("Enter second number: ");
  scanf("%d",&b);
  p1=&a;
  p2=&b;
  printf("Size: %d   %d",sizeof(a),sizeof(b));
  printf("\nSize: %d   %d",sizeof(p1),sizeof(p2));
  getch();
  return(0);
}

