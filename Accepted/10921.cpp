#include<stdio.h>
#include<string.h>

void main()
{
	char pnum[32];
	int arr[26][2] = 
	{
		65,2,66,2,67,2,68,3,69,3,70,3,71,4,72,4,73,4,74,5,75,5,76,5,77,6,78,6,79,6,80,7,81,7,82,7,83,7,84,8,85,8,86,8,87,9,88,9,89,9,90,9
	};
	int count;
	while(fgets(pnum, sizeof pnum, stdin))
	{
		for(count  = 0; count < strlen(pnum) - 1; count++)
		{
			if(pnum[count] == '1' || pnum[count] == '0' || pnum[count] == '-')printf("%c",pnum[count]);
			else printf("%d",arr[pnum[count]-65][1]);
		}
		printf("\n");
	}
}