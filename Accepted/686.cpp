#include<iostream>
#include<math.h>

using namespace std;

bool is_prime(int x)
{
	int r = int(sqrt(x));
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
	int in,l;
	while(cin>>in && in != 0)
	{
		int count = 0;
		if(in == 4)count = 1;
		else
		{
			l = in / 2;
			for(int r = 3; r <= l; r = r + 2)
				if(is_prime(r) && is_prime(in - r))count++;
		}
		cout<<count<<endl;
	}
}

