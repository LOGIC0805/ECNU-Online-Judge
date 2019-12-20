#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char c[21];
	char d[21];
	int num;
	int len;
}character;

int cmp(const void *a,const void *b);
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		
		character ch[n];
		int j,p,q;
		for(j=0;j<n;j++){
			scanf("%s",ch[j].c);
			strcpy(ch[j].d,ch[j].c);
			ch[j].len=strlen(ch[j].c);
			ch[j].num=ch[j].len;
			for(p=0;p<ch[j].len-1;p++){
				for(q=p+1;q<ch[j].len;q++){
					if(ch[j].c[p]==0){
						break;
					}
					if(ch[j].c[p]==ch[j].c[q]){
						ch[j].num--;
						ch[j].c[q]=0;
					}
				}
			}
		}
		qsort(ch,n,sizeof(ch[0]),cmp);
		
		printf("case #%d:\n",i);
		for(j=0;j<n;j++){
			printf("%s\n",ch[j].d);
		}
	}
	
	return 0;
}

int cmp(const void *a,const void *b)
{
	character ca=*((character *)a);
	character cb=*((character *)b);
	if(ca.num==cb.num){
		return strcmp(ca.d,cb.d);
	}else{
		return cb.num-ca.num;
	}
}
