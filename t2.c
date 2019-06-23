//Merge Sort
#include<stdio.h>

void merge(int a[],int low,int mid,int high)
{
	int i=low,j=mid+1,k=low;
	int b[100];
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];

		else
			b[k++]=a[j++];
	}

	while(i<=mid)
		b[k++]=a[i++];
	while(j<=high)
		b[k++]=a[j++];

	for(k=low;k<=high;k++)
		a[k]=b[k];
}

void mergesort(int a[],int low,int high)
{
	if(low>=high)
		return;
	int mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
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

	mergesort(a,0,n-1);
		
	printf("\nSorted Elements are:-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	printf("\n");
}
