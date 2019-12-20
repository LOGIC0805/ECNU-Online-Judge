#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	char num[12];
	int s;
	int text[10];
	int sum;
}student;

int cmp(const void *a,const void *b){
	student sa=*((student *)a);
	student sb=*((student *)b);
	if(sa.sum==sb.sum){
		return strcmp(sa.num,sb.num);
	}else{
		return sb.sum-sa.sum;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	
	int k;
	for(k=0;k<t;++k){
		int n,m,g;
		scanf("%d %d %d",&n,&m,&g);
		
		int a[m];
		int i;
		for(i=0;i<m;++i){
			scanf("%d",&a[i]);
		}
		student stu[n];
		int j;
		for(i=0;i<n;++i){
			stu[i].sum=0;
			for(j=0;j<10;++j){
				stu[i].text[j]=0;
			}
		}
		for(i=0;i<n;++i){
			scanf("%s %d",stu[i].num,&stu[i].s);
			for(j=0;j<stu[i].s;++j){
				int b;
				scanf("%d",&b);
				stu[i].text[b-1]=1;
			}
		}
		
		for(i=0;i<n;++i){
			for(j=0;j<10;++j){
				if(stu[i].text[j]){
					stu[i].sum+=a[j];
				}
			}
		}
		qsort(stu,n,sizeof(stu[0]),cmp);
		
		int cnt=0;
		for(i=0;i<n;++i){
			if(stu[i].sum>=g){
				++cnt;
			}
		}
		printf("case #%d:\n%d\n",k,cnt);
		for(i=0;i<cnt;++i){
			printf("%s %d\n",stu[i].num,stu[i].sum);
		}
	}
	
	return 0;
}
