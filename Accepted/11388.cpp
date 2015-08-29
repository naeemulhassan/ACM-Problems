#include<iostream>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int T;
	unsigned long long G,L;
	cin>>T;
	while(T--)
	{
		cin>>G>>L;
		if(L%G)
		{
			cout<<"-1\n";
			continue;
		}
		cout<<G<<" "<<L<<endl;
	}
}
