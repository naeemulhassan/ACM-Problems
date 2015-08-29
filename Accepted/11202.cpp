#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	int tc;
	int m,n,x,y,z;
	long int ans;
	int tmp;
	cin>>tc;
	while(tc--)
	{
		cin>>m>>n;
		if(m==n)
		{
			if(m%2)m++;
			ans = m*(m+2)/8;
		}
		else
		{
			if(m>n)
			{
				tmp = m;
				m = n;
				n = tmp;
			}
			x = ceil(m/2.0);
			y = ceil(n/2.0);
			z = y-x;		
			ans = (x*(x+1) + y*(y+1) - z*(z+1)) / 2 - x;
		}
		cout<<ans<<endl; 
	}
}


