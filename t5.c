//Heap Sort
#include<stdio.h>

void heapify(int h[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	{
		int k=i;
		int v=h[k];
		int heap=0;
		while(heap==0 && (2*k)<=n)
		{
			int j=2*k;
			if(j<n && h[j+1]>h[j])
				j++;
			if(h[j]>h[k])
			{
				h[k]=h[j];
				k=j;
			}
			else
				heap=1;

			h[k]=v;
		}
	}			
		
		
}

void main()
{
	int n,i,j;
	printf("\nEnter No. of Elements:");
	scanf("%d",&n);
	int a[n+1];
	printf("\nEnter the Elements:-\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	heapify(a,n);

	for(i=n;i>=1;i--)
	{
		int t=a[i];
		a[i]=a[1];
		a[1]=t;

		heapify(a,i-1);
	}

	printf("\nSorted Elements:-\n");
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
