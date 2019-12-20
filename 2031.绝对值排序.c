#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		int i,j,swap;
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		for(i=0; i<n-1; i++)
			for(j=0; j<(n-i-1); j++)
				if(abs(a[j+1]) < abs(a[j])){
					swap = a[j+1];
					a[j+1] = a[j];
					a[j] = swap;
				}
			
		for(i=0; i<n-1; i++){
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	} 
	return 0; 
 } 

