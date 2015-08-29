#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	double w,l,x1,x2;	
	while(scanf("%lf %lf",&l,&w)!=EOF)
	{		
		printf("%.3lf %.3lf %.3lf\n",((l+w)-sqrt((double)(l*l-w*l+w*w)))/6.0+1e-8,0.0,(w < l ? w : l)*0.5+1e-8);		
	}
	return 0;
}
