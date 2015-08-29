#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

main()
{
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector <int> locations;
		while(n--)
		{
			cin>>temp;
			locations.push_back(temp);
		}
		sort(locations.begin(),locations.end());
		cout<<2*(locations[locations.size()-1]-locations[0])<<endl;	
	}
}
