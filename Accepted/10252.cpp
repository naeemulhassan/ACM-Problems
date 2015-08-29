#include<iostream>
#include<algorithm>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	char s1[1005],s2[1005],ans[1005];
	int x,y,i,j,k,count;
	while(1)
	{		
		gets(s1);
		gets(s2);
		if(feof(stdin))break;
		x = strlen(s1);
		y = strlen(s2);
		sort(&s1[0],&s1[x]);
		sort(&s2[0],&s2[y]);
		for(i = 0,j = 0,count = 0; i < x; i++)
		{
			for(k = j; k < y; k++)
			{
				if(s2[k] == s1[i])
				{
					j = k+1;
					ans[count++] = s1[i];
					break;
				}
			}
		}
		ans[count] = '\0';
		printf("%s\n",ans);
	}
}
