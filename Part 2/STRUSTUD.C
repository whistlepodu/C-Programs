#include<stdio.h>
#include<conio.h>
#define N 100
struct student
{
  char name[20];
  int rollno;
  char course[20];
  int sem;
};
void main()
{
  struct student s[N];
  int i,n;
  clrscr();
  printf("Enter Number of Student: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("Enter Name: ");
      scanf("%s",&s[i].name);
      printf("Enter roll No.: ");
      scanf("%d",&s[i].rollno);
      printf("Enter Course: ");
      scanf("%s",&s[i].course);
      printf("Enter Semester: ");
      scanf("%d",&s[i].sem);
      printf("\n");
    }
  for(i=0;i<n;i++)
    {
      printf("\nStudent %d Record: ",i+1);
      printf("\nName: %s",s[i].name);
      printf("\nRoll No.: %d",s[i].rollno);
      printf("\nCourse: %s",s[i].course);
      printf("\nSemester: %d",s[i].sem);
      printf("\n");
    }
  getch();
}