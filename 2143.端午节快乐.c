#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		int p,q;
		p=a/b;
		q=p;
		p+=q/5*2;
		q%=5;
		p+=q/3;
		printf("%d\n",p);
	}
	
	return 0;
}
