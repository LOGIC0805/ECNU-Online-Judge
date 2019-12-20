#include<stdio.h>
int judge(int *a,int len)
{
	int i;
	for(i=0;i<len;++i){
		if(a[i]){
			return 1;
		}
	}
	return 0;
}

void half(int *a,int len)
{
	int i;
	int num=0;
	for(i=0;i<len;++i){
		num*=10;
		num+=a[i];
		a[i]=num/2;
		num%=2;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	
	int i;
	for(i=0;i<t;++i){
		int a[101]={0};
		int len=0;
		char c;
		while((c=getchar())!='\n'){
			a[len++]=c-'0';
		}
		
		int b[334]={0};
		int cnt=0;
		while(judge(a,len)){
			b[cnt++]=a[len-1]%2;
			half(a,len);
		}
		b[cnt]=a[len-1];
		
		int j;
		for(j=0;j<len;++j){
			a[j]=0;
		}
		len=1;
		
		for(j=0;j<cnt;++j){
			int k;
			for(k=0;k<len;++k){
				a[k]*=2;
			}
			for(k=0;k<len;++k){
				if(a[k]>9){
					a[k]-=10;
					++a[k+1];
				}
			}
			if(a[len]){
				++len;
			}
			a[0]+=b[j];
		}
		
		printf("case #%d:\n",i);
		for(j=len-1;j>=0;--j){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	
	return 0;
}
