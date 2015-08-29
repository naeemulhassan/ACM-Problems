#include<iostream>
#include<math.h>
#define PI 0.01745329251994329914588889
using namespace std;

main()
{
	long double a,s,x,y;
	char deg[5];
	while(scanf("%llf %llf %s",&s,&a,deg) != EOF)
	{		
		if(!strcmp(deg,"min"))a /= 60.00;		
		if(a > 180.00) a = 360.00 - a;
		y = (s+6440.00)*a*PI;
		if(a != 180.00)x = (s+6440.00)*sin(a*PI)/sin((180.00-a)/2*PI);
		else x = 2.00*(s+6440.00);
		printf("%0.6llf %0.6llf\n",y,x);
	}
}
		
