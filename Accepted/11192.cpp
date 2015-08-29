#include<iostream>
#include<string.h>

using namespace std;

main()
{
	int num,i,l,j,k,m;
	string str;
	while(cin>>num && num)
	{
		cin>>str;
		l = str.length();
		m = l/num;
		i = 0;
		k = 1;
		while(i < l)
		{
			num = (k-1)*m+1;
			for(j = k*m; j >= num; j--)
			{
				cout<<str[j-1];
				i++;
			}
			k++;
		}
		cout<<endl;
	}
}
