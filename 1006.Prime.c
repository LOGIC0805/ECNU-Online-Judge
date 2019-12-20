#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	int i,j;
	int n=0,t=1,p;
	while(~scanf("%d %d",&a,&b)){
		n=0;
		if(a==1){
			a++;
		}
		if(a==2){
			n++;
			a++;
		}
	for(i=a;i<=b;i++){
		for(j=2;j<sqrt(i)+1;j++){
			t=1;
			if(i%j==0){
				t=0;
				break;
				}
			}
		if(t==1){
			n++;
			}
		}
		printf("%d\n",n);
	}
	
	return 0;
}
