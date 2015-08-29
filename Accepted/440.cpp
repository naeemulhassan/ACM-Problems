#include<math.h>
#include<iostream>

using namespace std;

main()
{
	int n,d,q;
	while(scanf("%d",&n) && n != 0)
	{
		if(n == 2)
		{
			cout<<"1"<<endl;
			continue;
		}
		d = 0;
		for(q = 2; d != 2; q++)
		{
			d = q*(n-1) + 1;
			while(d>n)d = d - n + floor( (d - n + (q-2))/(q-1)  );	
		}
		cout<<q-1<<endl;
	}
}
 
