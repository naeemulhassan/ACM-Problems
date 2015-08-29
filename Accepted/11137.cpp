#include <stdio.h>
#define MAXTOTAL 10000

long long nway[MAXTOTAL+1];

int coin[22];

main() {
	int i,j,n,v,c;
	for(i = 1; i <= 21; i++)coin[i] = i*i*i;
	while(scanf("%d",&n) != EOF)
	{
		nway[0] = 1;
		for (i=1; i<=21; i++)
		{
			c = coin[i];
			for (j=c; j<=n; j++)nway[j] += nway[j-c];
		}	
		printf("%lld\n",nway[n]);	
		for(i = 0; i <= n; i++)nway[i]=0;
	}
} 
