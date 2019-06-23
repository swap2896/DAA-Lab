//DFS
#include<stdio.h>

int i,j,n,a[20][20],v[20]={0};
void dfs(int x)
{
	printf("%d\t",x);
	v[x]=1;
	for(i=1;i<=n;i++)
		if(a[x][i] && v[i]==0)
			dfs(i);
}

void main()
{
	printf("\nEnter No. of Nodes:");
	scanf("%d",&n);
	printf("\nEnter the Adjacency Matrix:-\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	for(i=1;i<=n;i++)
		if(v[i]==0)
			dfs(i);

	printf("\n");
}


