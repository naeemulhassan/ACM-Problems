#include<iostream>
#include<math.h>
 
using namespace std;
bool primes[10000001];
int list[10000001];
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
	for(x = 2,y = 0; x <= 10000000; x++)if(primes[x])list[y++] = x;
}
bool is_prime(int n)
{
	int i = 0;
	if(n <= 10000000)return primes[n];
	while(i < 664579)
	{
		if(n%list[i] == 0)return false;
		i++;
	}
	return true;
}
main()
{
	int n,x,y,z;
	seive(10000000);
	while(scanf("%d",&n) != EOF)
	{
		if(n <= 4)printf("%d is not the sum of two primes!\n",n);
		else if(n%2)
		{
			if(is_prime(n-2))printf("%d is the sum of 2 and %d.\n",n,n-2);
			else printf("%d is not the sum of two primes!\n",n);
		}
		else
		{			
			for(y = n/2-1; y >= 2; y--)
			{
				if(is_prime(y) && is_prime(n-y))
				{
					printf("%d is the sum of %d and %d.\n",n,y,n-y);
					break;
				}
			}
			if(y == 1)printf("%d is not the sum of two primes!\n",n);
		}
	}
}
		
