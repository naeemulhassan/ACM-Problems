#include<iostream>
#include<math.h>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif

	unsigned int a,b,n;
	while(cin>>a>>b)
	{
		if(a == 0)break;
		n = floor(sqrt(b))-ceil(sqrt(a)) + 1;
		cout<<n<<endl;
	}
}
