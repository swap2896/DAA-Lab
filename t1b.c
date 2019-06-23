//Selection Sort
#include<stdio.h>
#include<time.h>

void main()
{
	int n,i,j;
	printf("\nEnter No. of Elements:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the Elements:-\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}

		
	printf("\nSorted Elements are:-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);

	printf("\n");
}
