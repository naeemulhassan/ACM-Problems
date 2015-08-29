#include<stdio.h>
#include<math.h>

main()
{
	unsigned long long int m,i,j;
	while(scanf("%llu",&m) && m)
	{
		i = (m*10)/9;
		if(i%10==0)
		{
			j = i-1;
			if(j-j/10==m)
			{
				printf("%llu %llu\n",j,i);
				continue;
			}
		}
		else if(i%10==9)
		{
			j = i+1;
			if(j-j/10==m)
			{
				printf("%llu %llu\n",i,j);
				continue;
			}
		}
		printf("%llu\n",i);
	}
}
