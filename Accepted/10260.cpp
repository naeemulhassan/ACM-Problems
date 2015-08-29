#include<iostream>
#include<string.h>
 
using namespace std;

main()
{
	char s[30];
	int ans,l,x;
	gets(s);
	while(!feof(stdin))
	{
		l = strlen(s);
		ans = 0;
		for(x = 0; x < l; x++)
		{
			if((s[x] == 'B' || s[x] == 'F' || s[x] == 'P' || s[x] == 'V') && ans != 1)
			{
				ans = 1;
				cout<<ans;
			}
			else if((s[x] == 'C' || s[x] == 'G' || s[x] == 'J' || s[x] == 'K'|| s[x] == 'Q' || s[x] == 'X' || s[x] == 'S' || s[x] == 'Z') && ans != 2)
			{
				ans = 2;
				cout<<ans;
			}
			else if((s[x] == 'D' || s[x] == 'T') && ans != 3)
			{
				ans = 3;
				cout<<ans;
			}
			else if((s[x] == 'L') && ans != 4)
			{
				ans = 4;
				cout<<ans;
			}
			else if((s[x] == 'M' || s[x] == 'N') && ans != 5)
			{
				ans = 5;
				cout<<ans;
			}
			else if((s[x] == 'R') && ans != 6)
			{
				ans = 6;
				cout<<ans;
			}
			else if((s[x] == 'A' || s[x] == 'E' || s[x] == 'I' || s[x] == 'O' || s[x] == 'U' || s[x] == 'H' || s[x] == 'W' || s[x] == 'Y'))
			{
				ans = 0;
			}
		}
		cout<<endl;
		gets(s);
	}
	
}

