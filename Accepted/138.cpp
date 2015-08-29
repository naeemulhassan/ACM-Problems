#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	register unsigned long long int m,x,y,z,max;
	long double n;
	max = (unsigned long long int )-1;
	
	for(y = 1; y <= max ; y++)
	{		
		n = y/1.414213562;		
		m = floor(n);
		x = m*(m+1)/2;
		z = y*(y+1)/2;
		if(z-2*x-m-1==0)cout<<m+1<<" "<<y<<endl;
	}
}
