#include<iostream>
 
using namespace std;

main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int T,i,sum,l,j;
	char ch;
	string str;
	scanf("%d",&T);
	getchar();
	for(i = 1; i <= T; i++)
	{		
		(getline(cin,str));			
		sum = 0;
		l = str.length();
		for(j = 0; j < l; j++)
		{
			ch = str.at(j);
			if(ch=='b' || ch=='e' || ch=='h' || ch=='k' || ch=='n' || ch=='q' || ch=='u' || ch=='x')sum+=2;
			else if(ch=='c' || ch=='f' || ch=='i' || ch=='l' || ch=='o' || ch=='r' || ch=='v' || ch=='y')sum+=3;
			else if(ch=='s' || ch == 'z')sum+=4;
			else sum++;
		}			
		printf("Case #%d: %d\n",i,sum);		
	}
}
