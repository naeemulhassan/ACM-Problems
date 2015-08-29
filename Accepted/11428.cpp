#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	int n,x,y;
	while(scanf("%d",&n) && n)
	{
		for(y = 1; y < n; y++)
		{
			for(x = y+1; x < n; x++)
			{
				if((x-y)*(x*x+x*y+y*y)==n)goto end;
			}
		}
		end:;
		if(x != y)printf("%d %d\n",x,y);
		else printf("No solution\n");
	}
}
