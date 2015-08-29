#include<iostream>
#include<cstring>
 
using namespace std;

main()
{
	char haiku[300],t;
	int x,y,l,count,flag;
	
	while(gets(haiku))
	{
		if(!strcmp(haiku,"e/o/i"))break;
		l = strlen(haiku);
		for(x = 0,y = 1; x < l;y++,x++)
		{
			flag = 0;
			count = 0;
			while(haiku[x] != '/' && x < l)
			{
				t = haiku[x];
				if((t == 'a'||t == 'e'||t == 'i'||t == 'o'||t == 'u'||t == 'y') && !flag )
				{
					count++;
					flag = 1;
				}
				if(!(t == 'a'||t == 'e'||t == 'i'||t == 'o'||t == 'u'||t == 'y') && flag)
				{
					flag = 0;
				}
				x++;
			}
			if(count != 5 && y == 1)
			{
				cout<<y<<endl;
				break;
			}
			if(count != 7 && y == 2)
			{
				cout<<y<<endl;
				break;
			}
			if(count != 5 && y == 3)
			{
				cout<<y<<endl;
				break;
			}
		}
		if(y == 4 && count == 5)cout<<"Y\n";
		
	}
}
