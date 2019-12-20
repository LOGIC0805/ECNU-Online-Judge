#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int cnt;
	int num;
}array;

int cmp1(const void *a,const void *b);
int cmp2(const void *a,const void *b);
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		
		array a[n+1];
		int j;
		for(j=0;j<n;j++){
			scanf("%d",&a[j].num);
		}
		a[j].num=501,a[j].cnt=0;
		qsort(a,n+1,sizeof(a[0]),cmp1);
		
		int t=a[0].num;
		int cnt=1;
		for(j=1;j<n+1;j++){
			if(a[j].num==t){
				cnt++;
			}else{
				int k;
				for(k=j-1;k>=j-cnt;k--){
					a[k].cnt=cnt;
				}
				t=a[j].num;
				cnt=1;
			}
		}
		qsort(a,n+1,sizeof(a[0]),cmp2);
		
		printf("case #%d:\n",i);
		for(j=0;j<n-1;j++){
			printf("%d ",a[j].num);
		}
		printf("%d\n",a[j].num);
	}
	
	return 0;
}

int cmp1(const void *a,const void *b)
{
	array aa=*((array *)a);
	array ab=*((array *)b);
	return aa.num-ab.num;
}

int cmp2(const void *a,const void *b)
{
	array aa=*((array *)a);
	array ab=*((array *)b);
	if(aa.cnt==ab.cnt){
		return aa.num-ab.num;
	}else{
		return ab.cnt-aa.cnt;
	}
}
