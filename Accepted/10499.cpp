#include<iostream>
#include<math.h>

using namespace std;

main()
{
	long long int n;
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	cin>>n;
	while(n > 0)
	{
		if(n == 1)printf("%d%%\n",0);
		else
		{
			n = n*25;
			printf("%lld%%\n",n);
		}
		cin>>n;
	}
}
