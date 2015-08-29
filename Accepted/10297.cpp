#include<iostream>
#include<math.h>
#define PI 3.14159265358979323846

using namespace std;

main()
{
	int D,V;
	double d;
	while(cin>>D>>V)
	{
		if(D == 0 && V == 0)break;
		d = pow(D,3)*PI - 6*V;
		d = d / PI;
		d = pow(d,0.33333333333333333);
		printf("%.3f\n",d);
	} 
}
