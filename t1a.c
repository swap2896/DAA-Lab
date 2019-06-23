//Bubble Sort
#include<stdio.h>
#include<time.h>

void main()
{
	int n,i,j;
	clock_t start,end;
	printf("\nEnter No. of Elements:");
	scanf("%d",&n);
	int a[n];
	//printf("\nEnter the Elements:-\n");
	for(i=0;i<n;i++)
		//scanf("%d",&a[i]);
		a[i]=rand();
	start=clock();
	for(i=0;i<n-1;i++)
	{
		int f=1;
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				f=0;
			}
		if(f)
			break;
	}
	end=clock();
		
	printf("\nSorted Elements are:-\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


	double tt=(double)(end-start)/CLOCKS_PER_SEC;

	printf("\n\nTotal Time=%lf\n\n",tt);
}
