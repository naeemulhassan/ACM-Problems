#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	int tc,m,n,mx,mn;
	char ch,tmp[20];
	scanf("%d",&tc);
	while(tc--)
	{
		scanf(" %c %d %d",&ch,&m,&n);
		if(ch == 'r')printf("%d\n",m<n?m:n);
		else if(ch == 'Q')printf("%d\n",m<n?m:n);
		else if(ch == 'k')printf("%d\n",(int)ceil(m*n/2.0));
		else printf("%d\n",(int)ceil(m/2.0)*(int)ceil(n/2.0));
	}
}
