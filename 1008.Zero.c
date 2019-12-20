 #include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	int cnt=0;
	for(i=0;i<n;i++){
		long a,j;
		scanf("%ld",&a);
		cnt=0;
		while(a){
			cnt+=a/5;
			a/=5;
		} 
		printf("%d\n",cnt);
	}
	
	return 0;
 } 
