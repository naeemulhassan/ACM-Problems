#include<iostream>
 
using namespace std;
 
main()
{
	unsigned int bin[9],x,y = 0,min;
	char *b[] = {"BCG","BGC","CBG","CGB","GBC","GCB"};
	while(cin>>bin[0]>>bin[1]>>bin[2]>>bin[3]>>bin[4]>>bin[5]>>bin[6]>>bin[7]>>bin[8])
	{
		min = (unsigned int) - 1;
		x = bin[1]+bin[2]+bin[3]+bin[4]+bin[6]+bin[8];
		if(min > x)
		{
			min = x;
			y = 0;
		}
		x = bin[1]+bin[2]+bin[3]+bin[5]+bin[6]+bin[7];
		if(min > x)
		{
			min = x;
			y = 1;
		}
		x = bin[1]+bin[5]+bin[0]+bin[4]+bin[6]+bin[8];
		if(min > x)
		{
			min = x;
			y = 2;
		}
		x = bin[1]+bin[0]+bin[3]+bin[5]+bin[7]+bin[8];
		if(min > x)
		{
			min = x;
			y = 3;
		}
		x = bin[0]+bin[2]+bin[5]+bin[4]+bin[6]+bin[7];
		if(min > x)
		{
			min = x;
			y = 4;
		}
		x = bin[0]+bin[2]+bin[3]+bin[4]+bin[7]+bin[8];
		if(min > x)
		{
			min = x;
			y = 5;
		}
		cout<<b[y]<<" "<<min<<endl;
	}
}
