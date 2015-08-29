#include<stdio.h>

int length[31];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char ch;
	int len = 0;
	int hyp = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch == '#')
		{
			for(len = 1; len <=30; len++)
			{
				if(length[len])
				{
					printf("%d %d\n",len,length[len]);
					length[len] = 0;
				}
			}
			printf("\n");
			len = 0;
		}
		else if(ch == '.' || ch == '?' || ch == '!' || ch == ',' || ch == ' ')
		{
			length[len]++;
			len = 0;
			hyp = 0;
		}
		else if(ch == '\'' || ch == '-')
		{
			if(ch == '-')hyp = 1;
			else hyp = 0;
		}
		else if(ch == '\n')
		{
			if(!hyp)
			{
				length[len]++;
				len = 0;
			}
		}
		else
		{
			len++;
			hyp = 0;
		}
	}	
	return 0;	
}
