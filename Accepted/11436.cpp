#include<iostream>
#include<math.h> 
using namespace std;
main()
{
	long long int i,n,x,y,s,r,a,k;
	while(scanf("%lld",&n) && n)
	{
		r = (long long int)ceil(pow(n,(1.0/3.0)));
		s = 1000000000;
		a = 0;
		for(x = 1; x <= r; x++)
		{			
			if(!(n%x))
			{				
				y = (long long int)floor((sqrt(n/(3.0*x)-(x*x)/12.0)-x/2.0)+1e-10);
				k = x+y;
				if((k*k*k-y*y*y) == n)
				{					
					if(y<=s && y > 0)
					{
						s = y;
						a = x+y;
					}
				}
			}
		}
		if(!a)printf("No solution\n");
		else printf("%lld %lld\n",a,s);
	}
}
