#include<iostream>

using namespace std;

main()
{
	int n,x,sum,avg,mov,set = 0;
	int stack[50];
	cin>>n;
	while(n)
	{
		set++;
		sum = 0;
		for(x = 0; x < n; x++)
		{
			cin>>stack[x];
			sum = sum + stack[x];
		}
		avg = sum / n;
		mov = 0;
		for(x = 0; x < n; x++)
		{
			if(stack[x] > avg)mov = mov + stack[x] - avg;
		}
		cout<<"Set #"<<set<<"\nThe minimum number of moves is "<<mov<<".\n\n";
		cin>>n;
	}
} 
