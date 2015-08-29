#include<iostream>
#include<math.h>
 
using namespace std;

int is_perfect(unsigned int n)
{
	int x,sum = 0;
	for(x = 1; x <= floor((n/2)); x++)
	{
		if(!(n%x))sum = sum + x;
	}
	if(sum == n)return 0;
	if(sum > n)return 1;
	if(sum < n)return -1;
}

main()
{
	unsigned int n[100],x = 0,count = 0;
	int ans;
	while(cin>>n[x])
	{
		if(!n[x++])break;
		count++;
	}
	cout<<"PERFECTION OUTPUT\n";
	for(x = 0; x < count; x++)
	{
		ans = is_perfect(n[x]);
		if(ans == 0)printf("%5u  PERFECT\n",n[x]);
		else if(ans == 1)printf("%5u  ABUNDANT\n",n[x]);
		if(ans == -1)printf("%5u  DEFICIENT\n",n[x]);
	}
	cout<<"END OF OUTPUT\n";
}
