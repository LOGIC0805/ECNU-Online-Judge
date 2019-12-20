#include<stdio.h>
#include<stdlib.h> 

int compare(const void *a,const void *b);

struct match{
	int group;
	int win;
	int equal;
	int fail;
	int point;
};

int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)){
		if(n==0){
			break;
		}else{
			struct match team[n],parameter;
			int i,j;
			for(i=0;i<n;i++){
				team[i].win=0;
				team[i].equal=0;
				team[i].fail=0;
				team[i].group=i+1;
			}
			
			for(i=0;i<m;i++){
				int a,b,c;
				scanf("%d %d %d",&a,&b,&c);
				switch(c){
					case 1:
						team[a-1].win++;
						team[b-1].fail++;
						break;
					case -1:
						team[b-1].win++;
						team[a-1].fail++;
						break;
					case 0:
						team[a-1].equal++;
						team[b-1].equal++;
						break;
				}
			}
			
			for(i=0;i<n;i++){
				team[i].point=team[i].equal+3*team[i].win-team[i].fail;
			}
			
			qsort(team,n,sizeof(struct match),compare); 
			
			for(i=0;i<n-1;i++){
				printf("%d ",team[i].group);
			}
			printf("%d\n",team[i].group);
		}
	}
	
	return 0;
}

int compare(const void *a,const void *b)
{
	struct match ma= *((struct match *)a);
	struct match mb= *((struct match *)b);
	if(ma.point==mb.point){
		if(ma.win==mb.win){
			if(ma.fail==mb.fail){
				return ma.group-mb.group;
			}else{
				return ma.fail-mb.fail;
			}
		}else{
			return -(ma.win-mb.win);
		}
	}else{
		return -(ma.point-mb.point);
	}
} 
