#include<stdio.h>
#include<math.h>
 
main()
{
	long int x,k,p,c,tc;
	scanf("%ld",&tc);
	while(tc--)
	{
		scanf("%ld %ld",&x,&k);
		c = (int)ceil((x+0.0)/k);
		p = k*c-x;
		printf("%ld %ld\n",p,k-p);
	}
}
