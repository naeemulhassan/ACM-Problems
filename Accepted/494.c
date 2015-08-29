#include<stdio.h>
#include<string.h>
 
int main(void)
{
	char str[10000];
	int x,l,count;
	while(gets(str))
	{
		l = strlen(str);
		count = 0;
		for(x = 0; x < l; x++)if(!((str[x] >= 65 && str[x] <= 90)||(str[x] >= 97 && str[x] <= 122)))
				str[x] = '.';
		for(x = 0; x < l; x++)
		{
			if(str[x] != '.')
			{
				count++;
				while(str[++x] != '.');
			}
		}
		printf("%d\n",count);
	}
}
