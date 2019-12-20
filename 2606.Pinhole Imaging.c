#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int a,b,h;
		scanf("%d %d %d",&a,&b,&h);
		double x;
		x=h*1.0/a*b;
		printf("%.2f\n",x);
	}
	
	return 0;
}
