#include<iostream>

using namespace std;

main()
{
	long long int l,h,x,ans,z,V,y;
	while(scanf("%lld %lld",&l,&h))
	{
		if(l == 0 && h == 0)break;
		if(l>h)
		{
			x = l;
			l = h;
			h = x;
		}
		ans = 0;
		V = l;
		for(y = l; y <= h; y++)
		{
			z = 0;
			x = y;
			do
			{
				x = (x%2) ? 3*x + 1 : x/2;
				z++;
			}while(x != 1);
			if(ans < z)
			{
				ans = z;
				V = y;
			}
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,V,ans);
	}	
}
