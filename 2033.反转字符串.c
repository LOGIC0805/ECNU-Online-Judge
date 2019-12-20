#include<stdio.h>
#include<string.h>
int main()
{
	char a[10002];
	while(fgets(a,10002,stdin)){
		int n=strlen(a);
		int i;
		for(i=n-2;i>=0;i--){
			putchar(a[i]);
		}
		printf("\n");
	}
	
	return 0;
}
