#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int gcd(int m,int n)
{
	if(m==0)return n;
	return gcd(n%m,m);
}

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int N,temp,count,x;
	double ans;
	vector <int> num;
	while(cin>>N)
	{
		if(!N)break;
		x = N;
		count = 0;
		while(N--)
		{
			cin>>temp;
			num.push_back(temp);
		}
		for(temp = 0; temp < x; temp++)
		{
			for(int temp2 = temp+1; temp2 < x; temp2++)
			{
				if(gcd(num[temp],num[temp2])==1)count++;
			}
		}
		temp = x*(x-1)/2;
		ans = 6.0*temp/count;
		ans = sqrt(ans);
		if(!count)printf("No estimate for this data set.\n");
		else printf("%.6f\n",ans);
		for(temp = 0; temp < x; temp++)num.pop_back();
	}
}
