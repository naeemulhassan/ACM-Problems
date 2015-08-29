#include<stdio.h>
#include<stdlib.h>
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	char s[100],b[100];	
	int i,j;
	long k;
	gets(s);
	while(gets(s))
	{
		if(strcmp(s,"___________")==0)break;
		j=0;
		for(i = 2; i <= 5; i++)
		{
			if(s[i]=='o')b[j++]='1';
			else b[j++] = '0';
		}
		for(i = 7; i <= 9; i++)
		{
			if(s[i]=='o')b[j++]='1';
			else b[j++] = '0';
		}
		b[j]='\0';
		k = strtol(b,NULL,2);
		printf("%c",k);
	}
	return 0;
} 

