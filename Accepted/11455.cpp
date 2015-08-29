#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

main()
{
	unsigned long int n,i,tmp;
	vector <unsigned long int> v;
	cin>>n;
	while(n--)
	{
		i = 0;
		while(i<4)
		{
			cin>>tmp;
			v.push_back(tmp);
			i++;
		}
		sort(v.begin(),v.end());
		if(v[0] == v[1] && v[1] == v[2] && v[2] == v[3])cout<<"square";
		else if(v[0] == v[1] && v[2] == v[3])cout<<"rectangle";
		else if(v[0]+v[1]+v[2] > v[3])cout<<"quadrangle";
		else cout<<"banana";
		cout<<endl;
		v.resize(0,0);
	}
}
