#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	switch(a){
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
		case 'A':
			printf("Accept\n");
			break;
		default:
			printf("Error\n");
			break;
	}
	
	return 0;
}
