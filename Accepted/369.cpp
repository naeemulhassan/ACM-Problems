#include<iostream.h>
#include<math.h>

unsigned long gcd(unsigned long x, unsigned long y)
{
	if(x == 0)return y;
	else return gcd(y%x,x);
}

void main()
{
	unsigned long n,k,max,x,y,val,min,arr[10000],arr2[10000],g;
	while(cin>>n>>k)
	{
		val = 1;
		if(n == 0 && k == 0)break;
		if(k > (n - k) )
		{
			max = k + 1;
			min = (n - k);
		}
		else
		{
			max = (n - k) + 1;
			min = k;
		}
		for(x = max; x <= n; x++)arr2[x] = x;
		for(x = 2; x <= min; x++)arr[x] = x;
		for(x = max; x <= n; x++)
		{
			for(y = 2; y <= min; y++)
			{
				g = gcd(arr2[x],arr[y]); 
				if( g!= 1)
				{
					arr2[x] = arr2[x] /  g;
					arr[y] = arr[y] / g;
				}
			}
		}
		for(x = max; x <= n; x++)val = val * arr2[x];
		cout<<n<<" things taken "<<k<<" at a time is "<<val<<" exactly."<<endl;
	}
}