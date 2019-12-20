#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	char a[2001],b[101];
	char *c;
	int lena,lenb;
	int i,j;
	for(i=0;i<t;i++){
		scanf("%s %s",a,b);
		lena=strlen(a);
		lenb=strlen(b);
		
		while((c=strstr(a,b))!=NULL){
			for(j=0;j<lenb;j++){
				*(c+j)=1;
			}
		}
		
		printf("case #%d:\n",i);
		for(j=0;j<lena-1;j++){
			if(a[j]!=1){
				printf("%c",a[j]);
			}
		}
		if(a[j]!=1){
			printf("%c",a[j]);
		}
		printf("\n");
	}
	
	return 0;
}
