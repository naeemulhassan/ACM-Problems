#include<iostream>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int m,n,tc,i,t,min;
	char s[12][12],tmp[20];
	scanf("%d\n",&tc);
	for(i = 1; i <= tc; i++)
	{
		scanf("%d\n",&m);
		for(n = 0; n <= m+1; n++)
			for(t = 0; t <= m+1; t++)s[n][t]=46;
		for(n = 1; n <= m; n++)
		{
			gets(tmp);
			for(t = 1; t <= m; t++)
			{
				s[n][t] = tmp[t-1];
			}
		}		
		for(n= 1; n <= m; n++)
		{
			for(t = 1; t <= m; t++)
			{
				if(s[n][t] == '.')
				{
					min = 'A';
					if(s[n][t+1]==min || s[n-1][t]==min || s[n][t-1]==min || s[n+1][t]==min)min++;
					if(s[n][t+1]==min || s[n-1][t]==min || s[n][t-1]==min || s[n+1][t]==min)min++;
					if(s[n][t+1]==min || s[n-1][t]==min || s[n][t-1]==min || s[n+1][t]==min)min++;
					if(s[n][t+1]==min || s[n-1][t]==min || s[n][t-1]==min || s[n+1][t]==min)min++;
					
					s[n][t]=min;
				}
			}
		}
		printf("Case %d:\n",i);
		for(n = 1; n <= m; n++)
		{
			for(t = 1; t <= m; t++)
			{
				printf("%c",s[n][t]);
			}
			printf("\n");
		}
	}
}
