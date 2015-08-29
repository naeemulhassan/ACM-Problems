#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	long long int N,n,i,j,k,l;
	int str[1000];
	cin>>N;
	i = 0;
	while(N--)
	{
		i++;
		cin>>n;
		j = 0;
		if(n == 1)
		{
			cout<<"Case #"<<i<<": 1\n";
			continue;			
		}
		else if(n == 0)
		{
			cout<<"Case #"<<i<<": 0\n";
			continue;			
		}
		while(n != 0)
		{
			if(n > 0)
			{
				str[j] = n%2;
				n = n / -2;				
			}
			else
			{
				str[j] = n%(-2) * (-1);
				if(n%2)n = n / (-2) + 1;
				else n = n / (-2);
			}
			j++;
		}
		cout<<"Case #"<<i<<": ";
		while(j)
		{
			cout<<str[--j];
		}
		cout<<endl;
	}
	
}
