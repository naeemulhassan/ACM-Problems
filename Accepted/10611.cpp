#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
	int i,N,Q,num[50005],q,s,l;
	vector<int>::iterator start,last;
	scanf("%d",&N);
	for(i=0;i<N;i++)scanf("%d",&num[i]);
	vector<int>n(num,num+N);
	scanf("%d",&Q);
	for(i=0;i<Q;i++)
	{
		scanf("%d",&q);
		start = lower_bound(n.begin(),n.end(),q);
		last = upper_bound(n.begin(),n.end(),q);
		s=n[int(start-n.begin())-1];
		l=n[int(last-n.begin())];
		if(s>=q && l<=q)printf("X X\n");
		else if(s>=q)printf("X %d\n",l);
		else if(l<=q)printf("%d X\n",s);
		else printf("%d %d\n",s,l);
	}
}
