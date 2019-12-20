#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		long long n;
		int r;
		char a[1000000];
		scanf("%lld %d",&n,&r);
		int p=1;
		if(n<0){
			p=0;
			n*=-1;
		}
		int i=0;
		while(n%r!=n){
			a[i]=n%r+'0';
			if(a[i]>'9'){
				a[i]+=7;
			}
			n/=r;
			i++;
		}
		a[i]=n+'0';
		if(a[i]>'9'){
			a[i]+=7;
		}
		int m;
		m=strlen(a);
		if(p==0){
			printf("-");
		}
		for(i=m-1;i>=0;i--){
			printf("%c",a[i]);
			a[i]=0;
		}
		printf("\n");
	}
	
	return 0;
}
