#include<iostream>

using namespace std;

unsigned long int way[7500]; 
unsigned long int ans[7500]; 

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	register unsigned int y,x,z,n,m;
	int c[] = {1,5,10,25,50};
	ans[0] = 1;
	for(m = 1; m <= 7489; m++)
	{
		n = m;
		way[0] = 1;
		for(x = 0; x < 5; x++)
		{
			z = c[x];
			for(y = z; y <= n; y++)
			{
				way[y] = way[y] + way[y-z];
			}
		}
		if(!(n%5))ans[n/5] = way[n];
		for(z = 1; z <= n; z++)way[z] = 0;
	}
	for(z = 0; z < 1498; z++)cout<<ans[z]<<",";
	return 1;
}
