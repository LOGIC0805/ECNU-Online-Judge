#include<stdio.h>
int main()
{
	int m,n,k;
	scanf("%d %d %d",&m,&n,&k);
	int i=1,j=1;
	while(k--){
		printf("%d %d\n",i++,j++);
		if(i>m){
			i=1;
		}
		if(j>n){
			j=1;
		}
	}
	
	return 0;
}
