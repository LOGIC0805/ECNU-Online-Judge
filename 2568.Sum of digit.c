#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		int a,b,c;
		scanf("%d %d",&a,&b);
		c=a+b;
		int m=1;
		while(c/=10){
			m++;
		}
		printf("%d\n",m);
	}
	
	return 0;
}
