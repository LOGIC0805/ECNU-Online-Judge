#include<stdio.h>
int main()
{
	char a;
	int ch=0,line=0,len=0,lenmax=0;
	while((a=getchar())!=EOF){
		if(a!='\n'){
			ch++;
			len++;
		}else{
			line++;
			if(lenmax<len){
				lenmax=len;
			}
			len=0;
		}
	}
	printf("%d,%d,%d",ch,line,lenmax);
	
	return 0;
}
