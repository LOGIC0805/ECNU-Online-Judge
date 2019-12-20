#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	char *alpha[]={".-","-...","-.-.","-..", ".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	char *num[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----.","/","///","/////"};

	int i;
	for(i=0;i<t;++i){
		char code[1001];
		scanf("%s",code);
		int len=strlen(code);

		char temp[6]={0};
		int j,k=0;
		int cnt;
		printf("case #%d:\n",i);
		for(j=0;j<len;++j){
			if(code[j]=='/'){
				for(cnt=1;cnt<5;++cnt){
					if(code[j+cnt]!='/'){
						break;
					}
				}

				if(strlen(temp)==5){
					for(k=0;k<10;++k){
						if(!strcmp(temp,num[k])){
							printf("%d",k);
							break;
						}
					}
				}else{
					for(k=0;k<26;++k){
						if(!strcmp(temp,alpha[k])){
							printf("%c",k+65);
							break;
						}
					}
				}

				for(k=0;k<6;++k){
					temp[k]=0;
				}
				k=0;

				if(cnt==5){
					j+=4;
					printf(".");
				}else if(cnt==3){
					j+=2;
					printf(" ");
				}
			}else{
				temp[k++]=code[j];
			}
		}
		if(strlen(temp)==5){
			for(k=0;k<10;++k){
				if(!strcmp(temp,num[k])){
					printf("%d",k);
					break;
				}
			}
		}else{
			for(k=0;k<26;++k){
				if(!strcmp(temp,alpha[k])){
					printf("%c",k+65);
					break;
				}
			}
		}
		printf("\n");
	}

	return 0;
}
