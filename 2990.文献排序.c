#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct{
	char a[201];
	char b[201];
	int len;
}textsort;
int cmp(const void *a,const void *b);

int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		getchar();
		
		textsort text[n];
		int j,k;
		for(j=0;j<n;j++){
			gets(text[j].a);
			text[j].len=strlen(text[j].a);
			strcpy(text[j].b,text[j].a);
			for(k=0;k<text[j].len;k++){
				text[j].a[k]=tolower(text[j].a[k]);
			}
		}
		qsort(text,n,sizeof(text[0]),cmp);
		
		printf("case #%d:\n",i);
		for(j=0;j<n;j++){
			puts(text[j].b);
		}
	}
	
	return 0;
}

int cmp(const void *a,const void *b)
{
	textsort ta=*((textsort *)a);
	textsort tb=*((textsort *)b);
	return strcmp(ta.a,tb.a);
}
