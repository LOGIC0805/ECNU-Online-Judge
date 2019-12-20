#include<stdio.h>
int main()
{
	int h,m,s;
	scanf("%d",&s);
	h=s/3600;
	m=s/60-h*60;
	s=s-(h*3600+m*60);
	if(h!=0){
		printf("%d%02d%02d\n",h,m,s);
	}else{
		if(m!=0){
			printf("%d%02d\n",m,s);
		}else{
			if(s!=0){
				printf("%d\n",s);
			}else{
				printf("0\n");
			}
		}
	}
	
	return 0;
}
