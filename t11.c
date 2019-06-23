//Dijkstra's
#include<stdio.h>

void main()
{
	int n,cost[10][10],i,j,k,d[10]={0},visited[10]={0},a,b,u,v,source;

	printf("\nEnter No. of Nodes: ");
	scanf("%d",&n);
	printf("\nEnter Weight Matrix:-\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);

	printf("\nEnter Source Node:");
	scanf("%d",&source);

	for(i=1;i<=n;i++)
		d[i]=cost[source][i];

	visited[source]=1;
	for(i=2;i<=n;i++)
	{
		int min=999;
		for(j=1;j<=n;j++)
		{
			if(visited[j]==0 && d[j]<min)
			{
				min=d[j];
				u=j;
			}
		}

		for(k=1;k<=n;k++)
		{
			if(cost[u][k]!=999 && visited[k]==0 && d[k]>d[u]+cost[u][k])
				d[k]=d[u]+cost[u][k];
		}
		
		visited[u]=1;
	}

	printf("\nSingle Source Shortest Path:-\n");
	for(i=1;i<=n;i++)
		if(i!=source)
			printf("\n%d -> %d: %d\n",source,i,d[i]);
}
		
	
