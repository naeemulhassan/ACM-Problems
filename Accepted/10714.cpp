#include<stdio.h>
#include<stdlib.h> 
main()
{
	int tc,n,max,min,x,y,z,l,h,a;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&l,&n);
		min = l;
		max = 0;
		h = l;
		while(n--)
		{
			scanf("%d",&x);
			y = l - x;			
			z = x > y ? x : y;
			if(max < z)max = z;
			a = abs(x-y);
			if(h >= a)
			{
				h = a;
				z = x < y ? x : y;
				min = z;
			}
		}
		printf("%d %d\n",min,max);
	}
}
