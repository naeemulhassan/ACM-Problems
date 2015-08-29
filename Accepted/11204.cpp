#include<iostream>
 
using namespace std;
int ms[32][32];
int one[32];

main()
{
	int tc,m,n,i,j;
	long int ans;		
	cin>>tc;
	while(tc--)
	{
		cin>>n>>m;
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
		{
			cin>>ms[i][j];
			if(ms[i][j] == 1)one[j]++;
		}
		ans = 1;
		for(i = 0; i < n; i++)
		{
			if(one[i])ans = ans * one[i];
			one[i] = 0;
		}
		cout<<ans<<endl;
	}
}
