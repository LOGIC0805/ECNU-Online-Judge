#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x,y,z;
	int i;
	double min,k;
	scanf("%d %d %d",&x,&y,&z);
	min=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	for(i=0;i<n-1;i++){
		scanf("%d %d %d",&x,&y,&z);
		k=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
		if(k<min){
			min=k;
		}
	}
	printf("%.3lf",min);
	return 0;
}