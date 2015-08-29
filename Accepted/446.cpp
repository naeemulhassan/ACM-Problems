#include<iostream>
#include<cstdlib>
 
using namespace std;

main()
{
	int n,l1,l2,x,a,b;
	char *bin[] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
	char A[5],B[5],sign;
	//freopen("input","r",stdin);
	//freopen("output","w",stdout);
	scanf("%d\n",&n);
	while(n--)
	{
		scanf("%s %c %s\n",A,&sign,B);
		l1 = strlen(A);
		l2 = strlen(B);
		cout<<"0";
		if(l1 < 3)for(x = 0; x < (3-l1); x++)cout<<"0000";
		for(x = 0; x < l1; x++)
		{
			if(A[x] >= '0' && A[x] <= '9')cout<<bin[A[x]-48];
			else cout<<bin[A[x]-55];
		}
		cout<<" "<<sign<<" ";
		cout<<"0";
		if(l2 < 3)for(x = 0; x < (3-l2); x++)cout<<"0000";
		for(x = 0; x < l2; x++)
		{
			if(B[x] >= '0' && B[x] <= '9')cout<<bin[B[x]-48];
			else cout<<bin[B[x]-55];
		}
		cout<<" = ";
		a = strtoul(A,NULL,16);
		b = strtoul(B,NULL,16);
		if(sign == '+')cout<<a+b<<endl;
		else if(sign == '-')cout<<a-b<<endl;
	}
}
