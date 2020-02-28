void main()
{
  int a,b;
  clrscr();
  printf("\nEnter Numbers: ");
  scanf("%d %d",&a,&b);
  printf("\nNumbers Before Swapping: %d and %d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nNumbers After Swapping: %d and %d",a,b);
  printf("\n\n\t %d   %d");
  getch();
}