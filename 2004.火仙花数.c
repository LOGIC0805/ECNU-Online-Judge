#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c,d;
	int t=0;
	
	for(a=1;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				for(d=0;d<10;d++){
					if(a*1000+b*100+c*10+d==(int)(pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4))){
						printf("%d\n",a*1000+b*100+c*10+d);
					}
					t=1;
				}
			}
		}
	}
	
	if(t==0){
		printf("no answer");
	}
	
	return 0;
 } 
