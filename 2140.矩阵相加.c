#include<stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	
	int i;
	for(i=0;i<c;i++){
		int n,m;
		scanf("%d %d",&n,&m);
		int a[n][m],b[n][m];
		int j,t;
		for(j=0;j<n;j++){
			for(t=0;t<m;t++){
				scanf("%d",&a[j][t]);
			}
		}
		for(j=0;j<n;j++){
			for(t=0;t<m;t++){
				scanf("%d",&b[j][t]);
			}
		}
		
		for(j=0;j<n;j++){
			for(t=0;t<m;t++){
				printf("%d ",a[j][t]+b[j][t]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
