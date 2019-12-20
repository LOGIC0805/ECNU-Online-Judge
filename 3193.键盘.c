#include<stdio.h>
#include<stdlib.h>
int min(int a,int b);
int cmp(const void *a,const void *b);
int main()
{
	int t;
	scanf("%d",&t);
	
	int i;
	for(i=0;i<t;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int m;
		scanf("%d",&m);
		int money[m],m1[m],m2[m],m3[m];
		char type[m][5];
		int cnt1=0,cnt2=0,cnt3=0;
		int j;
		for(j=0;j<m;j++){
			m1[j]=0,m2[j]=0,m3[j]=0;
			scanf("%d %s",&money[j],type[j]);
			switch(type[j][0]){
				case 'U':
					m1[cnt1++]=money[j];
					break;
				case 'P':
					m2[cnt2++]=money[j];
					break;
			}
		}
		
		qsort(m1,cnt1,sizeof(int),cmp);
		qsort(m2,cnt2,sizeof(int),cmp);
		int sum=0,num=0;
		for(j=0;j<min(a,cnt1);j++){
			if(m1[j]==0){
				continue;
			}
			sum+=m1[j];
			num++;
		}
		for(;j<cnt1;j++){
			m3[cnt3++]=m1[j];
		}
		for(j=0;j<min(b,cnt2);j++){
			if(m2[j]==0){
				continue;
			}
			sum+=m2[j];
			num++;
		}
		for(;j<cnt2;j++){
			m3[cnt3++]=m2[j];
		}
		qsort(m3,cnt3,sizeof(int),cmp);
		for(j=0;j<min(c,cnt3);j++){
			if(m3[j]==0){
				continue;
			}
			sum+=m3[j];
			num++;
		}
		
		printf("case #%d:\n%d %d\n",i,num,sum);
	}
	
	return 0;
}

int min(int a,int b)
{
	if(a>b){
		return b;
	}else{
		return a;
	}
}

int cmp(const void *a,const void *b)
{
	return *((int *)a)-*((int *)b);
}
