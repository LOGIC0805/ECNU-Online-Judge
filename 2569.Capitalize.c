#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[1000];
	gets(a);
	int m=strlen(a);
	
	int i;
	for(i=0;i<m;i++){
		if(islower(a[i])){
			putchar(toupper(a[i]));
		}else{
			putchar(a[i]);
		}
	}
	
	return 0;
}
