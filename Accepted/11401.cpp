#include<iostream>

using namespace std;

main()
{
	long long int n,x;
	cin>>x;
	while(x>=3)
	{
		if(x%2)
		{
			n = (x-1)/2;
			n = n*(2*n-1)*(2*n+1)/6 - n*n/2;
			cout<<n<<endl;
 		}
		else
		{
			n = (x-2)/2;
			n = ((n*(n+1)/2)*(4*n-1))/3;
			cout<<n<<endl;
		}
		cin>>x;
	}
}
