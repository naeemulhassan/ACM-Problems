#include<stdio.h>
#include<math.h>
 
main()
{
	int u,d,h,p,ans,x,b,c;
	int n;
	while(scanf("%d %d %d %d",&h,&u,&d,&p) && h)
	{
		n = 1;
		p = u*p;
		x = 0;
		u *= 100;
		d *= 100;
		h *= 100;
		while(1)
		{
			x = x + u;
			if(x > h)
			{
				printf("success on day %d\n",n);
				break;
			}
			x = x - d;
			if(x < 0)
			{
				printf("failure on day %d\n",n);
				break;
			}
			u -= p;
			if(u < 0)u = 0;
			n++;
		}
	}
}
