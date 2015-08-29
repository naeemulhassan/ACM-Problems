#include<iostream>

using namespace std;

main()
{
	unsigned int n,f,x,y,z,sum;
	cin>>n;
	while(n--)
	{
		cin>>f;
		sum = 0;
		while(f--)
		{
			cin>>x>>y>>z;
			sum = sum + (x*z);
		}
		cout<<sum<<endl;
	}
}
