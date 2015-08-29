#include<iostream> 
#include<algorithm>

using namespace std;

class nums
{
	public:
		long long int v,m;
		nums(){}
		nums(long long int val,long long int mod)
		{
			v = val;
			m = mod;
		}
};

bool comp(nums f, nums s)
{
	if(f.m > s.m)return false;
	else if(f.m < s.m)return true;
	else
	{
		if(f.v%2 && s.v%2)return f.v>s.v;
		else if(!(f.v%2) && !(s.v%2))return f.v<s.v;
		else return f.v%2;		
	}
}

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	long long int n,m,x,y;
	long long int temp;
	while(scanf("%lld %lld",&n,&m) && n && m)
	{
		x = n;
		y = 0;
		nums values[10010];
		while(x--)
		{
			scanf("%lld",&temp);
			values[y].v = temp;
			values[y++].m = temp%m;
		}
		sort(&values[0],&values[y],comp);
		cout<<n<<" "<<m<<endl;
		for(x = 0; x < y; x++)printf("%lld\n",values[x].v);
	}
	cout<<"0 0"<<endl;
}
