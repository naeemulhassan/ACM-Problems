#include<stdio.h>
#include<math.h>
bool primes[10202];
int prime[10202];
void seive()
{
	int i,j,p;
	primes[0] = primes[1] = false;
	for(i = 2; i <= 10201; i++)primes[i] = true;
	for(i = 2; i <= 101; i++)
	{
		while(!primes[i])i++;
		for(j = i+i; j <= 10201; j+=i)primes[j]=false;
	}
	for(i = 2,j = 0; i <= 10201; i++)if(primes[i])prime[j++]=i;
} 
main()
{
	int tc,i,j,k,n,p,max,x;
	seive();
	scanf("%d",&tc);
	while(tc--)
	{		
		scanf("%d",&n);
		max = 0;
		for(i = 0; prime[i] <= n; i++)
		{
			p = (int)floor(n/prime[i]);
			if(max < n-p*prime[i])
			{
				max = n - p*prime[i];
				x = prime[i];
			}
		}
		printf("%d\n",x);
	}
}
