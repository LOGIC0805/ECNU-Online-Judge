#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct found{
	int num;
	int cnt;
	char res[6];
};

int compare1(const void *a,const void *b);
int compare2(const void *a,const void *b);
int compare3(const void *a,const void *b);

int main()
{
	int m;
	scanf("%d",&m);
	int a[m];
	int i;
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,m,sizeof(int),compare1);
	
	int n;
	scanf("%d",&n);
	struct found find[n];
	for(i=0;i<n;i++){
		scanf("%d",&find[i].num);
		find[i].cnt=i;
	}
	qsort(find,n,sizeof(struct found),compare2);
	
	int t=0,j;
	for(j=0;j<n;j++){
		for(i=t;i<m;i++){
			if(find[j].num==a[i]){
				strcpy(find[j].res,"yes!\n");
				t=i;
				break;
			}else if(find[j].num<a[i]||find[j].num>a[m-1]){
				strcpy(find[j].res,"no!\n");
				t=i;
				break;
			}
		}
	}
	qsort(find,n,sizeof(struct found),compare3);
	
	if(m==0){
		for(i=0;i<n;i++){
			printf("no!\n");
		}
	}else{
		for(i=0;i<n;i++){
			printf("%s",find[i].res);
		}
	}
	
	return 0;
}

int compare1(const void *a,const void *b)
{
	return (*(int *)a-*(int *)b);
}

int compare2(const void *a,const void *b)
{
	struct found ma= *((struct found *)a);
	struct found mb= *((struct found *)b);
	return ma.num-mb.num;
}

int compare3(const void *a,const void *b)
{
	struct found ma= *((struct found *)a);
	struct found mb= *((struct found *)b);
	return ma.cnt-mb.cnt;
}
