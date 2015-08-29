#include<stdio.h>
 
main()
{
	long long int n,i,j,k,l,max,a[22][22];
	while(scanf("%lld %lld",&n,&l) != EOF)
	{
		a[n][1] = l;
		for(i = n,j = 2; j <= n; j++)
		{
			max = 0;
			for(k = 1; k < j; k++)
			{
				if(max<a[i][k]+a[n][k])max=a[i][k]+a[n][k];
			}
			a[i][j] = max;
		}
		for(i = n-1,j = 1; i >= 1; i--)
		{
			max = 0;
			for(k = n; k > i; k--)
			{
				if(max<a[k][1]+a[k][j])max=a[k][1]+a[k][j];
			}
			a[i][j] = max;
		}
		for(i = n-1; i >= 1; i--)
		{
			for(j = 2; j <= n; j++)
			{
				if(i>=j)
				{
					max = 0;
					for(k = i+1; k <= n; k++)
					{
						if(max<a[k][1]+a[k][j])max=a[k][1]+a[k][j];
					}
					a[i][j] = max;
					max = 0;
					for(k = 1; k < j; k++)
					{
						if(max<a[i][k]+a[n][k])max=a[i][k]+a[n][k];
					}
					a[i][j]+=max;
				}
				else
				{
					max = 0;
					for(k = i; k < j; k++)
					{
						if(max<a[i][k]+a[k+1][j])max=a[i][k]+a[k+1][j];
					}
					a[i][j] = max;
				}
			}
		}
		printf("%lld\n",a[1][n]);
	}
}
