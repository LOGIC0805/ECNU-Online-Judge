#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	int k;
	for(k=0;k<t;++k){
		char ch[100];
		scanf("%s",ch);
		int len=strlen(ch);
		int i;
		for(i=0;i<len;++i){
			ch[i]-='a'-1;
			printf("%02d",ch[i]);
		}
		printf("\n");
	}
	
	return 0;
}
