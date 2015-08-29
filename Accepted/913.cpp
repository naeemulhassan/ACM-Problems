#include<iostream>

using namespace std;

main()
{
	long long int n;
	while(cin>>n)
	{
		n = (n-1)/2;
		n = 3*(5+(n-1)*6+(n*(n-1)*2));
		cout<<n<<endl;
	}
}
