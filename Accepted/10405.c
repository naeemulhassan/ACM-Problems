#include<stdio.h>
#include<string.h>
int c[1010][1010];
main()
{
/*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif*/
	char s1[1010],s2[1010];
	int m,n,z,i,j,k;
	while(gets(s1))
	{				
		gets(s2);		
		m = strlen(s1);
		n = strlen(s2);
		for(i = 0; i <= m; i++)c[i][0] = 0;
		for(j = 0; j <= n; j++)c[0][j] = 0;
		for(i = 1; i <= m; i++)
		{
			for(j = 1; j <= n; j++)
			{
				if(s1[i-1]==s2[j-1])c[i][j] = c[i-1][j-1]+1;
				else if(c[i-1][j] >= c[i][j-1])c[i][j] = c[i-1][j];
				else c[i][j] = c[i][j-1];
			}
		}
		printf("%d\n",c[m][n]);
	}
}
