#include<stdio.h>

int v[105];
int A[105][510];
main()
{
	int sum,i,tc,n,j,p,W;
	char ch;
	scanf("%d",&tc);
	while(tc--)
	{
		sum = 0;
		i = 1;
		while(scanf("%d%c",&v[i],&ch))
		{
			sum+=v[i++];
			if(ch == '\n')break;
		}
		n = i-1;
		W = sum/2;
		//printf("%d %d %d %d %d\n",n,v[1],v[n],sum,W);
		for(i = 0; i <= W; i++)A[0][i] = 0;		
		for(i = 1; i <= n; i++)
		{
			A[i][0] = 0;
			for(j = 1; j <= W; j++)
			{
				if(v[i] <= j)
				{
					if(v[i] + A[i-1][j-v[i]] > A[i-1][j])A[i][j] = v[i] + A[i-1][j-v[i]];
					else A[i][j] = A[i-1][j];
				}
				else A[i][j] = A[i-1][j];
			}
		}
		if(sum-2*A[n][W])printf("NO\n");
		else printf("YES\n");
	}
}
