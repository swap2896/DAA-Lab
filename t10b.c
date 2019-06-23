//Kruskal
#include<stdio.h>

void main()
{
	int n,cost[10][10],ne=1,a,b,u,v,mincost=0,i,j,parent[10]={0};

	printf("\nEnter No. of Nodes: ");
	scanf("%d",&n);
	printf("\nEnter Weight Matrix:-\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&cost[i][j]);

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(cost[i][j]==0)
				cost[i][j]=999;
	
	while(ne<n)
	{
		int min=999;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(cost[i][j]<min)
				{
					a=u=i;
					b=v=j;
					min=cost[i][j];
				}
		while(parent[u])
			u=parent[u];
		while(parent[v])
			v=parent[v];
		if(u!=v)
		{
			printf("\nEdge %d: %d -> %d\n",ne++,a,b);
			parent[v]=u;
			mincost+=min;
		}

		cost[a][b]=cost[b][a]=999;
	}
	
	printf("\nMinimum Cost =%d\n",mincost);
}
