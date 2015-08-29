#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	long int m,n;
	unsigned long long j,t,i,h,k;
	while(scanf("%ld %ld",&n,&m) != EOF)
	{
		i = h = 1;
		j = k = 0;
		while(n > 0)
		{
			if(n%2)
			{
				t = j*h;
				j = i*h + j*k + t;
				i = i*k + t;
			}
			t = h*h;
			h = 2*k*h + t;
			k = k*k + t;
			n = (long int)floor(n/2);
		}
		printf("%ld\n",j%(long int)pow(2,m));
	}
}
