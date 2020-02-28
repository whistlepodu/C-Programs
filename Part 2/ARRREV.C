/*WAP in C to N elements in array and perform following
operation using separate function,
each and every function should not return value to main().

#define N 100

1. void input(int [], int);
2. void reverse(int [], int);
3. void output(int [], int)

*/

#include<stdio.h>
#include<conio.h>
#define N 100

void input(int [], int);
void reverse(int [], int);
void output(int [], int);

int main()
{
  int arr[N],n;
  clrscr();

  printf("Enter Size of Array: ");
  scanf("%d",&n);

  input(arr,n);
  reverse(arr,n);
  output(arr,n);

  getch();
  return 1;
}

void input(int arr[], int n)
{
  int i=0;
  printf("Enter Elements of Array: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}

void reverse(int arr[], int n)
{
  int i=0, j=n-1, t=0;

  for(i=0;i<n,i<j;i++,j--)
  {
      t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;
  }
}

void output(int arr[], int n)
{
  int i=0;

  printf("Reversed Element: \n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}