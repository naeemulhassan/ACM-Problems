#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(int x,int y){return (x>y);}

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int t,n,x,y,z;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector <int> price;
		while(n--)
		{
			cin>>x;
			price.push_back(x);
		}
		if(price.size() <= 2)
		{
			cout<<"0\n";
			continue;
		}
		sort(price.begin(),price.end(),comp);
		n = 0;
		for(x = 2; x < price.size(); x = x + 3)
		{
			n = n + price[x];
		}
		cout<<n<<endl;
	}
}
