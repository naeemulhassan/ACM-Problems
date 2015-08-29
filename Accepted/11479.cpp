#include<iostream>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif

	long long int a,b,c;
	int n,x,y = 0,z;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		cout<<"Case "<<++y<<": ";
		if(a <= 0 || b <= 0 || c <= 0 || (a+b) <= c || (a+c) <= b ||(c+b) <= a)cout<<"Invalid\n";
		else if(a==b && b==c && c==a)cout<<"Equilateral\n";
		else if(a==b || b==c || c==a)cout<<"Isosceles\n";
		else cout<<"Scalene\n";
	}
} 
