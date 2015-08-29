#include<iostream.h>
#include<math.h>

void main()
{
	int n,m,l,y,x,b1,b2;
	cin>>n;
	while(n--)
	{
		b1 = b2 = 0;
		cin>>m;
		x = m;
		l = floor(log(m)/log(2)) + 1;
		while(l--)
		{
			y = x & 1;
			x = x >> 1;
			if(y)b1++;
		}
		l = floor(log10(m)) + 1;
		while(l--)
		{
			y = m / pow(10,l);
			m = m % int(pow(10,l));
			x = x + y * pow(16,l);
		}

		l = floor(log(x)/log(2)) + 1;
		while(l--)
		{
			y = x & 1;
			x = x >> 1;
			if(y)b2++;
		}
		cout<<b1<<" "<<b2<<endl;
	}
}
