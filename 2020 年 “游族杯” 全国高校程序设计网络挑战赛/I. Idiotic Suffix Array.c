#include<stdio.h>
int main() 
{
    int n,k;
    scanf("%d %d",&n,&k);
    printf("b");
    int i;
    for(i=0;i<k-1;++i){
        printf("a");
	} 
    for(i=0;i<n-k;++i){
        printf("c");
	}
    printf("\n");
    return 0;
}