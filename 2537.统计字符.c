#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	
	int i;
	for(i=0;i<t;i++){
		char a[10002];
		fgets(a,10002,stdin);
		int m=strlen(a);
		int j;
		int character=0,number=0,others=0;
		for(j=0;j<m-1;j++){
			if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')){
				character++;
			}else if(a[j]>='0'&&a[j]<='9'){
				number++;
			}else{
				others++;
			}
		}
		printf("character:%d\nnumber:%d\nothers:%d\n",character,number,others);
	}
	
	return 0;
}
