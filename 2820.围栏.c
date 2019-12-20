#include<stdio.h>
#include<string.h>
int main()
{
	char a[51];
	scanf("%s",a);
	
	char t=a[0];
	int len=strlen(a);
	int i,num=1,max=1;
	for(i=1;i<len;i++){
		if(t==a[i]){
			num=1;
		}else{
			num++;
		}
		t=a[i];
		if(max<num){
			max=num;
		}
	}
	printf("%d",max);
	
	return 0;
}
