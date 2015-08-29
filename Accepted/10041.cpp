#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

main()
{
	int stnum[500],x,y,z,testcase,nrelative,sum;
	cin>>testcase;
	while(testcase--)
	{
		cin>>nrelative;
		for(x = 0; x < nrelative; x++)cin>>stnum[x];		
		sort(stnum,stnum+nrelative);	
		z = floor(nrelative/2);
		sum = 0;
		for(y = 0; y < nrelative; y++)
		{
			sum = sum + abs(stnum[z]-stnum[y]);
		}
		cout<<sum<<endl;		
	}
}
