#include<iostream>
#include<cstdlib>

using namespace std;

main()
{
	char num[300];
	unsigned long int n;
	do
	{
		cin>>num;
		if(num[0] == '-')break;
		else if(num[1] == 'x')
		{
			n = strtoul(num,NULL,16);
			printf("%lu\n",n);
		}
		else
		{
			n = strtoul(num,NULL,10);
			printf("0x%X\n",n);
		}
	}while(1);	
}
