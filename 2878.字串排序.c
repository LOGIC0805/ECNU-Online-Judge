#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct {
	char s[31];
	int num;
}ch;

int compare(const void *a,const void *b);
int main()
{
	char jdg[11];
	strcpy(jdg,"1234567890");
	ch all[100],numin[100],numout[100];
	int n=0,nin=0,nout=0;
	int p=0;
	while(~scanf("%s",all[n].s)){
		if(strpbrk(all[n].s,jdg)){
			strcpy(numin[nin].s,all[n].s);
			numin[nin].num=0;
			while(numin[nin].s[p]!='\0'){
				if(isdigit(numin[nin].s[p])){
					numin[nin].num*=10;
					numin[nin].num+=(numin[nin].s[p]-'0');
				}
				p++;
			}
			p=0;
			nin++;
		}else{
			strcpy(numout[nout].s,all[n].s);
			numout[nout].num=0;
			nout++;
		}
		n++;
	}
	qsort(numin,nin,sizeof(numin[0]),compare);
	qsort(numout,nout,sizeof(numout[0]),compare);
	
	for(p=0;p<nout;p++){
		printf("%s ",numout[p].s);
	}
	for(p=0;p<nin;p++){
		printf("%s ",numin[p].s);
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	ch ca=*((ch *)a);
	ch cb=*((ch *)b);
	if(ca.num==cb.num){
		return strcmp(ca.s,cb.s);
	}else{
		return ca.num-cb.num;
	}
}
