#include<iostream>
#include<math.h>

using namespace std;
main(void)
{
	int squares[100],ans[10000],min;
	int t,n;
	for(int i = 1; i <= 100; i++)squares[i-1] = i*i;
	
	cin>>t;
	ans[0] = 0;
	for(int p = 1; p <= 10000; p++)
	{
		min = 10000;
		for(int i = 0; i <= 99; i++)
		{
			if(squares[i] <= p)
			{
				if( (1 + ans[p - squares[i]] ) < min )
				{
					min = 1 + ans[p - squares[i]];
				} 
			}
		}
		ans[p] = min;
	}
	while(t)
	{
		cin>>n;		
		cout<<ans[n]<<endl;
		t--;
	}
} 
