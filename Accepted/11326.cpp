#include<iostream>
#include<math.h>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int t,n;
	double L,W,th,w,x,y,z,A,B;
	cin>>t;
	while(t--)
	{
		cin>>L>>W>>th;
		th = th*3.14159265358979323846264338327950288419716939937511/180.0;
		A = L/cos(th);
		B = L*tan(th);
		x = B/W;
		n = (int)floor(x);
		if(n%2)x = W-(x-n)*W;
		else x = (x-n)*W;
		B = sqrt(L*L+x*x);
		printf("%0.3f\n",A/B);
	}
}
