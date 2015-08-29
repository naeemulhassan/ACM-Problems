#include<stdio.h>
#include<math.h>
bool primes[2026];
void seive()
{
	int i,j;
	primes[0] = primes[1] = false;
	for(i = 2; i <= 2025; i++)primes[i] = true;
	for(i = 2; i <= 45; i++)
	{
		while(!primes[i])i++;
		for(j = i+i; j <= 2025; j+=i)primes[j] = false;
	}
}

main()
{
	int tc,i,j,k;
	char ch;
	int ld[256];
	seive();
	scanf("%d\n",&tc);
	for(i = 1; i <= tc; i++)
	{
		for(j = 0; j <= 255; j++)ld[j] = 0;
		k = 0;
		while((ch = getchar()) != '\n')ld[ch]++;
		printf("Case %d: ",i);
		for(j = 48; j <= 57; j++)if(primes[ld[j]])
		{
			putchar(j);
			k = 1;
		}
		for(j = 65; j <= 90; j++)if(primes[ld[j]])
		{
			putchar(j);
			k = 1;
		}
		for(j = 97; j <= 122; j++)if(primes[ld[j]])
		{
			putchar(j);
			k = 1;
		}
		if(!k)printf("empty");
		printf("\n");
	}
}
