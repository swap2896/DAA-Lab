//BFS
#include<stdio.h>

int queue[20],front=-1,rear=-1;
int a[20][20],v[20]={0};
int n,i,j;

void insert(int x)
{
	if(front==-1)
		front++;
	queue[++rear]=x;
}

int isempty()
{
	if(rear==-1)
		return 1;
	else
		return 0;
}

void delqueue()
{
	printf("%d\t",queue[front]);
	if(front==rear)
		front=rear=-1;
	else
		front++;
}

void bfs(int x)
{
	
	//printf("%d\t",x);
	v[x]=1;
	insert(x);
	while(!isempty())
	{
		int y=queue[front];
		for(i=1;i<=n;i++)
			if(a[y][i]==1 && v[i]==0)
			{
				insert(i);
				v[i]=1;
			}
		delqueue();
	}

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
			bfs(i);

	printf("\n");
}
