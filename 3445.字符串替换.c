#include<stdio.h>
int main()
{
	char s[241]={0},x[81]={0},y[81]={0};
	scanf("%s %s %s",&s,&x,&y);
	
	int i,j;
	int p=0;
	
	int t=0,m=0,n=0;
	for(i=0;i<81;i++){
		if(s[i]!=0){
			t++;
		}
	}
	
	for(i=0;i<81;i++){
		if(x[i]!=0){
			m++;
		}
	}
	
	for(i=0;i<81;i++){
		if(y[i]!=0){
			n++;
		}
	}
	
	for(i=0;i<t;i++){
		p=0;
		if(s[i]==x[0]){
			for(j=0;j<m;i++,j++){
				p=0;
				if(s[i]==x[j]){
					p=1;
				}
			}
		}
		if(p==1){
		for(i-=j,j=0;j<m;i++,j++){
			s[i]=0;
			}
		i--;
		}
	}
		for(i=0;i<t;i++){
			if(s[i]!=0){
				printf("%c",s[i]);
			}else{
				for(j=0;j<n;j++){
					printf("%c",y[j]);
				}
				i+=m;
				i--;
			}
		}
	
	return 0;
}
