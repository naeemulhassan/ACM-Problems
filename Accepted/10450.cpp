#include<stdio.h>
long long int fib[60];
main()
{
	long long int n,x,y,ans;
	fib[0] = 1;
	fib[1] = 2;
	for(x = 2; x <= 51; x++)fib[x] = fib[x-1]+fib[x-2];
	scanf("%lld",&n);
	for(x = 1; x <= n; x++)
	{
		scanf("%d",&y);
		printf("Scenario #%lld:\n%lld\n\n",x,fib[y]);
	}
}
