#include<iostream>
#include<string.h>
#include<cctype>

using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input","r",stdin);	
	freopen("output","w",stdout);
#endif
	char st[1000],bin[35],str;
	int x,y,z,count,flag;
	unsigned long int ans;
	y = 0;
	x = 0;
	while(str = getchar())
	{
		if(str == '~')break;
		else if(isspace(str))
		{
			if(count == 2)flag = 0;
			else if(count == 1)flag = 1;
			else if(count > 2)
			{
				count = count - 2;
				if(flag)for(z = 0; z < count; z++)bin[y++] = '1';
				else for(z = 0; z < count; z++)bin[y++] = '0';		
			}
			count = 0;
		}
		else if(str == '#')
		{
			bin[y] = '\0';
			ans = strtol(bin,NULL,2);
			y = 0;
			x = 0;
			cout<<ans<<endl;
		}
		else  count++;
	}
}
