#include<stdio.h>
#include<conio.h>

int day;
int found=0;
int max_year[8] = {0};
void time(int[],int[],int,int[]);

int main()
{
  int input[12],date[8],sec[12]={0};
  clrscr();
  scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&input[0],&input[1],&input[2],&input[3],&input[4],&input[5],&input[6],&input[7],&input[8],&input[9],&input[10],&input[11]);
  time(input, date, 0, sec);
  if(found == 1)
  {
    printf("%d%d/%d%d %d%d:%d%d",
    max_year[0],max_year[1],max_year[2],max_year[3],
    max_year[4],max_year[5],max_year[6],max_year[7]);
  }
  else
    printf("0");
  getch();
  return 0;
}

int isLeapYear(int y)
{
  if(y%4 == 0)
  {
    if(y%100 == 0)
    {
      if(y%400 == 0)
	return 1;
      else
	return 0;
    }
    else
      return 1;
  }
  return 0;
}

int check_validity(int date[], int n)
{
  int month;
  if(n>=2)
  {
    month = date[0]*10+date[1];
    if(!(month>=1 && month<=12))
      return 0;
  }
  if(n>=4)
  {
    int month_wise_days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    month_wise_days[1]+=isLeapYear(2018);

    day = date[2]*10+date[3];
    if(!(day>=1 && day<=month_wise_days[month-1]))
      return 0;
  }
  if(n>=6)
  {
    int hour = date[4]*10+date[5];
    if(!(hour>=0 && hour<=23))
      return 0;
  }
  if(n>=8)
  {
    int min = date[6]*10+date[7];
    if(!(min>=0 && min<=59))
      return 0;
  }
  return 1;
}

int is_max(int input[])
{
  int i;
  for(i=0;i<8;i++)
  {
    if(max_year[i]==input[i])
      continue;
    else if(max_year[i]>input[i])
      return 0;
    else
      return 1;
  }
  return 0;
}

void time(int input[],int date[], int nt,int sec[])
{
  int i;
  if(!check_validity(date, nt))
    return;
  if(nt == 8)
  {
    if(check_validity(date, nt))
    {
      found = 1;
      if(is_max(date))
      {
	for(i = 0; i < 8; i++)
	  max_year[i] = date[i];
      }
    }
    return;
  }

  for(i=0;i<12;i++)
  {
    if(sec[i] == 1)
      continue;

    date[nt]=input[i];
    sec[i]=1;
    time(input,date,nt+1,sec);
    sec[i]=0;
  }
}