#include<iostream>
#include<math.h>
 
using namespace std;
bool prime[10001] = {false};
main()
{
	long a,b,x,y,count;
	double ans;
	for(x = 0; x <= 10000; x++)
	{
		a = x*x + x + 41;
		y = sqrt(a) + 1;
		while(y-- > 1)
		{
			if(!(a%y))
			{
				prime[x] = false;
				break;
			}
		}
		if(y == 1)prime[x] = true;
		
	}
	while(scanf("%d %d",&a,&b) != EOF)
	{
		count = 0;
		for(x = a; x <= b; x++)if(prime[x])count++;
		ans = count*100.00/(b-a+1.0);
		if((ans*100.00)-floor(ans*100.00) >= 0.50)ans = (floor(ans*100.00) + 1.0)/100.00;
		else ans = (floor(ans*100.00))/100.00;
		printf("%0.2lf\n",ans);
	}
}
		
