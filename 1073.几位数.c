#include<stdio.h>
int main()
{
    int cnt;
    char a[1025];

    while(~scanf("%s",a)){
    int i;
    cnt=0;
    for(i=0;i<1025;i++){
        cnt++;
        if(a[i]=='\0'){
            break;
        }
    }

    printf("%d\n",--cnt);

    }

    return 0;
}

