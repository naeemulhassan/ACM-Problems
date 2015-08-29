#include<stdio.h>

int n[10009];

main()
{
	int N,i,j,k,l,max,sum,pre;
	while(scanf("%d",&N) && N)
	{
		max=0;
		pre=0;
		for(i = 1; i <= N; i++)
		{
			scanf("%d",&n[i]);
			if(max<n[i]+pre)max=n[i]+pre;
			if(pre+n[i]>0)pre+=n[i];
			else pre = 0;
		}
		if(max)printf("The maximum winning streak is %d.\n",max);
		else printf("Losing streak.\n");
	}
}
