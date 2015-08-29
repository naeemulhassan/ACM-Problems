#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

double num[10010];

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	double X,key;
	unsigned long int state = 0,j,i;
	while(cin>>num[state])
	{
		state++;
		for(j = 1; j < state; j++)
		{
			key = num[j];
			i = j - 1;
			while(i >= 0 && num[i] > key)
			{
				num[i+1] = num[i];
				i--;
			}
			num[i+1] = key;
		}
		if(state%2)
		{
			printf("%.0lf\n",num[(state-1)/2]);
		}
		else
		{
			printf("%.0lf\n",floor((num[state/2]+num[(state/2)-1])/2));
		}
	}
}
