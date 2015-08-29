#include<iostream>
 
using namespace std;

main()
{
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int m,n,i,j,k,l,count = 0;
	int s1[110],s2[110],c[110][110];
	while(scanf("%d %d",&m,&n))
	{
		if(m == 0 && n == 0)break;
		for(i = 1; i <= m; i++)scanf("%d",&s1[i]);
		for(i = 1; i <= n; i++)scanf("%d",&s2[i]);
		for(i = 0; i <= m; i++)c[i][0] = 0;
		for(j = 0; j <= n; j++)c[0][j] = 0;
		for(i = 1; i <= m; i++)
		{
			for(j = 1; j <= n; j++)
			{
				if(s1[i] == s2[j])c[i][j] = c[i-1][j-1]+1;
				else if(c[i-1][j] >= c[i][j-1])c[i][j] = c[i-1][j];
				else c[i][j] = c[i][j-1];
			}
		}
		printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",++count,c[m][n]);
	}
}
