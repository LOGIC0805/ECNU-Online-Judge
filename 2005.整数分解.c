#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(~scanf("%d",&n)){
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				printf("%d %d\n",i,n/i);
				break;
			}
		}
	}
	
	return 0;
}
