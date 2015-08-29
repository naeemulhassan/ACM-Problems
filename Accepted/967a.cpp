#include<iostream>

using namespace std;

main(void)
{
	long cp[42] = {113,131,197,199,311,337,373,719,733,919,971,991,1193,1931,3119,3779,7793,7937,9311,9377, 11939,19391,19937,37199,39119,71993,91193,93719,93911,99371,193939,199933,319993,331999,391939,393919, 919393,933199,939193,939391,993319,999331};

	int min,max,x,count;
	long a,b;
	
	do
	{		
		cin>>a;
		if(a == -1)break;		
		cin>>b;		
		max = 0;
		min = 41;
		if( (a < 113 && b <113) || (a > 999331 && b > 999331) )count = 0;
		else
		{
			for(x = 0; x <= 41; x++)
			{
				if(a <= cp[x])
				{
					min = x;
					break;
				}
			}
			for(x = 41; x >= 0; x--)
			{
				if(b >= cp[x])
				{
					max = x;
					break;
				}
			}
					
			count = max - min + 1;
		}
		
		if(count > 1)cout<<count<<" Circular Primes.\n";
		else if(!count)cout<<"No Circular Primes.\n";
		else if(count == 1)cout<<count<<" Circular Prime.\n";
			
	}while(1);
}
