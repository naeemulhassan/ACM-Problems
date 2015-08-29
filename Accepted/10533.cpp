#include<stdio.h>
#include<math.h>
#include<string.h>
bool primes[1002010];
int prime[1002010];
void seive(int n)
{	
	int i,r,j,l,k,t,tmp;
	char num[20];
	primes[0]=0;
	primes[1]=0;
	for(i = 2; i <= n; i++)primes[i]=true;
	r = (int)sqrt(n);
	for(i = 2; i <= r; i++)
	{
		while(!primes[i])i++;
		for(j = i+i; j <= n; j+=i)if(j%i==0)primes[j]=false;
	}
	prime[0] = prime[1] = 0;
	prime[2]=0;
	tmp = 1;
	for(i = 2; i <= n; i++)
	{
		if(primes[i])
		{
			sprintf(num,"%d",i);	
			l = strlen(num);
			t= 0;
			for(k = 0; k < l; k++)t+=(num[k]-48);
			if(primes[t])prime[i]=++tmp;
		}
	}	
}

main()
{
	int tc,t1,t2;
	seive(1002001);
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&t1,&t2);
		if(t1==1 && t2==1)printf("0\n");
		else
		{
			while(!prime[t1])t1++;
			while(!prime[t2])t2--;
			printf("%d\n",prime[t2]-prime[t1]+1);
		}
	}
}
