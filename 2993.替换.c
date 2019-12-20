#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		
		int a[n];
		int j,k;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		
		int cnt=0,flag=0;
		while(flag!=n){
			flag=0;
			for(j=0;j<n;j++){
				cnt=0;
				for(k=j+1;k<n;k++){
					if(a[j]>a[k]){
						cnt++;
					}
				}
				if(a[j]==cnt){
					flag++;
				}else{
					a[j]=cnt;
				}
			}
		}
		
		printf("case #%d:\n",i);
		for(j=0;j<n-1;j++){
			printf("%d ",a[j]);
		}
		printf("%d\n",a[j]);
	}
	
	return 0;
}
