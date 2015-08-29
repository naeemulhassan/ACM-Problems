#include<iostream>
 
using namespace std;

main()
{
	long long a;
	cin>>a;
	while(a >= 0)
	{
		cout<<a*(a+1)/2 + 1<<endl;		
		cin>>a;
	}
}
