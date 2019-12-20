#include<stdio.h>
#include<stdlib.h> 

int compare(const void *a,const void *b);

int main()
{
	int m;
	scanf("%d",&m);
	
	int a[m];
	int i;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	
	qsort(a,m,sizeof(int),compare);
	
	int n;
	scanf("%d",&n);
	
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",a[b[i]-1]);
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
