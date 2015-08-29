#include<cstdio>
#include<algorithm>

using namespace std;
int days[3655];
int main()
{
	int tc,d,p,party[110],i,x,y,ans;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d\n%d",&d,&p);
		for(i = 0; i < p; i++)scanf("%d",&party[i]);
		ans = 0;
		for(x = 0; x < p; x++)
		{
			for(y = 1; y <= d; y++)
			{
				if(!days[y] && y%party[x] == 0)
				{
					days[y] = 1;
					ans++;
				}
			}
		}
		for(x = 6; x <= d; x+= 7)if(days[x])ans--;
		for(x = 7; x <= d; x+= 7)if(days[x])ans--;
		printf("%d\n",ans);
		for(x = 0; x <= d; x++)days[x] = 0;
	}
	return 0;
} 
