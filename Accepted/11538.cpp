#include<stdio.h>
 
main()
{
	unsigned long long n,m,ans,x;
	while(scanf("%llu %llu",&n,&m))
	{
		if(n == 0)break;
		ans = ((m*(m-1))/2)*n + ((n*(n-1))/2)*m;
		if(n < m)
		{
			x = n - 2;
			ans += ((x*(x+1))*(2*x+4))/3 + (m-n+1)*n*(n-1);
		}
		else
		{
			x = m - 2;
			ans += ((x*(x+1))*(2*x+4))/3 + (n-m+1)*m*(m-1);
		}
		printf("%llu\n",ans*2);
	}
}
