#include<stdio.h>
int main()
{
	double a;
	char b;
	scanf("%lf%c",&a,&b);
	
	double c;
	if(b=='c'){
		c=a*9/5+32;
		printf("%.2ff",c);
	}else{
		c=(a-32)*5/9;
		printf("%.2fc",c);
	}
	
	return 0;
 } 
