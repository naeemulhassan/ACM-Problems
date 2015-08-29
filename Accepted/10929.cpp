#include<iostream>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	char num[1010];	
	int size,sum,i;
	while(scanf("%s",num))
	{
		if(num[0] == '0' && num[1] == '\0')break;
		size = strlen(num);
		sum = 0;
		for(i = 0; i < size; i++)
		{
			if(i%2)sum -= num[i] - 48;
			else sum += num[i] - 48;
		}
		if(!(sum%11))cout<<num<<" is a multiple of 11.\n";
		else cout<<num<<" is not a multiple of 11.\n";
	}
}
