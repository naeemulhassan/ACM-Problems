#include<iostream>

using namespace std;

unsigned long long int way[300000]; 

main()
{
	register unsigned int x,y,z,n;
	float fn;
	int c[] = {2000,1000,400,200,100,40,20,10,4,2,1};
	
	do
	{
		cin>>fn;
		n = (int)(fn*100+0.5);
		n = n / 5;
		way[0] = 1;
		if(fn == 0.00)break;
		for(x = 0; x < 11; x++)
		{
			z = c[x];
			for(y = z; y <= n; y++)
			{
				way[y] = way[y] + way[y-z];
			}
		}
		printf("%6.2f%17llu\n",fn,way[n]);
		for(z = 1; z <= n; z++)way[z] = 0;
	}while(1);
}
