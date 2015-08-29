#include<iostream>
 
using namespace std;

main()
{
	int g,h,l;
	char str[20];
	h = 12;
	l = 0;
	while(scanf("%d",&g))
	{
		if(g==0)break;
		getchar();
		gets(str);
		if(strcmp(str,"too high")==0 && g<h)h=g;
		{
			if(g < h)h = g;
		}
		else if(strcmp(str,"too low")==0 && g>l)l=g;
		{
			if(g > l)l = g;			
		}
		else
		{
			if(g>l && g<h)printf("Stan may be honest\n");
			else printf("Stan is dishonest\n");
			h = 12;
			l = 0;
		}
	}
}
