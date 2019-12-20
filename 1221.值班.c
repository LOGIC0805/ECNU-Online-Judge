#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i,j;
	int t;
	int flag=1;
	int a[30]={1,};
	for(i=1;i<30;i++){
		a[i]=a[i-1]+1;
	}
	
	for(i=0;i<n;i++){
		scanf("%d",&t);
		while(t!=-1){
			a[t-1]=0;
			scanf("%d",&t);
		}
	}
	
	for(i=0;i<30;i++){
		if(a[i]!=0){
			flag=0;
			break;
		}
	}
	
	if(flag==1){
		printf("yes");
	}else{
		printf("no");
	}
	
	return 0;
}
