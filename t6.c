//Horspool
#include<stdio.h>
#include<string.h>

int table[200];
void shifttable(char p[],int m)
{
	int i;
	for(i=0;i<200;i++)
		table[i]=m;
	for(i=0;i<m-1;i++)
		table[p[i]]=m-1-i;
}

int horspool(char t[],int n,char p[],int m)
{
	shifttable(p,m);
	int i=m-1;
	while(i<n)
	{
		int k=0;
		while((k<m) && (p[m-1-k]==t[i-k]))
			k++;
		if(k==m)
			return (i-m+1);
		else
			i=i+table[t[i]];
	}
	return -1;
}

void main()
{
	char t[80],p[80];
	int n,m;
	printf("\nEnter Text:");
	gets(t);
	printf("\nEnter Pattern:");
	gets(p);
	m=strlen(p);
	n=strlen(t);
	int pos=horspool(t,n,p,m);
	if(pos==-1)
		printf("\nNot Found\n");
	else
		printf("\nFound at :%d\n",pos+1);
}
