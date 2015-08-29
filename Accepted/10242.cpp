#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	long double a,b,c,d,e,f,g,h,p,q,x,y,k1,k2,det;
	while(scanf("%llf %llf %llf %llf %llf %llf %llf %llf",&a,&b,&c,&d,&g,&h,&e,&f) != EOF)
	{
		if(a == g && b == h)
		{
			a = c;
			b = d;
			c = g;
			d = h;
		}
		else if(a == e && b == f)
		{
			a = c;
			b = d;
			c = e;
			d = f;
			e = g;
			f = h;
		}
		else if(c == e && d == f)
		{
			e = g;
			f = h;
		}		
		x = a + e - c;
		y = b + f - d;
		printf("%0.3llf %0.3llf\n",x,y);
	}
}
