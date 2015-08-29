#include<iostream>
#include<algorithm>
 
using namespace std;
class dictionary
{
	public:
		char word[20];
		long int dollar;
};
main()
{
	long int m,n,x,y,z;
	long long ans;
	char ch,para[1001][30];
	dictionary dict[1001]; 
	scanf("%ld %ld",&m,&n);
	for(x = 0; x < m; x++)
	{
		scanf("%s %ld",dict[x].word,&dict[x].dollar);
	}
	while(n--)
	{
		x = 0;
		ans = 0;
		while(scanf("%s",para[x]) && strcmp(para[x++],"."));
		for(y = 0; y < x; y++)
		{
			for(z = 0; z < m; z++)
			{
				if(!strcmp(para[y],dict[z].word))ans += dict[z].dollar;
			}
		}
		printf("%lld\n",ans);
	}
}
