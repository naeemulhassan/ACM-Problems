#include<iostream>
#include<math.h>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	unsigned long long N,M,O,max,min,ans;
	while(cin>>N>>M)
	{
		if(N == 0)break;
		O = N-M;
		if(O>=M)
		{
			max = O;
			min = M;
		}
		else
		{
			max = M;
			min = O;
		}
		ans = 1;
		O = 1;
		while(max++<N)
		{
			ans = ans*max/O++;
		}
		cout<<ans<<endl;
	}
}
