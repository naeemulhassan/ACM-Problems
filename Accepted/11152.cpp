#include<iostream>
#include<math.h>

#define PI 3.14159265358979323846

using namespace std;

main()
{
	int a,b,c;
	double area,outarea,inarea,s,r,R;
	while(cin>>a>>b>>c)
	{
		s = (a+b+c)/2.0;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		r = 2.0*area/(a+b+c);
		inarea = PI*r*r;
		R = (a*b*c)/(4.0*area);
		outarea = PI*R*R;
		outarea = outarea - area;
		area = area - inarea;
		printf("%.4lf %.4lf %.4lf\n",outarea,area,inarea);
	}
}
