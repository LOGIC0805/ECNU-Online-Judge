#include<stdio.h>
int main()
{
   long s;
   scanf("%ld",&s);
   while(s!=-1){
        int h,m;
        h=s/3600;
        s%=3600;
        m=s/60;
        s%=60;
        if(h==0){
            printf("00:");
        }else{
            if(h<10){
                printf("0%d:",h);
            }else{
                printf("%d:",h);
            }
        }
        if(m==0){
            printf("00:");
        }else{
            if(m<10){
                printf("0%d:",m);
            }else{
                printf("%d:",m);
            }
        }
        if(s==0){
            printf("00\n");
        }else{
            if(s<10){
                printf("0%d\n",s);
            }else{
                printf("%d\n",s);
            }
        }
        scanf("%ld",&s);
   }

    return 0;
}

