#include<iostream>
 
using namespace std;

long long int mfibo(int n)
{
	long long int f[n+1];
	f[1] = 1;
	f[0] = 0;
	for (int i = 2; i <= n; i++)
		f[i] = f[i-1] + f[i-2] + 1;
	return f[n];
}
main()
{
	int n;
	while(cin>>n && n != -1)
	{
		cout<<mfibo(n)<<" "<<mfibo(n+1)<<endl;
	}
}
