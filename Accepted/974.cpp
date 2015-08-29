#include<iostream>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif

	unsigned int kaprekar[20] = {9,	45,	55,	99,	297,	703,	999,	2223,	2728,	4879,	4950,	5050,	5292,	7272,	7777,	9999,	17344,	22222,	38962,   77778};
		
	int tc,inf,sup,x,count,tmp,y = 0;
	cin>>tc;
	while(tc--)
	{
		cin>>inf>>sup;
		count = 0;
		cout<<"case #"<<++y<<endl;
		for(x = 0; x <= 19; x++)
		{
			tmp = kaprekar[x];
			if(tmp < inf)continue;
			else if (tmp > sup)break;
			else
			{
				cout<<tmp<<endl;
				count++;
			}
		}
		if(!count)cout<<"no kaprekar numbers"<<endl;
		if(tc)cout<<endl;
	}
}
