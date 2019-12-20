#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b;
	scanf("%lld",&a);
	
	b=(long long)sqrt(a);
	if(b*b<a){
		b++;
	}
	
	printf("%lld",b);
	
	return 0;
 } 
