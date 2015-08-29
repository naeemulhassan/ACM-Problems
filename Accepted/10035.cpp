#include<iostream>
#include<math.h>

using namespace std;

main()
{
	unsigned long int a,b;
	int x,l1,l2,carry,sum,p,q,max;
	do
	{
		cin>>a>>b;
		if(a == 0 && b == 0)break;
		l1 = (int)(floor(log10(a))) + 1;
		l2 = (int)(floor(log10(b))) + 1;
		if(l1 >= l2)max = l1;
		else max = l2;
		carry = 0;
		sum = 0;
		for(x = 0; x < max; x++)
		{
			p = a % 10;
			a = a / 10;
			q = b % 10;
			b = b / 10;
			if((carry + p + q) > 9)
			{
				carry = 1;
				sum = sum + 1;
			}
			else carry = 0;
		}
		if(sum == 0)cout<<"No carry operation."<<endl;
		else if(sum == 1)cout<<sum<<" carry operation."<<endl;
		else if(sum > 1)cout<<sum<<" carry operations."<<endl;
	}while(1);
}
