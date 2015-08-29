#include<iostream>
 
using namespace std;

main()
{
	int t,a,b,sum,cas = 0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		sum = 0;
		if(!(a%2))a = a + 1;
		while(a<=b)
		{
			sum = sum + a; 
			a = a+2;
		}
		cout<<"Case "<<++cas<<": "<<sum<<endl;
	}
}
