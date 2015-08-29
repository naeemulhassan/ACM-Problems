#include<stdio.h>
#include<math.h>
 
main()
{
	int i,j,m,n,p,x,pw[11];
	for(i = 1,pw[0] = 1; i <= 8; i++)pw[i] = pw[i-1]*10;
	while(scanf("%d",&n) != EOF)
	{
		i = 0;
		j = 0;
		while(j + 9*pw[i]*(++i) < n)j += 9*pw[i-1]*i;		
		m = (int)ceil((n-j+0.0)/i);
		p = i-(n - j - (m-1)*i);
		m += pw[i-1]-1;
		x = (m/pw[p])%10;
		printf("%d\n",x);
	}
}
