#include<iostream>
#include<algorithm>

using namespace std;

int age[2000010];

main()
{
	int tc,i;
	while(scanf("%d",&tc) && tc)
	{
		for(i = 0; i < tc; i++)scanf("%d",&age[i]);
		sort(&age[0],&age[tc]);
		for(i = 0; i < tc-1; i++)
		{
			printf("%d ",age[i]);
			age[i] = 0;
		}
		printf("%d\n",age[i]);
		age[i] = 0;
	}
}
