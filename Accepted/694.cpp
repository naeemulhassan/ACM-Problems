#include<iostream>
 
using namespace std;

main()
{
	long long int A,B,L,count,Case = 0;
	do
	{
		cin>>A>>L;
		if(A < 0 && L < 0)break;
		Case++;
		count = 0;
		B = A;
		while(A <= L)
		{
			count++;
			if(A == 1)break;
			else if(!(A%2))A = A / 2;
			else if(A%2)A = 3*A + 1;
		}
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",Case,B,L,count);
	}while(1);
}
