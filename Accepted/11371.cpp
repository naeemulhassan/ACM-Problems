#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstring>

using namespace std;

bool comp(char a, char b)
{
	return (a > b);
}

main()
{
	double n,a,b;
	int l;
	char num[20],tmp;
	while(1)
	{
		cin>>num;
		if(feof(stdin))break;
		l = strlen(num);
		sort(num,num+l,comp);
		a = strtod(num,NULL);
		sort(num,num+l);
		int x = 0;
		while(1)
		{
			if(num[x] == '0')x++;
			else
			{
				tmp = num[x];
				num[x] = num[0];
				num[0] = tmp;
				break;
			}
		}
		b = strtod(num,NULL);
		printf("%0.0f - %0.0f = %0.0f = 9 * %0.0f\n",a,b,a-b,(a-b)/9);
	}
}

