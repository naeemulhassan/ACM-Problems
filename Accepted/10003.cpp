#include<iostream>

using namespace std;
int c[55],m[55][55];
main()
{
	int l,i,j,k,s,n,mn,t;
	while(scanf("%d",&l) && l)
	{
		scanf("%d",&n);
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&c[i]);
			m[i][i+1] = 0;
		}
		c[n+1] = l;
		for(s = 0; s < n; s++)
		{
			for(i = 0,j = i+2+s; i < n-s; i++,j++)
			{				
				mn = 100000;
				for(k = i+1; k < j; k++)
				{
					t = m[i][k] + m[k][j] + c[j]-c[i];
					if(mn > t)mn = t;
				}
				m[i][j] = mn;
			}
		}
		printf("The minimum cutting is %d.\n",m[0][n+1]);				
	}
}
