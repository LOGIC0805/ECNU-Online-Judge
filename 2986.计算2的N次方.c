#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		printf("case #%d:\n%llu\n",i,(unsigned long long)pow(2,n));
	} 
	
	return 0;
}
