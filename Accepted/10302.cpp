#include<iostream>
#include<math.h> 

using namespace std;

main()
{
	unsigned long long int sum,x;	
	while(cin>>x)
	{
		sum = x*(x+1)/2;
		sum = sum*sum;
		cout<<sum<<endl;
	}
}
