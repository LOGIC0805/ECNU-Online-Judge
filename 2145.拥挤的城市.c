#include<stdio.h>
#include<math.h> 
int main()
{
	int n;
	scanf("%d",&n);
	
	int h,i;
	for(i=0;i<n;i++){
		scanf("%d",&h);
		int t=0;
		do{
			t+=(int)pow(h*2,2);
		}while(--h);
		printf("%d\n",t);
	}
	
	return 0;
}
