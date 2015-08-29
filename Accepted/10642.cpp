#include<stdio.h>
main()
{
	long long int tc,i,x1,y1,x2,y2,a1,a2,j;
	scanf("%lld",&tc);
	for(i = 1; i <= tc; i++)
	{
		scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
		j = x1+y1;
		a1 = j*(j+1)/2 + (j-y1);
		j = x2+y2;
		a2 = j*(j+1)/2 + (j-y2);
		j = a1 > a2 ? a1-a2 : a2-a1;
		printf("Case %lld: %lld\n",i,j);
	}
}
