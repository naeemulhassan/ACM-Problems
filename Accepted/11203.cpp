#include<iostream>
#include<string.h>
 
using namespace std;

main()
{
	int tc;
	scanf("%d",&tc);
	string y;
	char ch;
	int q1,q2,q3,m,e,f;
	while(tc--)
	{
		m = 0;
		e = 0;
		cin>>y;
		int t =y.length(),h=0; 
		q1 = q2 = q3 = f = 0;		
		while(h++<t)
		{
			ch = y[h-1];
			if(ch != '?' && ch != 'M' && ch != 'E')
			{			
				f = 1;
				break;				
			}
			else if(ch == 'M')
			{
				m++;
			}
			else if(ch == 'E')
			{
				e++;
			}
			else if(ch == '?')
			{
				if(m == 0 && e == 0)q1++;
				else if(m == 1 && e == 0)q2++;
				else if(m == 1 && e == 1)q3++;
			}
		}
		if(q1 && q2 && q3 && (q1+q2) == q3 && m == 1 && e == 1 && f != 1)cout<<"theorem"<<endl;
		else cout<<"no-theorem"<<endl;
	}
}
