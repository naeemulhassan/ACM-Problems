#include<iostream>
#include<cctype>
#include<cstdlib>

using namespace std;

main()
{
	char c;
	int sum = 0;
	/*freopen("input","r",stdin);
	freopen("output","w",stdout);*/
	while((c = getchar()) != EOF)
	{
		if(c == '!' || c == '\n')
		{
			sum = 0;
			putchar('\n');
		}
		else if(isdigit(c))
		{
			sum = sum + atoi(&c);
		}
		else if(c == 'b')
		{
			while(sum--)putchar(' ');
			sum = 0;
		}
		else
		{
			while(sum--)putchar(c);
			sum = 0;
		}
	}
}
