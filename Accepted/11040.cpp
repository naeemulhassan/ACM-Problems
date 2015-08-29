#include<iostream>
 
using namespace std;
long int s[9][9];
main()
{
#ifndef ONLINE_JUDGE
		freopen("input","r",stdin);	
		freopen("output","w",stdout);
#endif
	long int a,b,c,d,tc;
	cin>>tc;
	while(tc--)
	{
		for(a = 0; a <= 8; a= a+2)
		{
			for(b = 0; b <= a; b = b+2)
			{
				cin>>s[b][a];
			}
		}		
		
		for(a = 8; a >= 0; a--)
		{
			if(a%2)
			{
				for(b = 0; b <= a; b++)
				{
					s[b][a] = s[b][a+1] + s[b+1][a+1];
				}
			}
			else
			{
				for(b = 1; b < a; b = b+2)
				{
					s[b][a] = (s[b-1][a-2] - s[b-1][a] -s[b+1][a])/2;
				}
			}
		}
		for(a = 0; a <= 8; a= a++)
		{
			for(b = 0; b <= a; b = b++)
			{
				cout<<s[b][a];
				if(b != a)cout<<" ";
			}
			cout<<endl;
		}

	}
}
