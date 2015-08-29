#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

main()
{
	char n[10000];
	int l,ans,x,y;
	cin>>n;
	while(n[0] != 48)
	{
		l = strlen(n);
		ans = 0;
		for(x = 0; x < l; x++)
		{
			ans = ans + (n[x] - 48)*(int(pow(2,l-x)) - 1);
		}
		cout<<ans<<endl;
		cin>>n;
	}
}

