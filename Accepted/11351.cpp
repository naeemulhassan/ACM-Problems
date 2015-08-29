#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int tc,d,q,i,m,n;
	int f[100009];
	f[1]=0;
	scanf("%d",&tc);
	for(i = 1; i <= tc; i++)
	{
		scanf("%d %d",&n,&q);
		for(m = 1; m <= n; m++)f[m] = (f[m-1]+q)%m;
		printf("Case %d: %d\n",i,f[n]+1);
	}
}
