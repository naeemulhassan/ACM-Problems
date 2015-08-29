#include<stdio.h>
main()
{
	int a,b,tc;
	tc = 0;
	while(scanf("%d %d",&a,&b) && a)
	{
		printf("Case %d: %lld\n",++tc,(long long int)((a*(a-1))/2)*((b*(b-1))/2));
	}
} 
