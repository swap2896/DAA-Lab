//Floyd
#include<stdio.h>

int min(int a,int b)
{
	return((a>b)?b:a);
}
void floyd(int a[10][10],int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=min((a[i][j]),(a[i][k]+a[k][j]));
}

void main()
{
	int a[10][10],n,i,j;
	printf("\nEnter No. of Nodes: ");
	scanf("%d",&n);
	printf("\nEnter Adjacency Matrix:-\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	floyd(a,n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
