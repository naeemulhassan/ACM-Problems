#include<stdio.h>
char pre[60],in[60];
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
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %s %s",&l,pre,in);
		h = 0;
		tree(0,l-1);
		putchar('\n');
	}
}
