#include<iostream>
#include<math.h>

using namespace std;

char *pf[] = {"0","1","6",
			"28","0",
			"496","0",
			"8128","0","0","0","0","0",
			"33550336","0","0","0",
			"8589869056","0",
			"137438691328","0","0","0","0","0","0","0","0","0","0","0",
			"2305843008139952128"};
bool prime[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1};		
main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	int n;
	while(cin>>n)
	{
		if(!n)break;
		if(!(pf[n] == "0"))cout<<"Perfect: "<<pf[n]<<"!\n";
		else if(prime[n])cout<<"Given number is prime. But, NO perfect number is available.\n";
		else if(!prime[n])cout<<"Given number is NOT prime! NO perfect number is available.\n";
	}
}
