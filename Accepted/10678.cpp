#include<stdio.h>
#include<math.h>
#define pi 2*acos(0) 
main()
{
	double area,a,b,e;
	int L,D,tc;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&D,&L);
		a=L/2.0;
		e=(double)D/L;
		b=sqrt(a*a*(1-e*e));
		printf("%0.3lf\n",pi*a*b);
	}
}
