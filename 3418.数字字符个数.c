#include<stdio.h>
int main()
{
	char a;
	int n=0;
	while((a=getchar())!='\n'){
		if(a>='0'&&a<='9'){
			n++;
		}
	}
	
	printf("%d",n);
	
	return 0;
 } 
