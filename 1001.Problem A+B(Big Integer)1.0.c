#include<stdio.h>
#include<string.h> 

void add(char *a,char *b,char *c);
int max(int m,int n);

int main()
{
	char a[501],b[501],c[501]={0,};
	while(~scanf("%s %s",a,b)){
		add(a,b,c);
		printf("%s\n",c);
	}
	
	return 0;
}

void add(char *a,char *b,char *c)
{
	int i,m,n,p,q,k,x,t=0;
	m=strlen(a);
	p=m-1;
	n=strlen(b);
	q=n-1;
	k=max(m,n)+1;
	
	for(i=0;i<m;i++){
		a[i]-='0';
	}
	for(i=0;i<n;i++){
		b[i]-='0';
	} 
	
	for(i=k-1;i>=0;i--){
		x=t;
		if(p>=0){
			x+=a[p];
			p--;
		}
		if(q>=0){
			x+=b[q];
			q--;
		}
		c[i]=x%10+'0';
		t=x/10;
	}
	c[k]='\0';
	while(c[0]=='0'){
		for(i=0;i<k;i++){
			c[i]=c[i+1];
		} 
	}
	if(strlen(c)==0){
			c[0]='0',c[1]='\0';
		}
}

int max(int m,int n)
{
	int r;
	if(m>n){
		r=m;
	}else{
		r=n;
	}
	return r;
}
