#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	while(~scanf("%d",&n))
	{
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if(fabs(a[i])>fabs(a[j]))
				{
					a[i]=a[i]+a[j];
					a[j]=a[i]-a[j];
					a[i]=a[i]-a[j];
				}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1) printf(" ");
			else printf("\n");	
		}		
	}
	return 0;
}
