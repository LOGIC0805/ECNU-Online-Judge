#include<stdio.h>
#include<stdlib.h>
struct player{
	int tall;
	int num;
};

int compare(const void *a,const void *b);

int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n,m;
		scanf("%d %d",&n,&m);
		
		struct player p[n];
		int q[m];
		int j;
		for(j=0;j<n;j++){
			scanf("%d",&p[j].tall);
			p[j].num=j+1;
		}
		for(j=0;j<m;j++){
			scanf("%d",&q[j]);
		}
		
		qsort(p,n,sizeof(struct player),compare);
		for(j=0;j<m-1;j++){
			printf("%d ",p[q[j]-1].num);
		}
		printf("%d\n",p[q[j]-1].num);
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	struct player pa=*((struct player *)a);
	struct player pb=*((struct player *)b);
	return pb.tall-pa.tall;
}
