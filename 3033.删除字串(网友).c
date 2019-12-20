#include <stdio.h>
#include <string.h>
void del(char* str1,char* str2); 

int main()
{
    int i,t;
    char str[2001],str0[101];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s %s",str,str0);
        del(str,str0);
        printf("case #%d:\n",i);
        printf("%s\n",str);
    }
    return 0;
}

void del(char* str1,char* str2)
{
    char* temp;
    int len=strlen(str2);
    while(str1=(temp=strstr(str1,str2))){
        for(;*(temp+len)!='\0';temp++){
            *temp=*(temp+len);
        }
        *temp='\0';
    }
}
