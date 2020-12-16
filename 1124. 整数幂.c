#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d %d",&a,&b,&c);
	while(a!=0&&b!=0&&c!=0){
		int i;
		int num=1;
		for(i=0;i<b;++i){
			num*=a;
			num%=c;
		}
		printf("%d\n",num);
		scanf("%d %d %d",&a,&b,&c);
	}
	
	return 0;
}
