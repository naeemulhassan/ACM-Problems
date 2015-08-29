#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<algorithm>
using namespace std;
char d[99999][203];

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);	
	freopen("output.txt","w",stdout);
#endif
	char tmp[203],ch;
	int i=0,j=0,k;
	while((ch=getchar())!=EOF)
	{
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) tmp[j++] = ch;
		else if(j>0)
		{
			for(k = 0; k < j; k++)d[i][k]=tolower(tmp[k]);
			d[i][k] = '\0';
			i++;
			j = 0;
		}		
	}
	sort(&d[0][0],&d[i][0]);
	strcpy(d[i],"\0");
	for(j = 0; j < i; j++)if(strcmp(d[j],d[j+1]))printf("%s\n",d[j]);
	
}
