#include<iostream>
#include<math.h>

using namespace std;


main()
{
	unsigned long long int n,k,sum;
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	while(cin>>n>>k)
	{
		sum = n;
		while(n >= k)
		{
			sum = sum + (unsigned long long int)(floor(n / k));
			n = (unsigned long long int)(floor(n / k)) + (n % k);
		}
		cout<<sum<<endl;
	}
}
