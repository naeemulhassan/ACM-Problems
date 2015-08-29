#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, i, phi,r,y;
	while(scanf("%d", &n) == 1)
	{
		if(n == 0)
			break;
		phi = n;
		y = n;
		r = (int)ceil(sqrt(n));
		for(i = 2; i <= r; i++)
		{
			if(n%i == 0)
			{
				phi = (phi / i) * (i-1);
				n /= i;
				while(n % i == 0)
					n /= i;
				r = (int)ceil(sqrt(n));
			}
		}		
		if(i >= r && n != 1)phi = (phi / n) * (n-1);
		else if(phi == y)
			phi--;
		printf("%d\n", phi);
	}
	return 0;
}
 
