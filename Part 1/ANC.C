int main()
{
  float**(*ptr)[4]=(float**(*)[4]);
  ptr+=5;
  printf("%d %d",ptr,sizeof(ptr));
  getch();
  return 0;
}