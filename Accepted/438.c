#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
int main()
{
	char ans[100];
	double x1,x2,x3,y1,y2,y3,area,l1,l2,l3,d;
	while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3) != EOF)
	{
		l1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		l2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		l3 = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		area = sqrt((l1+l2+l3)*(-l1+l2+l3)*(l1-l2+l3)*(l1+l2-l3));
		d = 2.0*PI*(l1*l2*l3)/area;
		printf("%0.2lf\n",d);
	}
	return 0;
}
