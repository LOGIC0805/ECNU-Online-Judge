#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	int i;
	long long t=1;
	for(i=0;i<b;i++){
		t*=a;
	}
	
	printf("%lld",t);
	
	return 0;
 } 
