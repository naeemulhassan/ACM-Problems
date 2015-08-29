#include<stdio.h>
#include<stdlib.h>
main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	long long int s,m,max,power,lam,tortoise,hare;
	char num[200];
	start:;
	while(scanf("%lld %lld",&s,&m)!=EOF)
	{
		tortoise = 0;	
		power = lam = 1;		
		hare = (tortoise+s)%m;
		max = 1;
		while(max<=m-1)
		{
			if(tortoise==hare)
			{				
				printf("%10lld%10lld    %s\n\n",s,m,"Bad Choice");
				goto start;
			}
			if(power==lam)
			{
				tortoise = hare;
				power *= 2;
				lam = 0;
			}
			hare = (hare+s)%m;		
			lam++;
			max++;
		}
		printf("%10lld%10lld    %s\n\n",s,m,"Good Choice");	
	}
}
