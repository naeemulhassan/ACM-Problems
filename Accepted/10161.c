#include<stdio.h>
#include<math.h> 
main()
{
	int n,x,y,z;
	while(scanf("%d",&n) && n)
	{
		x = ceil(sqrt(n));
		if(x%2)
		{
			if((n-pow(x-1,2)) >= x)
			{
				z = pow(x,2)-n+1;
				y = x;
			}
			else
			{
				z = x;
				y = (n-pow(x-1,2));
			}			
		}
		else
		{
			if((n-pow(x-1,2)) >= x)
			{
				y = pow(x,2)-n+1;
				z = x;
			}
			else
			{
				y = x;
				z = (n-pow(x-1,2));
			}			
		}
		printf("%d %d\n",z,y);
	}
}
