//N-Queens
#include<stdio.h>

void printsol(int a[],int n)
{
	char c[10][10];
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			c[i][j]='X';
	for(i=1;i<=n;i++)
		c[i][a[i]]='Q';

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%c\t",c[i][j]);
		printf("\n");
	}
}


int place(int a[],int k)
{
	int i;
	for(i=1;i<k;i++)
		if((a[i]==a[k])||(abs(a[i]-a[k])==abs(i-k)))
			return 0;
	return 1;
}

void nqueen(int n)
{
	int k=1,count=0,a[10];
	a[k]=0;
	while(k!=0)
	{
		a[k]++;
		while(a[k]<=n && !place(a,k))
			a[k]++;
		if(a[k]<=n)
		{
			if(k==n)
			{
				printf("\nSolution %d\n",++count);
				printsol(a,n);
			}
			else
			{
				k++;
				a[k]=0;
			}
		}
		else
			k--;
	}
}

void main()
{
	int n;
	printf("\nEnter No. of Queens: ");
	scanf("%d",&n);
	nqueen(n);
	printf("\n");
}
