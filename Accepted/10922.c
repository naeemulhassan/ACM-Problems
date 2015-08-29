#include<stdio.h>
#include<string.h>

int main()
{
	char num[1002],tmp[1002];
	int l,i,degree,sum;
	while(scanf("%s",num) && strcmp(num,"0"))
	{
		strcpy(tmp,num);
		degree = 0;
		while(1)
		{
			l = strlen(num);
			sum = 0;		
			for(i = 0; i < l; i++)sum += num[i]-48;
			if(!(sum%9))degree++;
			else break;
			if(sum == 9)break;
			sprintf(num,"%d",sum);
		}
		if(!degree)printf("%s is not a multiple of 9.\n",tmp);
		else printf("%s is a multiple of 9 and has 9-degree %d.\n",tmp,degree);
	}
	return 0;
}
