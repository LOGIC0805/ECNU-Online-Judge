#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int dx=abs(x2-x1);
	int dy=abs(y2-y1);
	if((dx+dy)%2==0){
		printf("Win");
	}else{
		printf("Lose");
	}
	
	return 0;
}
