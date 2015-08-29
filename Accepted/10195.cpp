#include<iostream>
#include<cmath>

using namespace std;

main()
{
	double a,b,c,s,r;
	char str[50];
	while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)
	{
		s = (a+b+c)/2.0;
		if(a==0.0 || b == 0.0 || c==0.0)printf("The radius of the round table is: 0.000\n");
		else printf("The radius of the round table is: %0.3lf\n",sqrt((s-a)*(s-b)*(s-c)/s));
	}	
}
