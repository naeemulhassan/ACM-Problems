#include<iostream>
#include<math.h>

using namespace std;

int peg[50];

bool isquare(int x)
{
	int r = (int)(sqrt(x));
	if((x - r*r)==0)return true;
	return false;
}

main()
{
	int testcase,npeg,x,y,z;
	cin>>testcase;
	while(testcase--)
	{
		cin>>npeg;
		peg[0] = 1;
		for(y = 2; ; y++)
		{
			for(x = 0;x < npeg && peg[x]; x++)
			{	
				if(isquare(y + peg[x]))
				{
					peg[x] = y;
					break;
				}
			}
			if(x == npeg)break;
			else if(!peg[x])peg[x] = y;
		}
		cout<<y-1<<endl;
		for(x = 0; x < npeg; x++)peg[x] = 0;
	}
}
