#include<iostream>
#include<math.h>
#define PI 3.141592653589793238462643

using namespace std;

main()
{
	double f,r,n;
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	while(cin>>r>>n)
	{
		f = 360.0/n;
		f = f/180.0*PI;
		f = sin(f);
		f = 0.5*r*r*f*n;
		printf("%.3f\n",f);
	}
}
