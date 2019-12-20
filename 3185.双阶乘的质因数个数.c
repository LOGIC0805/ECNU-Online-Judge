#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		int a,b,t;
		int x=0;
		
		scanf("%d %d",&a,&b);
		
		for(;a>1;a-=2){
			t=a;
			while(t%b==0){
				x++;
				t/=b;
			}
		} 
		
		printf("case #%d:\n",i);
		printf("%d\n",x);
	}
	
	return 0;
 } 
