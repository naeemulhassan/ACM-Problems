#include<iostream>
#include<queue>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	unsigned int size,i;
	long long sum,tsum;
	priority_queue <unsigned int, vector<unsigned int>, greater<unsigned int> > q;
	while(scanf("%u",&size) && size)
	{
		while(size--)
		{
			scanf("%u",&i);
			q.push(i);
		}
		sum = 0;
		while(true)
		{
			tsum = q.top();
			q.pop();
			tsum += q.top();
			q.pop();			
			sum += tsum;			
			if(q.empty())break;
			q.push(tsum);			
		}
		cout<<sum<<endl;
	}
}
