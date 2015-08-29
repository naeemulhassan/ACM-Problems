#include<stdio.h>
#include<string.h>

void main()
{
	char str[1000],ch;
	int n = 0,x,y = 0;
	while(fgets(str,sizeof str,stdin))
	{
		n = strlen(str) - 1;
		for(x = 0; x < n; x++)
		{
			if(str[x] == '"' && y == 0)
			{
				printf("``");
				y = 1;
			}
			else if(str[x] == '"' && y == 1)
			{
				printf("''");
				y = 0;
			}
			else printf("%c",str[x]);
		}
		printf("\n");
	}
}
