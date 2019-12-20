#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	for(i=0;i<n;i++){
		char a[11];
		scanf("%s",a);
		switch(a[0]){
			case 'E':
				printf("Excellent\n");
				break;
			case 'C':
				printf("Cheer\n");
				break;
			case 'N':
				printf("Nice\n");
				break;
			case 'U':
				printf("Ultimate\n");
				break;
			case 'I':
				printf("I'm possible\n");
				break;
			case 'A':
				printf("Accept More\n");
				break;
		}
	}
	
	return 0;
}
