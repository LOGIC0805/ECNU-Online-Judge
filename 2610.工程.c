#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	int m,k;
	int i;
	for(i=0;i<t;i++){
		scanf("%d %d",&m,&k);
		int x=0;
		int a[m];
		int j;
		for(j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		for(j=0;j<k;j++){
			x+=a[j];
		}
		printf("%d\n",x);
	}
	
	return 0;
}
