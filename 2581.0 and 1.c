#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		int a=0,b=1;
		while(m/2){
			if(m%2){
				b++;
			}else{
				a++;
			}
			m/=2;
		}
		printf("%d %d\n",a,b);
	}
	
	return 0;
}
