#include <stdio.h>
#include <math.h>

int main(void) 
{
	double harmy, oparmy;
	while(scanf("%lf %lf",&harmy,&oparmy) == 2)
	{
		printf("%.0lf\n",fabs(harmy-oparmy));
	}
	return 0;
}
