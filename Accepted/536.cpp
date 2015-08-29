#include<stdio.h>
#include<string.h>
char pre[27],in[27];
int h = 0;
void tree(int i, int j)
{	
	int x;
	for(x = i; x <= j; x++)
	{
		if(in[x]==pre[h])
		{
			h++;
			if(x>i)tree(i,x-1);
			if(x<j)tree(x+1,j);
			putchar(in[x]);
		}
	}
}
main()
{
	int tc,l;	
	while(scanf("%s %s",pre,in) != EOF)
	{		
		h = 0;
		l = strlen(pre);
		tree(0,l-1);
		putchar('\n');
	}
}
