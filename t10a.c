//Prim's
#include<stdio.h>

void main()
{
	int n,a[10][10],i,j;
	printf("\nEnter No. of Nodes: ");
	scanf("%d",&n);
	printf("\nEnter Weight Matrix:-\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);

	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]==0)
				a[i][j]=999;


	int ne=1,u,v,visited[10]={0},mincost=0;
	visited[1]=1;
	while(ne<n)
	{
		int min=999;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(a[i][j]<min && visited[i]==1)
				{
					u=i;
					v=j;
					min=a[i][j];
				}

		if(visited[u]==0||visited[v]==0)
		{
			visited[v]=1;
			mincost+=min;
			printf("\nEdge %d: %d -> %d \n",ne++,u,v);
		}

		a[u][v]=a[v][u]=999;
	}

	printf("\nTotal Cost=%d\n",mincost);
}
