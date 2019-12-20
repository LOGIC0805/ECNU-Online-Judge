#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n)){
		if(n<3){
			switch(n){
				case 0:
					printf("1\n");
					break;
				case 1:
					printf("0\n");
					break;
				case 2:
					printf("8\n");
			}
		}else{
			int i;
			if(n%2==0){
				for(i=0;i<n/2;i++){
					printf("8");
				}
				printf("\n");
			}else{
				printf("4");
				for(i=0;i<n/2;i++){
					printf("8");
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}
