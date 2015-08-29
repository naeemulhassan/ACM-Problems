#include<stdio.h>
#include<math.h>
main()
{
	long long n,i,j,k,tc;
	scanf("%lld",&tc);
	while(tc--)
	{
		scanf("%lld",&n);
		i = (((n*(n-1))/2)*(n-2))/3;
		j = n;
		n = (long long )ceil(n/2.0)-1;
		if(j%2)printf("%lld\n",i-(n*(n+1)*(2*n+1))/3+(n*(n+1))/2);
		else printf("%lld\n",i-(n*(n+1)*(2*n+1))/3-(n*(n+1))/2);
	}
} 
