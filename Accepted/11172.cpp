#include<iostream>
 
using namespace std;

main()
{
	int tc;
	long long int a,b;	
	cin>>tc;
	while(tc--)
	{
		cin>>a>>b;
		if(a==b)cout<<"=";
		else if(a>b)cout<<">";
		else if(a<b)cout<<"<";
		cout<<endl;
	}
}
