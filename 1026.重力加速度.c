#include<stdio.h>
#include<math.h>
#define g 9.8
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0){
		double high=1.75;
		if(n>3){
			high+=(n-3)*3+10;
		}else{
			high+=(n-1)*5;
		}
		
		double t;
		t=sqrt(2*high/g);
		printf("%.3f\n",t);
		
		scanf("%d",&n);
	}
	
	return 0;
 } 
