#include<iostream>

using namespace std;

main()
{
	register unsigned int n;
	cin>>n;
	while(n)
	{
		if(n>=101)cout<<"f91("<<n<<") = "<<n-10<<"\n";
		else cout<<"f91("<<n<<") = "<<"91"<<"\n";
		cin>>n;
	}
}
