#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int n,l;
	char str[10000];
	/*freopen("input","r",stdin);
	freopen("output","w",stdout);*/
	cin>>n;
	while(n)
	{
		scanf("%s\n",str);
		l = strlen(str);
		if(l == 1 &&(str[0] == '1' || str[0] == '4' ))
		{
			cout<<"+\n";
		}
		else if(l == 2 && str[0] == '7' && str[1] == '8')
		{
			cout<<"+\n";
		}
		else if(str[l-2] == '3' && str[l-1] == '5')
		{
			cout<<"-\n";
		}
		else if(str[0] == '9' && str[l-1] == '4')
		{
			cout<<"*\n";
		}
		else if(str[0] == '1' && str[1] == '9' && str[2] == '0')
		{
			cout<<"?\n";
		}
		n--;
	}
}
