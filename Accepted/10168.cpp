#include<iostream>
#include<math.h>
 
using namespace std;
bool primes[10000001];
void seive(int n)
{
	int x,y,z;
	int r = 3163;
	primes[0] = primes[1] = false;
	for(x = 2; x <= n; x++)primes[x] = true;
	for(x = 2; x <= r; x++)
	{
		while(!primes[x])x++;
		for(y = x+x; y <= n; y+=x)primes[y] = false;
	}
}
main()
{
	int n,x,y,z;
	seive(10000000);
	while(scanf("%d",&n) != EOF)
	{
		if(n <= 7)
		{
			printf("Impossible.\n");
			continue;
		}
		else if(n%2)
		{
			printf("2 3 ");
			n -= 5;
		}
		else
		{
			printf("2 2 ");
			n -= 4;
		}
		for(z = 2; z <= n; z++)
		{
			if(primes[z] && primes[n-z])
			{
				printf("%d %d\n",z,n-z);
				break;
			}
		}
	}
}
