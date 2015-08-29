#include<iostream>
 
using namespace std;

main()
{
	unsigned long a,b,c;
	do
	{
		cin>>a;
		if(feof(stdin))break;
		cin>>b;
		c = a^b;
		cout<<c<<endl;
	}while(1);
}
