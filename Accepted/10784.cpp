#include<iostream>
#include<math.h>

using namespace std;

main()
{
	unsigned long long int N,x,y,max = (unsigned long long int)-1,count = 0;
	long long double f;
	cin>>N;
	while(N)
	{
		count++;
		x = N*2;
		y = (unsigned long long int)(ceil(sqrt(x))) + 1;
		for(; y <= max; y++)
		{
			if( y*(y-3) >= x )break;
		}
		cout<<"Case "<<count<<": "<<y<<endl;
		cin>>N;
	}
}
