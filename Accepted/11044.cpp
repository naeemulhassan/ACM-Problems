#include<iostream>
#include<cmath>

using namespace std;

main()
{
	unsigned int x,y;
	int tc;
	cin>>tc;
	while(tc--)
	{
		cin>>x>>y;		
		cout<<(unsigned int)(floor(x/3.0)*floor(y/3.0))<<endl;
	}
}
