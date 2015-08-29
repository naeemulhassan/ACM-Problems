#include<iostream>
#include<math.h>
#define ROOT 1.41421356237309504880168872420969807856967187537695

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	double seg,n,count = 0,k;
	double in,r,ins,t;
	while(cin>>n)
	{
		if(count)cout<<endl;
		seg = 8.0*n - 4.0;
		r = n-0.5;
		r = r*r;
		t = 0.0;
		for(k = 1; k < n; k++)
		{
			ins = r-(k*k);
			ins = sqrt(ins);
			ins = floor(ins);
			t = t+ins;
		}
		ins = 4.0*t;
		printf("In the case n = %0.0f, %0.0f cells contain segments of the circle.\nThere are %0.0f cells completely contained in the circle.\n",n,seg,ins);
		count++;
	}
}
