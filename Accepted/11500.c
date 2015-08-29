#include<stdio.h>
#include<math.h>
 
int main()
{
	double EV1,EV2,AT,D,q;
	while(scanf("%lf %lf %lf %lf",&EV1,&EV2,&AT,&D))
	{
		if(EV1 == 0)break;		
		EV1 = ceil(EV1/D);
		EV2 = ceil(EV2/D);
		if(AT == 3)printf("%0.1lf\n",EV1/(EV1+EV2)*100.0);
		else
		{
			q = (6.0-AT)/AT;
			printf("%0.1lf\n",(1.0-pow(q,EV1))*100.0/(1.0-pow(q,EV1+EV2)));
		}		
	}
	return 0;
}
