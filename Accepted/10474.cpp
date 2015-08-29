#include<stdio.h>
#include<algorithm>
using namespace std;
int set[10010]; 
main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	int n,q,x,y,tc = 1,z;
	while(scanf("%d %d",&n,&q))
	{
		if(n==0 && q==0)break;
		for(x = 1 ; x <= n; x++)scanf("%d",&set[x]);
		sort(&set[1],&set[n+1]);
		printf("CASE# %d:\n",tc++);
		for(z = 1; z <= q; z++)
		{
			scanf("%d",&y);
			for(x = 1; x <= n; x++)if(set[x]==y)break;
			if(x>n)printf("%d not found\n",y);
			else printf("%d found at %d\n",y,x);
		}		
	}
}
