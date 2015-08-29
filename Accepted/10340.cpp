#include<iostream>
#include<string.h>

using namespace std;

main()
{
	char s[1000000],t[1000000];
	int l1,l2,x,y;
	do
	{
		cin>>s;
		if(feof(stdin))break;
		cin>>t;
		l1 = strlen(s);
		l2 = strlen(t);
		for(x = 0,y = 0; x < l1 && y <l2 ; y++)
		{
			if(s[x] == t[y])x++;	
		}
		if(x == l1)cout<<"Yes\n";
		else cout<<"No\n";
	}while(1);
}
