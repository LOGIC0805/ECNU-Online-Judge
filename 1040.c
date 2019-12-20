#include<stdio.h>
#include<stdlib.h>
typedef struct{
	long long num;
	long long first;
}datapnt;

int cmp(const void *a,const void *b)
{
	datapnt da=(*(datapnt *)a);
	datapnt db=(*(datapnt *)b);
	if(da.first==db.first){
		return da.num>db.num?1:-1;
	}else{
		return da.first<db.first?1:-1;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;++i){
		int n;
		scanf("%d",&n);
		int j;
		datapnt data[n];
		for(j=0;j<n;++j){
			scanf("%lld",&data[j].num);
			data[j].first=data[j].num;
			if(data[j].first<0){
				data[j].first*=-1;
			}
			while(data[j].first/10!=0){
				data[j].first/=10;
			}
		}
		qsort(data,n,sizeof(data[0]),cmp);
		printf("case #%d:\n",i);
		for(j=0;j<n;++j){
			printf("%lld ",data[j].num);
		}
		printf("\n");
	}
	
	return 0;
}
