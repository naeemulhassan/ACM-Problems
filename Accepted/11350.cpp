#include<iostream>
#include<string.h>

using namespace std;

main()
{
	int N,l,x;
	unsigned long long int a,b,c,d;
	char str[100];
	scanf("%d\n",&N);
	while(N--)
	{
		gets(str);
		if(str[0] == 'L')
		{
			a = 1;
			b = 1;
			c = 0;
			d = 1;
		}
		else if(str[0] == 'R')
		{
			a = 1;
			b = 0;
			c = 1;
			d = 1;
		}
		l = strlen(str);
		x = 1;
		while(x<l)
		{
			if(str[x] == 'L')
			{
				b = a + b;
				d = c + d;
			}
			else
			{
				a = a + b;
				c = c + d;
			}
			x++;
		}
		cout<<c+d<<"/"<<a+b<<endl;
	}
}
