#include<iostream>
#include<math.h>
 
using namespace std;

main()
{
	long int num,root,x,y;
	char n[20],m[20];
	while(scanf("%ld",&num) != EOF)
	{
		if(num == 2)
		{
			printf("%ld is prime.\n",num);
			goto esc;
		}
		root = ceil(sqrt(num));
		while(root>1)
		{
			if(!(num%root--))
			{
				printf("%ld is not prime.\n",num);
				goto esc;
			}
		}
		sprintf(n,"%ld",num);
		y = strlen(n)-1;
		for(x = 0; x <= y; x++)m[x] = n[y-x];
		m[x] = '\0';
		if(!strcmp(n,m))
		{
			printf("%s is prime.\n",n);
			goto esc;
		}
		num = atoi(m);
		root = ceil(sqrt(num));
		while(root>1)
		{
			if(!(num%root--))
			{
				printf("%s is prime.\n",n);
				goto esc;
			}
		}
		printf("%s is emirp.\n",n);
		esc:;
	}
}
