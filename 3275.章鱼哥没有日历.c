#include<stdio.h>
int main()
{
	int y,m,d;
	scanf("%d-%d-%d",&y,&m,&d);
	
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	int x=0;
	
	if(m<=12&&m>=1){
		m--;
		for(i=0;i<m;i++){
			x+=a[i];
		}
		
		if(d>=1&&d<=a[m]){
			printf("%d",x+d);
		}else{
			printf("-1");
		}
	}else{
		printf("-1");
	}
	
	return 0;
 } 
