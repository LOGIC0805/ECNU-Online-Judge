#include<stdio.h>
#include<stdlib.h>
struct number{
	int whole;
	int units;
};

int compare(const void *a,const void *b);

int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		
		struct number num[n];
		int j;
		for(j=0;j<n;j++){
			scanf("%d",&num[j].whole);
			num[j].units=num[j].whole%10;
		}
		qsort(num,n,sizeof(struct number),compare);
		printf("case #%d:\n",i);
		for(j=0;j<n-1;j++){
			if(num[j].whole!=num[j+1].whole){
				printf("%d ",num[j].whole);
			}
		}
		printf("%d\n",num[j].whole);
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	struct number na=*((struct number *)a);
	struct number nb=*((struct number *)b);
	if(na.units==nb.units){
		return na.whole-nb.whole;
	}else{
		return na.units-nb.units;
	}
}
