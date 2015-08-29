#include<iostream>
#include<cctype>
#include<string.h>

using namespace std;

class alpha
{
	public:
		char c;
		int n;
};
alpha A[26],a[26];
void sorta(alpha *T)
{
	int x,y;
	alpha temp;
	for(x = 25; x >= 0; x--)
	{
		for(y = 25; y >= x; y--)
		{
			if(T[x].n <= T[y].n)
			{
				temp = T[x];
				T[x] = T[y];
				T[y] = temp;
			}
		}
	}
}

void sortb(alpha *T)
{
	int x,y;
	alpha temp;
	for(x = 0; x < 26; x++)
	{
		for(y = x; y < 26; y++)
		{
			if(T[x].c > T[y].c && T[x].n == T[y].n)
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
	int x,maxA,maxa,max,l;
	char ch,str[10000];
	/*freopen("input","r",stdin);
	freopen("output","w",stdout);*/
	while(gets(str))
	{
		for(x = 0; x < 26; x++)
		{
			A[x].c = 'A'+x;
			A[x].n = 0;
			a[x].c = 'a'+x;
			a[x].n = 0;
		}
		l = strlen(str);
		for(x = 0; x < l; x++)
		{
			ch = str[x];
			if(isalpha(ch))
			{
				if(ch <= 'Z')A[ch-'A'].n++;
				else if(ch <= 'z')a[ch-'a'].n++;
			}
		}
		sorta(A);
		sortb(A);
		sorta(a);
		sortb(a);
		maxA = A[0].n;
		maxa = a[0].n;
		if(maxA > maxa)max = maxA;
		else max = maxa;
		for(x = 0; A[x].n == max; x++)
		{
			cout<<A[x].c;
		}
		for(x = 0; a[x].n == max; x++)
		{
			cout<<a[x].c;
		}
		cout<<" "<<max<<endl;
	}
}
