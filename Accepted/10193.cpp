#include<iostream>
 
using namespace std;
long int gcd(long int a,long int b)
{
	if(!a)return b;
	else return gcd(b%a,a);
}
main()
{
	long int tc,s1,s2,ans,i;
	char p1[35],p2[35];
	scanf("%d",&tc);
	for(i = 1; i <= tc; i++)
	{
		scanf("%s %s",p1,p2);
		s1 = strtol(p1,NULL,2);
		s2 = strtol(p2,NULL,2);
		ans = gcd(s1,s2);
		if(ans <= s1 && ans <= s2 && ans != 1)printf("Pair #%d: All you need is love!\n",i);
		else printf("Pair #%d: Love is not all you need!\n",i);
	}
}
