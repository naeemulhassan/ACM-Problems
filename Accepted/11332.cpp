#include<iostream>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	unsigned long long int n;
	cin>>n;
	while(n)
	{
		n = n%9;
		if(n)cout<<n<<endl;
		else cout<<"9\n";
		cin>>n;
	}
}
