#include<iostream>

using namespace std;
int num[1001];
main()
{
	int i,j,k,n;
	while(scanf("%d",&n) != EOF)
	{
		for(i = 0; i < n; i++)scanf("%d",&num[i]);
		k = 0;
		for(i = 0; i < n; i++)
			for(j = i+1; j < n; j++)
				if(num[i]>num[j])k++;
		printf("Minimum exchange operations : %d\n",k);
	}	
}
