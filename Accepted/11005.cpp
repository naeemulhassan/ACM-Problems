#include<iostream>
 
using namespace std;
int num,str[40];
void base(int b)
{
	int x,y,z;
	z = num;
	x = 0;
	while(z > 0)
	{
		str[x++]=z%b;
		z/=b;
	}
	str[x]=-1;
}
main()
{
	int tc,i,j,k,l,c[40],n,min,sum,ans[40];
	scanf("%d",&tc);	
	for(i = 1; i <= tc; i++)
	{
		for(j = 0; j < 36; j++)scanf("%d",&c[j]);
		scanf("%d",&n);
		printf("Case %d:\n",i);
		for(j = 1; j <= n; j++)
		{
			scanf("%d",&num);
			min = 2147483647;
			for(k = 2; k <= 36; k++)
			{
				base(k);
				sum = 0;
				for(l = 0; str[l] != -1; l++)sum+=c[str[l]];
				if(sum<min)min = sum;
				ans[k]=sum;
			}
			printf("Cheapest base(s) for number %d:",num);
			for(k = 2; k <= 36; k++)
			{
				if(ans[k]==min)printf(" %d",k);
			}
			printf("\n");			
		}
		if(i != tc)printf("\n");
	}
}

