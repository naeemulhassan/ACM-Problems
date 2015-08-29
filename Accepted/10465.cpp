#include<stdio.h>
 
main()
{
	int m,n,t,a,b,c,max,x,y,r,min;
	while(scanf("%d %d %d",&m,&n,&t)!=EOF)
	{
		
		if(n<m)
		{
			x = m;
			m = n;
			n = x;
		}
		y = t/m;
		max = 0;
		a = 0;
		b = 0;
		r = t;
		min = 0;			
		for(x = 0; x <= y; x++)
		{
			c = (t-x*m)/n;
			if(max < c+x && c*n+x*m==t)
			{
				a = c;
				b = x;
				max = b+a;
			}
			else if(c*n+x*m<t && r >= t-c*n-x*m)
			{
				r = t-c*n-x*m;
				min = c+x;
			}
		}
		if(b*m + (max-b)*n == t)printf("%d\n",max);
		else printf("%d %d\n",min,r);
	}
}
