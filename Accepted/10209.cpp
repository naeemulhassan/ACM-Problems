#include<iostream>
#include<math.h>
#define PI 3.14159265358979323846
using namespace std;

main()
{
	long double r,x,y,z,one,two,three,four,five;
	while(scanf("%llf",&r) != EOF)
	{
		one = r*r;
		two = PI*one/4.0;
		three = PI*one/3.0 - sqrt(3.0)*one/4.0;
		z = one - 2*two + three;
		x = two - three - z;
		y = three - 2*x - z;
		printf("%0.3llf %0.3llf %0.3llf\n",y,4.0*x,4.0*z);
	}
}
