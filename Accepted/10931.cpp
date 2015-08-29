#include<iostream>
#include<cmath>

using namespace std;

main()
{
	long I;
	int i,j;
	int bin[40];
	while(scanf("%ld",&I) && I)
	{
		i = 0;
		j = 0;
		while(I >= 1)
		{
			bin[i++] = I%2;
			j = j + I%2;
			I = I >> 1;			
		}
		cout<<"The parity of ";
		while(i--)cout<<bin[i];
		cout<<" is "<<j<<" (mod 2)."<<endl;			
	}
}
