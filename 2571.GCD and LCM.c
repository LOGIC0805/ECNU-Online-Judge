#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		int a,b,t;
		scanf("%d %d",&a,&b);
		int p=a,q=b;
		while(a!=b){
			if(a<b){
			t=a;
			a=b;
			b=t;
			}
			a-=b;
		}
		p=p/a*q;
		printf("%d %d\n",a,p);
	}
	
	return 0;
}
