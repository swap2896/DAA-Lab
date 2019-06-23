//Knapsack
#include<stdio.h>

int n,weights[10],values[10],v[10][10],w,i,j;

int max(int a,int b)
{
	return((a>b)?a:b);
}
int knapsack(int i,int j)
{
	if(v[i][j]<0)
	{
		if(j<weights[i])
			v[i][j]=knapsack(i-1,j);
		else
			v[i][j]=max(knapsack(i-1,j),knapsack(i-1,j-weights[i])+values[i]);
	}
	return v[i][j];
}



void main()
{
//	int n,weights[10],values[10],v[10][10],w,i,j;
	printf("\nEnter No. of Items: ");
	scanf("%d",&n);
	printf("\nEnter the Weights:-\n");
	for(i=1;i<=n;i++)
		scanf("%d",&weights[i]);
	printf("\nEnter the Values:-\n");
	for(i=1;i<=n;i++)
		scanf("%d",&values[i]);
	printf("\nEnter the Capacity: ");
	scanf("%d",&w);
	for(i=0;i<=n;i++)
		for(j=0;j<=w;j++)
		{
			if(i==0||j==0)
				v[i][j]=0;
			else
				v[i][j]=-1;
		}

	int maxval=knapsack(n,w);
	printf("\nMax Value=%d\n",maxval);
	printf("\nSelected Items are:-\n");
	int j=w;
	for(i=n;i>0;i--)
	{
		if(v[i][j]!=v[i-1][j])
		{
			printf("%d\t",i);
			j=j-weights[i];
		}
		

	}
	printf("\n");
}
