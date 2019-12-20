#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b);

int main()
{
	char a;
	scanf("%c",&a);
	
	int b[501];
	int i=0,cnt=0;
	while(~scanf("%d",&b[i++])){
		cnt++;
	}
	
	int d[cnt];
	for(i=0;i<cnt;i++){
		d[i]=b[i];
	}
	qsort(d,cnt,sizeof(int),compare);
	
	if(a=='A'){
		for(i=0;i<cnt-1;i++){
			if(d[i]!=d[i+1]){
				printf("%d ",d[i]);
			}
		}
		printf("%d",d[i]);
	}else{
		for(i=cnt-1;i>0;i--){
			if(d[i]!=d[i-1]){
				printf("%d ",d[i]);
			}
		}
		printf("%d",d[i]);
	}
	
	return 0;
} 

int compare(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
