#include<iostream>
#include<math.h>
 
using namespace std;

unsigned long int gcd(unsigned long int i,unsigned long int j)
{
	if(i == 0)return j;
	else return gcd(j%i,i);
}

main()
{
	register unsigned long int N,i,j,G;
	cin>>N;
	while(N)
	{
		G = 0;
		for(i = 1; i < N; i++)
			for(j = i+1; j <= N; j++)
				G = G +gcd(i,j);
		cout<<G<<endl;
		cin>>N;
	}
}

