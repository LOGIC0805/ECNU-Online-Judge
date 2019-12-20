#include<stdio.h>
#include<string.h> 
#define max(a,b) (a>b)?(a):(b)

void add(char *a,char *b,char *c);

int main()
{
	char a[500],b[500],c[500]={0,};
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
	k=max(m,n);
	k++;
	
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
