#include<iostream>
#include<math.h>

using namespace std;

main()
{
	int N,n,m;
	float ans;
	cin>>N;
	while(N--)
	{
		cin>>n>>m;
		ans = ((n-m)/(m-1.0)) +1.0;
		if(ans != floor(ans))cout<<"cannot do this"<<endl;
		else printf("%0.0f\n",ans);
	}
}
