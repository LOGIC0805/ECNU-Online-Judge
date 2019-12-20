#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int a,b,i,t;
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		
		while(a!=b){
			if(a<b){
			t=a;
			a=b;
			b=t;
			}
			a-=b;
		}
			
		printf("case #%d:\n",i);
		printf("%d\n",a);
	}
	
	return 0;
 } 
