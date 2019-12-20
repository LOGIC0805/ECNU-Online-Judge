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
		int j;
		int issum=0,maxsum=0,isneg=1;
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
			if(a[j]>=0){
				isneg=0;
			}
		}
		if(isneg==1){
			maxsum=a[0];
			for(j=0;j<n;j++){
				issum=a[j];
				if(issum>maxsum){
					maxsum=issum;
				}
			}
		}else{
			for(j=0;j<n;j++){
				issum+=a[j];
				if(issum<0){
					issum=0;
				}
				if(issum>maxsum){
					maxsum=issum;
				}
			}
		}
		printf("%d\n",maxsum);
	}
	
	return 0;
 } 
