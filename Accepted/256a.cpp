#include<iostream>
#include<math.h>

using namespace std;

main()
{
	//freopen("input","r",stdin);
	//freopen("output","w",stdout);
	int digit,h;
	unsigned long int T[] = {0,1,81};
	unsigned long int F[] = {0,1,2025,3025,9801};
	unsigned long int S[] = {0,1,88209,494209,998001};
	unsigned long int E[] = {0,1,4941729,7441984,24502500,25502500,52881984,60481729,99980001};
	while(cin>>digit)
	{
		if(digit == 2)for(h = 0; h < 3; h++)printf("%.2lu\n",T[h]);
		else if(digit == 4)for(h = 0; h < 5; h++)printf("%.4lu\n",F[h]);
		else if(digit == 6)for(h = 0; h < 5; h++)printf("%.6lu\n",S[h]);
		else if(digit == 8)for(h = 0; h < 9; h++)printf("%.8lu\n",E[h]);
	}
}

