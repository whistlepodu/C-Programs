#include<iostream.h>
#include<string.h>
char *fun()
{
  static char arr[1024];
  return arr;
}
int main()
{
  char *str="codeKaze";
  strcpy(fun(),str);
  str=fun();
  strcpy(str,"codeKazeQuiz");
  cout<<fun();
}