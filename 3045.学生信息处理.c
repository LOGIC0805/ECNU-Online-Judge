#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b);

struct student{
	long long num;
	char name[10];
	int ch;
	int ma;
	int en;
	int sum; 
};

int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		
		struct student stu[n];
		int j;
		for(j=0;j<n;j++){
			scanf("%lld %s %d %d %d",&stu[j].num,stu[j].name,&stu[j].ch,&stu[j].ma,&stu[j].en);
			stu[j].sum=stu[j].ch+stu[j].ma+stu[j].en;
		}
		qsort(stu,n,sizeof(struct student),compare);
		
		printf("case #%d:\n",i);
		for(j=0;j<n;j++){
			printf("%lld %s %d %d %d\n",stu[j].num,stu[j].name,stu[j].ch,stu[j].ma,stu[j].en);
		}
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	struct student stua= *((struct student *)a);
	struct student stub= *((struct student *)b);
	if(stua.sum==stub.sum){
		return stua.num-stub.num;
	}else{
		return stub.sum-stua.sum;
	}
}
