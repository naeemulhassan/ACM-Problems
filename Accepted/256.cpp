#include<iostream>
#include<math.h>

using namespace std;

main()
{
	freopen("input","r",stdin);
	freopen("output","w",stdout);
	int digit,h;
	unsigned long int x,y,z,fh,lh;
	while(cin>>digit)
	{
		h = digit / 2;
		y = (unsigned long int)(pow(10,digit)) - 1;
		for(x = 0; x <= y; x++)
		{
			fh = x / (int)(pow(10,h));
			lh = x % (int)(pow(10,h));
			z = (fh+lh)*(fh+lh);
			if(z == x)
			{
				if(digit == 2)printf("%.2llu\n",x);
				else if(digit == 4)printf("%.4llu\n",x);
				else if(digit == 6)printf("%.6llu\n",x);
				else if(digit == 8)printf("%.8llu\n",x);
			}
		}
	}
}
