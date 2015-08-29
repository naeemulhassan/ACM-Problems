#include<iostream>
#include<algorithm>
 
using namespace std;
bool sum[20020];
main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	int n,i,t,f,x,y,z;
	int num[105];
	t = 1;
	while(scanf("%d",&n) != EOF)
	{
		f = 0;
		num[0]=0;
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&num[i]);
			if(num[i]<=num[i-1])f=1;
		}		
		if(f==1)
		{
			printf("Case #%d: It is not a B2-Sequence.\n\n",t++);
			continue;
		}
		z = 0;
		for(x = 1; x <= n; x++)
			for(y = x; y <= n; y++)
		{
			if(sum[])
		}		
		if(f==1)printf("Case #%d: It is not a B2-Sequence.\n",t++);
		else printf("Case #%d: It is a B2-Sequence.\n",t++);
		printf("\n");
	}
}
