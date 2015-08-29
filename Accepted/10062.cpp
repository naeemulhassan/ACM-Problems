#include<iostream>
#include<string.h>

using namespace std;
class frequence
{
	public:
		int asci;
		int freq;
};

frequence A[130];

void sorta(frequence *T)
{
	int x,y;
	frequence temp;
	for(x = 32; x < 128; x++)
	{
		for(y = x+1; y < 128; y++)
		{
			if(T[x].freq > T[y].freq)
			{
				temp = T[x];
				T[x] = T[y];
				T[y] = temp;
			}
		}
	}
}

void sortb(frequence *T)
{
	int x,y;
	frequence temp;
	for(x = 32; x < 128; x++)
	{
		for(y = x+1; y < 128; y++)
		{
			if(T[x].freq == T[y].freq && T[x].asci < T[y].asci)
			{
				temp = T[x];
				T[x] = T[y];
				T[y] = temp;
			}
		}
	}
}

main()
{
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	char str[1010];
	int x,l,count = 0;
	while(gets(str))
	{
		l = strlen(str);
		for(x = 0; x < l; x++)
		{
			A[str[x]].asci = str[x];
			A[str[x]].freq++;
		}
		sorta(A);
		sortb(A);
		if(count)cout<<endl;
		else count++;
		for(x = 32; x < 128; x++)
		{
			if(A[x].freq)cout<<A[x].asci<<" "<<A[x].freq<<endl;
		}
		for(x = 32; x < 128; x++)
		{
			A[x].asci = 0;
			A[x].freq = 0;
		}
	}
}
