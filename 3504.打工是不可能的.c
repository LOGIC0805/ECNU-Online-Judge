#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b);
int main()
{
	long n;
	scanf("%ld",&n);
	
	long a[n],b[n];
	long long sum=0;
	int i;
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%ld",&b[i]);
		sum+=b[i];
	}
	qsort(a,n,sizeof(long),cmp);
	
	long cnt=0;
	for(i=0;i<n;i++){
		if(sum>0){
			sum-=a[i];
			cnt++;
		}else{
			break;
		}
	}
	
	if(sum>0){
		printf("Game Over!");
	}else{
		printf("%ld",cnt);
	}
	
	return 0;
}

int cmp(const void *a,const void *b)
{
	return *(long *)b-*(long *)a;
}
