#include<stdio.h>
#include<string.h>

void add(char *a,char *b,char *c,char *d);
int max(int m,int n);

int main()
{
	char a[1000]={'1',},b[1000]={'1',},c[1000]={0,},d[1000]={'1','1',};
	int i,j;
	scanf("%d",&j);
	add(a,b,c,d);
	for(i=0;i<j;i++){
		printf("%c",d[i]);
	}
	return 0;
}

int max(int m,int n)
{
	int j;
	if(m>n){
		j=m;
	}else{
		j=n;
	}
	return j;
}

void add(char *a,char *b,char *c,char *d)
{
	int r=2;
	do{
		int k,i,j,x;
		int t=0,m=0,n=0;
		m=strlen(a);
		n=strlen(b);
		for(i=0;i<m;i++){
			a[i]-='0';
		}
		for(i=0;i<n;i++){
			b[i]-='0';
		}
	
		k=max(m,n)+1;
		int p,q;
		p=m-1;
		q=n-1;
	
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
	
		if(c[0]=='0'){
			for(i=0;i<k;i++){
				c[i]=c[i+1];
			}
		}
		
		j=strlen(c);
		for(i=0;i<j;i++){
			d[r]=c[i];
			r++;
			if(r>999){
				break;
			}
		}
		
		for(i=0;i<n;i++){
			a[i]=b[i]+'0';
		} 
		for(i=0;i<j;i++){
			b[i]=c[i];
		} 
		}while(r<1000);
}
