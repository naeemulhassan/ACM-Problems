#include<iostream>

using namespace std;

main()
{
	unsigned long int n , k , tc;
	cin>>tc;
	while(tc--)
	{				
		cin>>n>>k;
		n = k >> 1;
		k = k ^ n;
		cout<<k<<endl;
	}
} 
