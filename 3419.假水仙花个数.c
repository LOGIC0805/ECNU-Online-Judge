#include<stdio.h>
#include<math.h>

int main()
{
	int n=0;
	for(;n<10000;n++){
		int a=1;
		int b;
		b=n;
		while(b%10!=b){
			a++;
			b/=10;
		}
		
		int x,y,z,t;
		
		switch(a){
			case 1:		if(n==pow(n,4)){
						printf("%d\n",n);
			            }
					    break;
			
			case 2:		x=n%10;
				   		y=n/10;		
				   		if(n==pow(x,4)+pow(y,4)){
				   		printf("%d\n",n);
			            }
						break;
			
			case 3:		x=n%10;
						y=(n/10)%10;
						z=n/100;
						if(n==pow(x,4)+pow(y,4)+pow(z,4)){
				   		printf("%d\n",n);
			            }
						break;
						
			case 4:		x=n%10;			
						y=(n/10)%10;
						z=(n/100)%10;
						t=n/1000;
						if(n==pow(x,4)+pow(y,4)+pow(z,4)+pow(t,4)){
				   		printf("%d\n",n);
			            }
						break;
						
		}
		
	}
	
	return 0;
 } 
