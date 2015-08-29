#include<stdio.h>
#include<stdlib.h>
main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	long long int n,tc,max,power,lam,tortoise,hare;
	char num[200];
	scanf("%lld",&tc);
	while(tc--)
	{
		scanf("%lld %lld",&n,&tortoise);	
		max = tortoise;
		power = lam = 1;
		sprintf(num,"%lld",tortoise*tortoise);
		num[n]='\0';
		hare = atol(num);
		if(max<hare)max = hare;
		while(tortoise != hare)
		{
			if(power==lam)
			{
				tortoise = hare;
				power *= 2;
				lam = 0;
			}
			sprintf(num,"%lld",hare*hare);
			num[n]='\0';
			hare = atol(num);
			if(max<hare)max=hare;
			lam++;	
		}
		printf("%lld\n",max);
	}
}
