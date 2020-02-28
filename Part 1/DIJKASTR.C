#include<stdio.h>
#include<conio.h>
#define INF 999
int p[10];
void dij(int n,int v,int cost[10][10],int dist[])
{
  int i,u,count,w,flag[10],min;
  for(i=1;i<=n;i++)
  {
    flag[i]=0;
    dist[i]=cost[v][i];
    p[i]=1;
    dist[v]=0;
  }
  count=1;
  while(count<=n)
  {
    min=99;
    for(w=1;w<=n;w++)
      if(dist[w]<min && !flag[w])
      {
	min=dist[w];
	u=w;
      }

    flag[u]=1;
    count++;
    for(w=1;w<=n;w++)
      if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
      {
	p[w]=u;
	dist[w]=dist[u]+cost[u][w];
      }
  }
}

void main()
{
  int n,v,i,j,cost[10][10],dist[10];
  clrscr();

  printf("Enter the No. of Nodes: ");
  scanf("%d",&n);

  printf("Enter the Cost Matrix: ");

  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
      scanf("%d",&cost[i][j]);
      if(cost[i][j]==0)
	cost[i][j]=INF;
    }

  printf("Enter Source Matrix: ");
  scanf("%d",&v);
  dij(n,v,cost,dist);
  printf("\nShortest Path: \n");
  for(i=1;i<=n;i++)
  {
    if(i!=v)
      printf("%d->%d,Cost: %d\n",v,i,dist[i]);
  }
  for(i=1;i<=n;i++)
  printf("\n p[%d]: %d",i,p[i]);

  getch();
}