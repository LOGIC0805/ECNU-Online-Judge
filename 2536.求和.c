#include<stdio.h>
int main()
{
	unsigned long long a[13][2]={{2,1}};
	int i;
	for(i=1;i<13;i++){
		a[i][0]=a[i-1][0]+a[i-1][1];
		a[i][1]=a[i-1][0];
	}
	for(i=1;i<13;i++){
		a[i][0]=a[i-1][0]*a[i][1]+a[i-1][1]*a[i][0];
		a[i][1]=a[i-1][1]*a[i][1];
		unsigned long long x=a[i][0],y=a[i][1],p;
		while(x!=y){
			if(x<y){
				p=x;
				x=y;
				y=p;
			}
			x-=y;
		}
		a[i][0]/=x;
		a[i][1]/=y;
	}
	int t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		printf("%llu/%llu\n",a[n-1][0],a[n-1][1]);
	}
	
	return 0;
}
