#include<iostream>
#include<string>

using namespace std;

char a[10009],b[10009],c[10009],mx[10009],mn[10009];

main()
{	
	bool neg;
	int tc;
	int al,bl,i,j,sa,sb,sc;
	int x,y,z,res;
	scanf("%d",&tc);
	while(tc--)
	{
		memset(a,'0',10009);
		memset(b,'0',10009);
		memset(c,'0',10009);
		memset(mx,'0',10009);
		memset(mn,'0',10009);

		scanf("%s",a);
		scanf("%s",b);
		al = strlen(a);
		bl = strlen(b);
		for(i = 0; i < al && a[i] == '0'; i++);				
		sa = (i == al) ? al-1 : i;
		for(i = 0; i < bl && b[i] == '0'; i++);				
		sb = (i == bl) ? bl-1 : i;
		if((al-sa) > (bl-sb))neg = false;
		else if((bl-sb) > (al-sa))neg = true;
		else
		{
			for(i = sa,j = sb; i < al; i++,j++)
			{
				if(a[i] > b[j])	
				{
					neg = false;
					break;
				}
				else if(b[j] > a[i])
				{
					neg  = true;
					break;
				}
			}
			if(i == al)
			{
				cout<<"0"<<endl;
				continue;
			}
		}
		if(!neg)
		{
			for(i = 0; i < (al-sa); i++)
			{
				mx[i] = a[al-i-1];
			}
			for(i = 0; i < (bl-sb); i++)
			{
				mn[i] = b[bl-i-1];
			}
			res = 0;
			for(i = 0; i < (al-sa); i++)
			{
				x = mx[i]-48;
				y = mn[i]-48;
				if(x<(y+res))
				{
					z = x+10-y-res;
					c[i] = z + 48;
					res = 1;
				}
				else
				{
					z = x-y-res;
					c[i] = z + 48;
					res = 0;
				}
			}
			for(i = (al-sa-1); i >= 0; i--)
			{
				if(c[i] != '0')break;
			}
			if(i < 0)
			{
				cout<<"0"<<endl;
				continue;
			}
			else sc = i;
		}
		else
		{
			for(i = 0; i < (bl-sb); i++)
			{
				mx[i] = b[bl-i-1];
			}
			for(i = 0; i < (al-sa); i++)
			{
				mn[i] = a[al-i-1];
			}
			res = 0;
			for(i = 0; i < (bl-sb); i++)
			{
				x = mx[i]-48;
				y = mn[i]-48;
				if(x<(y+res))
				{
					z = x+10-y-res;
					c[i] = z + 48;
					res = 1;
				}
				else
				{
					z = x-y-res;
					c[i] = z + 48;
					res = 0;
				}
			}
			for(i = (bl-sb-1); i >= 0; i--)
			{
				if(c[i] != '0')break;
			}
			if(i < 0)
			{
				cout<<"0"<<endl;
				continue;
			}
			else sc = i;
		}
		if(neg)cout<<"-";
		for(i = sc; i >= 0; i--)cout<<c[i];
		cout<<endl;
	}
}
