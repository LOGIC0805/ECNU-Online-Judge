#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	while(~scanf("%d %d",&a,&b)){
		printf("%.3f\n",sqrt(pow(a,2)+pow(b,2)));
	}
	
	return 0;
}
