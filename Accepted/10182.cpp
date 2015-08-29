#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	int n,sx,sy,c,count,start,mx,my,mid;
	sy = 1;
	while(scanf("%d",&n) != EOF)
	{
		if(n==1)
		{
			printf("0 0\n");
			continue;
		}
		c = (int)floor((sqrt(12*n-15)-3.0)/6.0);
		sx = c;
		start = 3*c*c+3*c+2;		
		count = (c+1);
		mid = start+count*3;
		mx = 0-c;
		my = -1;		
		if(n < count+start)printf("%d %d\n",sx-n+start,sy+n-start);
		else if(n < count+count+start)printf("%d %d\n",0-n+c+start,count);
		else if(n < count+count+count+start)printf("%d %d\n",0-count,start+count+count+c-n);
		else if(n < count+mid)printf("%d %d\n",mx+n-mid,my-n+mid);
		else if(n < count+count+mid)printf("%d %d\n",n-mid-c,0-count);
		else if(n < count+count+count+mid)printf("%d %d\n",count,0-(mid+count+count+c-n));
	}
}

