#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

main()
{
	char code[60];
	int l,x,y;
	do
	{
		cin>>code;
		if(code[0] == '#')break;
		
		l = strlen(code);
		
		if(next_permutation(code,code+l))cout<<code<<endl;
		else cout<<"No Successor\n";
	}while(1);
}
