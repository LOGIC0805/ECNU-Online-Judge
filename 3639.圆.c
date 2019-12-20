#include<stdio.h>
#include<math.h>
#define pi 3.1415926
#define k 2
int main()
{
	unsigned long long r;
	scanf("%llu",&r);
	double squ;
	double a,b;
	squ=pow(r,2);
	a=pi*squ;
	b=k*squ;
	printf("%lf\n%lf\n",a,b);
	
	return 0;
}
