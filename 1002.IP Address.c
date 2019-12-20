#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	
	int i;
	for(i=0;i<n;i++){
		int j,t;
		int a[8];
		int x=0;
		for(j=0;j<4;j++){
			x=0;
			for(t=0;t<8;t++){
				a[t]=(getchar()-'0');
				x+=a[t]*(int)pow(2,7-t);
			}
			printf("%d",x);
			if(j<3){
				printf(".");
			}
		}
		printf("\n");
		if(i<n-1){
			getchar();
		}
	}
	
	return 0;
}
