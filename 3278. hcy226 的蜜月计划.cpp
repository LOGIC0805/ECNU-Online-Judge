#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=0;
    int s,t,l;
    for(int i=0;i<n-1;++i){
        scanf("%d %d %d",&s,&t,&l);
        num+=l;
    }
    printf("%d",num*2);
}