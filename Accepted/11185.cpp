#include<iostream>

using namespace std;

main()
{
	long int num,i,j,k;
	int ans[10000];
	while(cin>>num && num >= 0)
	{
		i = 0;
		if(num == 0)
		{
			cout<<num<<endl;
			continue;
		}
		while(num>=1)
		{
			ans[i] = num%3;
			num = num / 3;
			i++;
		}	
		while(i--)
		{
			cout<<ans[i];
		}
		cout<<endl;
	}
}
