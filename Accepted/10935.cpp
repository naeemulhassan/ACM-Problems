#include<iostream>
#include<queue>

using namespace std;

main()
{
	queue<int> q;
	int num,i;
	while(scanf("%d",&num) && num)
	{
		if(num == 1)
		{
			printf("Discarded cards:\nRemaining card: 1\n");
			continue;
		}
		for(i = 1; i <= num; i++)q.push(i);
		printf("Discarded cards:");
		while(q.size() > 2)
		{
			printf(" %d,",q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		printf(" %d",q.front());
		printf("\nRemaining card:");
		printf(" %d\n",q.back());
		q.pop();
		q.pop();
	}
}
