#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

void main()
{
	char set[256],temp[256],ch;
	int length,start,current,x;
	while(1)
	{
		length = 0;
		while((set[length++]=getchar())!='\n');
		set[length] = '\0';
		length = length-1;
		if(length == 4 && set[0] == 'D' && set[1] == 'O' && set[2] == 'N' && set[3] == 'E')break;
		for(start = 0,current = 0; start <= length; start++)
		{
			if((set[start] >= 'a' && set[start] <= 'z') ||(set[start] >= 'A' && set[start] <= 'Z'))
			{
				temp[current] = tolower(set[start]);
				current++;
			}
		}
		x = ceil((current-1)/2);
		for(current = current-1,start = 0; current >=x; current--,start++)
		{
			if(temp[current] != temp[start])break;
		}
		if(current<x)printf("You won't be eaten!\n");
		else printf("Uh oh..\n");
	}
}