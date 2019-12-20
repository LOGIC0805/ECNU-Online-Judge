#include<stdio.h>

int main()
{
	int a,b,c,d;	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	long long x,y;
	x=a*d+b*c;
	y=b*d;
	
	long long m,n,t;
	m=x;
	n=y;
	while(x!=y){
		if(x<y){
			t=x;
			x=y;
			y=t;
		}
		x-=y;
	}
	
	if(x!=1){
		m/=x;
		n/=x;
		printf("%d/%d+%d/%d=%lld/%lld.",a,b,c,d,m,n);
	}else{
		printf("%d/%d+%d/%d=%lld/%lld.",a,b,c,d,m,n);
	}
	
	return 0;
 } 

