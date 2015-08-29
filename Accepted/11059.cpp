#include<iostream>

using namespace std;

main()
{
	long long int n,i,j,l,max,num[22][22],tc=1;
	while(scanf("%lld",&n) != EOF)
	{
		max = 0;
		for(i = 1; i <= n; i++)
		{
			scanf("%lld",&num[i][i]);
			if(max<num[i][i])max = num[i][i];
		}
		for(l = n-1,j = 1; l >= 1; l--,j++)
		{
			for(i = 1; i <= l ; i++)
			{
				num[i][i+j] = num[i][i+j-1]*num[i+j][i+j];
				if(max<num[i][i+j])max = num[i][i+j];
			}
		}		
		printf("Case #%lld: The maximum product is %lld.\n\n",tc++,max);
	}	
}
