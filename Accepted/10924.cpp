#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int ans)
{
	int r = (int)sqrt(ans);
	while(r > 1)
	{
		if(!(ans%r))
		{
			return false;
		}
		r--;
	}
	return true;
}

main()
{
	string str;
	int l,ans;
	while(cin>>str)
	{
		int l = str.length();
		ans = 0;
		while(--l >= 0)
		{
			if(str[l] >= 'A' && str[l] <= 'Z')ans = ans + str[l] -38;
			else if(str[l] >= 'a' && str[l] <= 'z')ans = ans + str[l] -96;
		}
		//cout<<ans<<endl;
		if(ans == 1 || ans == 2)cout<<"It is a prime word."<<endl;
		else if(is_prime(ans) == true)cout<<"It is a prime word."<<endl;
		else cout<<"It is not a prime word."<<endl;		
	}
}
