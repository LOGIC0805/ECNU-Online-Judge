#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	
	int t;
	for(t=0;t<n;++t){
		char c;
		int x=0,y=0;
		int num;
		while((c=getchar())!='\n'){
			num=(int)c;
			if(num<0){
				num+=256;
			}
			int a[8]={0};
			int i=0;
			while(num/2){
				a[i++]=num%2;
				num/=2;
			}
			a[i]=num;
			
			for(i=0;i<8;++i){
				++y;
				if(a[i]){
					++x;
				}
			}
		}
		
		int p=x,q=y;
		while(p!=q){
			q-=p;
			if(p>q){
				num=p;
				p=q;
				q=num;
			}
		}
		printf("%d/%d\n",x/p,y/p);
	}
	
	return 0;
}
