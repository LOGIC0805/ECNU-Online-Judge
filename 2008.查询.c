#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	
	int i;
	int a[m];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	
	int n;
	scanf("%d",&n);
	
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	int t,j;
	for(i=0;i<n;i++){
		t=0;
		for(j=0;j<m;j++){
			if(b[i]==a[j]){
				t=1;
				break;
			}
		}
		if(t==1){
			printf("yes!\n");
		}else{
			printf("no!\n");
		}
	}
	
	return 0;
}
