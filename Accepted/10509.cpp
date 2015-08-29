#include<stdio.h>
#include<math.h>

main()
{
	double n,ans;
	int a;
	while(scanf("%lf",&n) && n)
	{
		a = (int)floor(pow(n,1.0/3.0)+1e-8);
		ans = a + (n-pow(a,3))/(3*a*a);
		printf("%0.4lf\n",ans);
	}
}
