#include<iostream>

using namespace std;

main()
{
	int Case,amp,freq,x,y,z;
	/*freopen("input","r",stdin);
	freopen("output","w",stdout);*/
	scanf("%d\n\n",&Case);
	while(Case--)
	{
		scanf("%d\n%d\n\n",&amp,&freq);
		for(x = 0; x < freq; x++)
		{
			for(y = 1; y <= amp; y++)
			{
				for(z = y; z > 0; z--)printf("%d",y);
				printf("\n");
			}
			for(y = amp-1; y >= 1; y--)
			{
				for(z = y; z > 0; z--)printf("%d",y);
				printf("\n");
			}
			if(Case == 0 && x == (freq-1));
			else printf("\n");
		}
	}
}
