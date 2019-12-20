#include<stdio.h>
int main()
{
	int a[30][30]={0}; 
	int i,j;
	for(i=0;i<30;i++){
		a[i][0]=a[i][i]=1;
	}
	for(i=2;i<30;i++){
		for(j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	
	int n;
	scanf("%d",&n);
	while(n!=0){
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d",&n);
	}
	
	return 0;
 } 
