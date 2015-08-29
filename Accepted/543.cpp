#include<iostream>
#include<math.h>

using namespace std;

bool is_prime(unsigned int x)
{
	unsigned int r = int(sqrt(x));
	if(!(r%2))r = r + 1;
	while(r != 1)
	{
		if(!(x%r))return false;
		r = r - 2;
	}
	return true;
}

main()
{
	unsigned int in,l,r;
	while(cin>>in && in != 0)
	{
		unsigned int count = 0;
		l = in / 2;
		for(r = 3; r <= l; r = r + 2)
		{
			if(is_prime(r) && is_prime(in - r))
			{
				cout<<in<<" = "<<r<<" + "<<in-r<<endl;
				break;
			}
		}
	}
}

