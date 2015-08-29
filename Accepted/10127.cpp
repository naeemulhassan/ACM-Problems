#include<iostream>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int n,count,num;
	while(cin>>n)
	{
		count = 0;
		num = 1;
		while(num%n)
		{
			count++;
			num = (num % n)*10+1;
		}
		cout<<count+1<<endl;
	}
}
