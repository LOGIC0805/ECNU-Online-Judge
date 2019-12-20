#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int cmp(const void *a,const void *b);
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	
	int i,j,k;
	for(i=0;i<t;i++){
		char a;
		char ch[500][500]={{0,0}};
		j=0,k=0;
		a=getchar();
		while(a!='\n'){
			if(isalpha(a)){
				ch[j][k++]=a;
			}else{
				k=0;
				if(ch[j][k]!=0){
					j++;
				}
			}
			a=getchar();
		}

		qsort(ch,j,sizeof(ch[0]),cmp);
		
		printf("case #%d:\n",i);
		for(k=0;k<j;k++){
			if(strcmp(ch[k],ch[k+1])){
				printf("%s ",ch[k]);
			}
		}
		printf("%s\n",ch[k]);
	}
	
	return 0;
}

int cmp(const void *a,const void *b)
{
	return strcmp((char *)a,(char *)b);
}
