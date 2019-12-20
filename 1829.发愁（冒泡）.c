#include<stdio.h>

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
			
			for(i=0;i<n-1;i++){
				for(j=0;j<n-i-1;j++){
					if(team[j].point==team[j+1].point){
						if(team[j].win==team[j+1].win){
							if(team[j].fail==team[j+1].fail){
								if(team[j].group>team[j+1].group){
									parameter=team[j];
									team[j]=team[j+1];
									team[j+1]=parameter;
								}
							}else{
								if(team[j].fail>team[j+1].fail){
									parameter=team[j];
									team[j]=team[j+1];
									team[j+1]=parameter;
								}
							}
						}else{
							if(team[j].win<team[j+1].win){
								parameter=team[j];
								team[j]=team[j+1];
								team[j+1]=parameter;
							}
						}
					}else{
						if(team[j].point<team[j+1].point){
							parameter=team[j];
							team[j]=team[j+1];
							team[j+1]=parameter;
						}
					}
				}
			}
			
			for(i=0;i<n-1;i++){
				printf("%d ",team[i].group);
			}
			printf("%d\n",team[i].group);
		}
	}
	
	return 0;
} 
