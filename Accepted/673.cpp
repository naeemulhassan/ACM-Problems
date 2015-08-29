#include<iostream>

using namespace std;
main()
{
	int tc,l,i,j,k;
	char t[130],s[131];
	gets(s);
	tc = atoi(s);
	while(tc--)
	{
		
		gets(t);
		l = strlen(t);
		sprintf(s,"$%s",t);	
		j = 1;
		k = 0;
		for(i = 1; i <= l; i++)
		{
			if(s[i]=='(')s[j++]='(';
			else if(s[i]=='[')s[j++]='[';
			else if(s[i]==')')
			{				
				if(s[j-1]=='(')j--;
				else
				{
					k=1;
					break;
				}
			}
			else if(s[i]==']')
			{			
				if(s[j-1]=='[')j--;
				else
				{
					k=1;
					break;
				}			
			}
		}		
		if(j==1 && k==0)printf("Yes\n");
		else printf("No\n");
	}
}
