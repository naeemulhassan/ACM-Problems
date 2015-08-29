#include<stdio.h>
#include<math.h>
 
main()
{
	long long int tc,i,j,m,n,p,x,pw[15],a,b,c,d;
	for(i = 1,pw[0] = 1; i <= 13; i++)pw[i] = pw[i-1]*10;
	scanf("%lld",&tc);
	while(tc--)
	{
		scanf("%lld",&n);
		if(n < 46)
		{
			a = 1;
			b = 2;
			while(a<n)
			{
				a += b;
				b++;
			}
			n = n-(a-b+1);
		}
		else if(n < 9046)
		{
			a = 45;
			b = 11;
			while(a<n)
			{
				a += b;
				b += 2;
			}
			n = n-(a-b+2);
		}
		else if(n < 1395496)
		{
			a = 9045;
			b = 192;
			while(a<n)
			{
				a += b;
				b += 3;
			}
			n = n-(a-b+3);
		}
		else if(n < 189414496)
		{
			a = 1395495;
			b = 2893;
			while(a<n)
			{
				a += b;
				b += 4;
			}
			n = n-(a-b+4);
		}
		else
		{
			a = 189414495;
			b = 38894;
			while(a<n)
			{
				a += b;
				b += 5;
			}			
			n = n-(a-b+5);
		}
		i = 0;
		j = 0;
		while(j + 9*pw[i]*(++i) < n)j += 9*pw[i-1]*i;		
		m = (long long int)ceil((n-j+0.0)/i);
		p = i-(n - j - (m-1)*i);
		m += pw[i-1]-1;
		x = (m/pw[p])%10;
		printf("%lld\n",x);
	}
}
