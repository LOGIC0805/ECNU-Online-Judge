#include<stdio.h>
int main()
{
	int a,n;
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&n);
		unsigned long long x=1;
		int j;
		for(j=0;j<n;j++){
			x*=a;
		}
		printf("case #%d:\n%llu\n",i,x); 
	}
	
	return 0;
}
