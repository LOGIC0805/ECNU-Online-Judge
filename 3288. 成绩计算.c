#include<stdio.h>
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}
int main()
{
	int t;
	scanf("%d",&t);
	
	int k;
	for(k=0;k<t;++k){
		int data[100];
		int i=0;
		int item;
		int sum=0;
		scanf("%d",&item);
		while(item!=-1){
			sum+=item;
			data[i++]=item;
			scanf("%d",&item);
		}
		sum/=i;
		qsort(data,i,sizeof(int),cmp);
		printf("case #%d:\n",k);
		printf("%d\n",data[i-1]);
		printf("%d\n",data[0]);
		printf("%d\n",sum);
	}
	
	return 0;
}