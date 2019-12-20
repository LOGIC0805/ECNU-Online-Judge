#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int m=n;
		while(m/3){
			n+=m/3;
			m=m/3+m%3;
		}
		printf("%d\n",n);
	}
	
	return 0;
}
