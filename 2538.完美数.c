#include<stdio.h>
int main()
{
	int i;
	for(i=4;i<=4000;i++){
		int n=i/2+1;
		int t=1,p=0,j;
		int a[4000];
		for(j=2;j<n;j++){
			if(i%j==0){
				t+=j;
				a[p++]=j;
			}
		}
		int m=p;
		if(i==t){
			printf("%d its factors are 1 ",i);
			for(p=0;p<m-1;p++){
				printf("%d ",a[p]);
			}
			printf("%d\n",a[p]);
		}
	}
	
	return 0;
}
