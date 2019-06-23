//Quick Sort
#include<stdio.h>

int partition(int a[],int l,int r)
{	int i=l+1;
	int j=r;
	int p=a[l];
	while(i<=j)
	{
		while(a[i]<=p && i<=r)
			i++;
		while(a[j]>p && j>=l)
			j--;
		if(i<j)
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	int t=a[j];
	a[j]=a[l];
	a[l]=t;

	return j;
}

void quicksort(int a[],int l,int r)
{
	int s;
	if(l<r)
	{
		s=partition(a,l,r);
		quicksort(a,l,s-1);
		quicksort(a,s+1,r);
	}
}

void main()
{
	int n,i,j;
	printf("\nEnter No. of Elements:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the Elements:-\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	quicksort(a,0,n-1);
		
	printf("\nSorted Elements are:-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	printf("\n");
}
