#include<stdio.h>
#include<conio.h>
struct student
{
  char name[20];
  int rollno;
  char course[20];
  int sem;
  int m;
};
void main()
{
  struct student s[10];
  int i;
  clrscr();
  for(i=0;i<10;i++)
    {
      printf("Enter Name: ");
      scanf("%s",&s[i].name);
      printf("Enter Roll Number: ");
      scanf("%d",&s[i].rollno);
      printf("Enter Course: ");
      scanf("%s",&s[i].course);
      printf("Enter Semester: ");
      scanf("%d",&s[i].sem);
      printf("Enter Marks: ");
      scanf("%d",&s[i].m);
      printf("\n");
    }
  for(i=0;i<10;i++)
    {
      printf("\nStudent %d Record: \t\n",i+1);
      printf("\n");
      printf("Name: %s",s[i].name);
      printf("\nRoll No.: %d",s[i].rollno);
      printf("\n");
      printf("Course: %s",s[i].course);
      printf("\nSemester: %d",s[i].sem);
      printf("\nMarks: %d",s[i].m);
      printf("\n");
    }
  printf("\n%d",sizeof(struct student));
  getch();
}