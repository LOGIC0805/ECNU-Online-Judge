#include<stdio.h>
int main()
{
	int a,b,c;
	while(~scanf("%d %d %d",&a,&b,&c)){
		int x=(a+b)/c;
		int t=(a+b)%c;
		int sum=x;
		while((x+=t)>=c){
			sum+=x/c;
			t=x%c;
			x/=c;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
