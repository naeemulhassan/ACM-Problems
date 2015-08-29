#include<iostream>

using namespace std;

unsigned long long int way[300000]; 

main()
{
	register unsigned int x,y,z,n;
	int c[] = {50,25,10,5,1};
	
	do
	{
		cin>>n;
		way[0] = 1;
		if(feof(stdin))break;
		for(x = 0; x < 5; x++)
		{
			z = c[x];
			for(y = z; y <= n; y++)
			{
				way[y] = way[y] + way[y-z];
			}
		}
		if(way[n] == 1)printf("There is only %llu way to produce %u cents change.\n",way[n],n);
		else if(way[n] > 1)printf("There are %llu ways to produce %u cents change.\n",way[n],n);
		for(z = 1; z <= n; z++)way[z] = 0;
	}while(1);
}
