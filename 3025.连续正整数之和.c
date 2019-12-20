#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    int i;
    for(i=0;i<t;++i){
        int n;
        scanf("%d",&n);

        int num=0;
        int j;
        for(j=2;j<=n/2;j++){
            if(!(n%j)&&n/j%2==1){
                num++;
            }
        }

        printf("case #%d:\n",i);
        printf("%d\n",num);
    }

    return 0;
}

