#include<iostream>
 
using namespace std;
int sort(unsigned int *car,int l)
{
	int x,y,temp,swap = 0;
	for(x = 0; x < l; x++)
	{
		for(y = x; y < l; y++)
		{
			if(car[x]>car[y])
			{
				temp = car[x];
				car[x] = car[y];
				car[y] = temp;
				swap++;
			}
		}
	}
	return swap;
}
main()
{
	unsigned int n,l,car[50],x;
	cin>>n;
	while(n--)
	{
		cin>>l;
		x = 0;
		while(l--)
		{
			cin>>car[x++];
		}
		cout<<"Optimal train swapping takes "<<sort(car,x)<<" swaps.\n";		
	}
}
