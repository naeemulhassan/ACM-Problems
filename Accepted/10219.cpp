#include<iostream>
#include<math.h>

using namespace std;

main()
{
	double n,k,count,x;
	while(scanf("%lf %lf",&n,&k) != EOF)
	{
		count = 0;
		k = (k > (n-k)) ? k : n-k;
		for(x = n; x > k; x--)count += log10(x);
		x = n - k;
		while(x > 1)count -= log10(x--);
		printf("%.0lf\n",floor(count) + 1.0);
	}
}
