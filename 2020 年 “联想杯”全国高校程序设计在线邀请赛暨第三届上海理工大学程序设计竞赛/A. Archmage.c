#include<stdio.h>
int main()
{
	long long t;
	scanf("%lld",&t);
	long long i;
	for(i=0;i<t;++i){
		long long n,m,x,y;
		scanf("%lld %lld %lld %lld",&n,&m,&x,&y);
		long long cnt=(n+(m-1)*y)/x;
		if(cnt>m){
			printf("%lld\n",m);
		}else{
			printf("%lld\n",cnt);
		}
	}
	return 0;
}
