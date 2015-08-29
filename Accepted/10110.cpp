#include<iostream>
#include<math.h>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	unsigned long int n,x,count;
	double sqr;
	while(cin>>n)
	{
		if(!n)break;
		sqr = sqrt(n);
		if(floor(sqr) == sqr)cout<<"yes\n";
		else cout<<"no\n";
	}
}
