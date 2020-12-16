#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d",&n);
	char tmp[2];
	int data1[8][8],data2[8][8];
	int i,j;
	for(i=0;i<8;++i){
		for(j=0;j<8;++j){
			data1[i][j]=0;
			data2[i][j]=0;
		}
	}
	for(i=0;i<n;++i){
		scanf("%s",tmp);
		tmp[0]-='A';
		tmp[1]='8'-tmp[1];
		data1[tmp[1]][tmp[0]]=1;
	}
	scanf("%d",&m);
	for(i=0;i<m;++i){
		scanf("%s",tmp);
		tmp[0]-='A';
		tmp[1]='8'-tmp[1];
		data2[tmp[1]][tmp[0]]=1;
	}
	
	if(n>m){
    	printf("Cuber QQ\n");
	}else{
		printf("Quber CC\n");
	}
	
	return 0;
}