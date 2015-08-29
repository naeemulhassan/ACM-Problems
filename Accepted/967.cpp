#include<iostream>
#include<math.h>

using namespace std;

bool isprime(long int x)
{
	long int r = int(sqrt(x));
	if(!(r%2))r = r -1;
	while(r!=1)
	{
		if(!(x%r))return false;
		r = r - 2;
	}
	return true;
}

main(void)
{	
	long int a,b,c,d;
	int x,count;
	do
	{		
		cin>>a;
		if(a == -1)break;
		if(!(a%2))c = a + 1;
		else c = a;
		cin>>b;
		count = 0;
		for(; c <= b; c = c + 2)
		{
			int l = int(floor(log10(c))) + 1;
			d = c;
			for(x = l; x >= 1; x-- )
			{					
				if(!(d%2))break;
				d = d / 10;
			}
			if(x == 0)
			{								
				int l = int(floor(log10(c))) + 1;
				d = c;
				for(x = l; x >= 1; x-- )
				{	
					if(!isprime(d))break;
					d = ( d % int(pow(10, l-1) ) ) * 10 + ( d / int(pow(10, l-1) ));
				}
				if(x == 0)
				{
					count++;											
				}
			}					
		}
		if(count > 1)cout<<count<<" Circular Primes.\n";
		else if(!count)cout<<"No Circular Primes.\n";
		else if(count == 1)cout<<count<<" Circular Prime.\n";
	}while(1);
}
