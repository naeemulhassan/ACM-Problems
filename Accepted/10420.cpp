#include<iostream>
#include<algorithm>
using namespace std;
string str[20001]; 
main()
{
	int i,tc,j;
	char tmp[120];
	scanf("%d",&tc);
	for(i = 1; i <= tc; i++)
	{
		cin>>str[i];
		gets(tmp);
	}
	sort(&str[1],&str[tc+1]);
	str[tc+1] = "\0";
	for(i = 1,j = 1; i <= tc; i++)
	{
		if(str[i]==str[i+1])j++;
		else
		{
			cout<<str[i]<<" "<<j<<endl;
			j = 1;
		}
	}
}
