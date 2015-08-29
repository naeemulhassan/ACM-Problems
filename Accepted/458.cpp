#include<stdio.h>
#include<string.h>

void main()
{
	char msg[256];
	int a;

	while(scanf("%s",msg))
	{
		for(a = 0; a < strlen(msg)-1; a++ )
		{
			printf("%c",msg[a]-7);
		}
		printf("\n");
	}
}