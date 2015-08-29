#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int x,y;
	while(cin>>x)
	{
		y = floor(x/2);
		printf("%d\n",3+(y-1)*3+(x%2));
	}
}
