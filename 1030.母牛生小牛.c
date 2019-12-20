#include<stdio.h>
int main()
{
	int n;
	int a[51]={0,1,1,1,};
	int i;
	for(i=4;i<51;i++){
		a[i]=a[i-1]+a[i-3];
	}
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}else{
			printf("%d\n",a[n]);
		}
	}
	
	return 0;
}
