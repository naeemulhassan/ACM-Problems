#include<iostream>
#include<cctype>

using namespace std;

class alpha
{
	public:
		char c;
		int n;
};
alpha A[26];
void sorta()
{
	int x,y;
	alpha temp;
	for(x = 25; x >= 0; x--)
	{
		for(y = 25; y >= x; y--)
		{
			if(A[x].n <= A[y].n)
			{
				temp = A[x];
				A[x] = A[y];
				A[y] = temp;
			}
		}
	}
}

void sortb()
{
	int x,y;
	alpha temp;
	for(x = 0; x < 26; x++)
	{
		for(y = x; y < 26; y++)
		{
			if(A[x].c > A[y].c && A[x].n == A[y].n)
			{
				temp = A[x];
				A[x] = A[y];
				A[y] = temp;
			}
		}
	}
}

main()
{
	int x;
	char ch;
	for(x = 0; x < 26; x++)
	{
		A[x].c = 'A'+x;
		A[x].n = 0;
	}
	/*freopen("input","r",stdin);
	freopen("output","w",stdout);*/
	cin>>x;
	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch))
		{
			if(ch > 'Z') ch = ch - 'a' + 'A';
			A[ch-'A'].n++;
		}
	}
	sorta();
	sortb();
	for(x = 0; x < 26; x++)
	{
		if(A[x].n)cout<<A[x].c<<" "<<A[x].n<<endl;
	}
	
}
