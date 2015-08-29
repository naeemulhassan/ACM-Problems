#include<stdio.h>
#include<iostream.h>
#include<math.h>

void main()
{
	float x1,y1,x2,y2,x3,y3;
	float cx,cy,r,e;
	float a1,b1,a2,b2,k1,k2;
	char op1,op2,op3;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
	{
		a1 = (x2-x1);
		b1 = (y2-y1);
		k1 = (y1+y2)*(y1-y2)/2 + (x1+x2)*(x1-x2)/2;

		a2 = (x3-x2);
		b2 = (y3-y2);
		k2 = (y2+y3)*(y2-y3)/2 + (x2+x3)*(x2-x3)/2;

		cx = (b1*k2 - b2*k1) / (a1*b2 - b1*a2);
		cy = (a1*k2 - a2*k1) / (a2*b1 - b2*a1);

		r = sqrt(pow(cx-x1,2) + pow(cy-y1,2));
		e = pow(cx,2) + pow(cy,2) - pow(r,2);

		if(cx < 0)op1 = '+';
		else op1 = '-';
		if(cy < 0)op2 = '+';
		else op2 = '-';
		if(e < 0)op3 = '-';
		else op3 = '+';

		printf("(x %c %0.3lf)^2 + (y %c %0.3f)^2 = %0.3f^2\n",op1,fabs(cx),op2,fabs(cy),fabs(r));
		printf("x^2 + y^2 %c %0.3fx %c %0.3fy %c %0.3f = 0\n\n",op1,fabs(2*cx),op2,fabs(2*cy),op3,fabs(e));
	}
}