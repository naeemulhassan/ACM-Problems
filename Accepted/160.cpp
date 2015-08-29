#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int n,x,y,z,count,c;
	int f;
	cin>>n;
	while(n)
	{		
		c = 0;
		printf("%3d",n);
		printf("! =");
		for(x = 0; primes[x] <= n && x < 25; x++)
		{
			count = 0;
			y = 1;
			while(1)
			{
				f = (int)(pow(primes[x],y));
				z = floor(n/f);
				if(!z)break;
				count = count + z;
				y++;
			}
			if(c==15) printf("\n      ");
			if(count)
			{
				printf("%3d",count);
				c++;
			}
		}
		cout<<endl;
		cin>>n;
	}
}
