#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	long int n,seq[3000],x,y,z;
	do
	{
		cin>>n;
		if(feof(stdin))break;
		z = n*(n-1);
		z = z / 2;
		for(x = 0; x < n; x++)
		{
			cin>>seq[x];
		}
		for(x = 1; x < n; x++)
		{
			y = abs(seq[x]-seq[x-1]);
			if(y <= 0 || y >= n)break;
			else z = z - y;
		}
		if(z == 0 && n)cout<<"Jolly\n";
		else cout<<"Not jolly\n";
	}while(1);
}
