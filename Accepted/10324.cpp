#include<stdio.h>
 
int num[1000001];

main()
{
	char ch,p;
	int i,j,tc,c,s,e;
	c = 1;	
	while(ch = getchar())
	{
		if(ch == EOF || ch == '\n')break;
		p = ch;
		i =  0;
		j = 0;
		num[j] = i;
		while((ch = getchar()) != '\n')
		{
			if(ch != p)
			{
				i++;
				p = ch;
			}
			num[++j] = i;
		}		
		scanf("%d",&tc);
		printf("Case %d:\n",c++);
		while(tc--)
		{
			scanf("%d %d",&s,&e);
			if(num[s] == num[e])printf("Yes\n");
			else printf("No\n");
		}
		ch = getchar();
	}
}
