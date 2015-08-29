#include<iostream>

using namespace std;

main()
{
	unsigned long int cs,sum,dif,a,b;
	cin>>cs;
	while(cs--)
	{
		cin>>sum>>dif;
		a = sum+dif;
		if(sum < dif || a%2 )cout<<"impossible\n";
		else
		{
			cout<<(sum+dif)/2<<" ";
			cout<<(sum-dif)/2;
			cout<<endl;
		}
	}
}
