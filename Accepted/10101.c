#include<stdio.h>
#include<string.h>

int main()
{
	char number[20];
	int a,size,flag,count = 0;

	while(fgets(number,sizeof number, stdin))
	{
		flag = 0;
		size = strlen(number)-1;
		for(a = size - 1; a >= 0; a--)number[15 + a - size] = number[a];
		for(a = 0; a < 15 - size; a++)number[a] = '0';
		
		if(number[0] != '0')
		{
			count++;
			flag = 1;
			printf("%4d. %c kuti",count,number[0]);
		}
		if(number[1] != '0')
		{
			if(flag == 0)
			{
				count++;
				flag = 1;
				printf("%4d. %c",count,number[1]);
			}
			else printf(" %c",number[1]);
		}
		if(number[2] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c lakh",count,number[2]);
			}
			else if(number[1] == '0') printf(" %c lakh",number[2]);
			else printf("%c lakh",number[2]);
		}
		if(number[2] == '0' && number[1] != '0')printf("%c lakh",number[2]);
		if(number[3] != '0')
		{
			if(flag == 0)
			{
				count++;
				flag = 1;
				printf("%4d. %c",count,number[3]);
			}
			else printf(" %c",number[3]);
		}
		if(number[4] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c hajar",count,number[4]);
			}
			else if(number[3] == '0') printf(" %c hajar",number[4]);
			else printf("%c hajar",number[4]);
		}
		if(number[4] == '0' && number[3] != '0')printf("%c hajar",number[4]);
		if(number[5] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c shata",count,number[5]);
			}
			else printf(" %c shata",number[5]);
		}
		if(number[6] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c",count,number[6]);
			}
			else printf(" %c",number[6]);
		}
		if(number[7] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c kuti",count,number[7]);
			}
			else if(number[6] != '0')printf("%c kuti",number[7]);
			else printf(" %c kuti",number[7]);
		}
		if(number[7] == '0')
		{
			if(number[6] != '0')printf("%c kuti",number[7]);
			else if(flag == 1)printf(" kuti",number[7]);
		}
		if(number[8] != '0')
		{
			if(flag == 0)
			{
				count++;
				flag = 1;
				printf("%4d. %c",count,number[8]);
			}
			else printf(" %c",number[8]);
		}
		if(number[9] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c lakh",count,number[9]);
			}
			else if(number[8] == '0') printf(" %c lakh",number[9]);
			else printf("%c lakh",number[9]);
		}
		if(number[9] == '0' && number[8] != '0')printf("%c lakh",number[9]);
		if(number[10] != '0')
		{
			if(flag == 0)
			{
				count++;
				flag = 1;
				printf("%4d. %c",count,number[10]);
			}
			else printf(" %c",number[10]);
		}
		if(number[11] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c hajar",count,number[11]);
			}
			else if(number[10] == '0')printf(" %c hajar",number[11]);
			else printf("%c hajar",number[11]);
		}
		if(number[11] == '0' && number[10] != '0')printf("%c hajar",number[11]);
		if(number[12] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c shata",count,number[12]);
			}
			else printf(" %c shata",number[12]);
		}
		if(number[13] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c",count,number[13]);
			}
			else printf(" %c",number[13]);
		}
		if(number[14] != '0')
		{
			if(flag == 0)
			{
				flag = 1;
				count++;
				printf("%4d. %c",count,number[14]);
			}
			else if(number[13] == '0')printf(" %c",number[14]);
			else printf("%c",number[14]);
		}
		if(number[14] == '0' && number[13] != '0')printf("%c",number[14]);
		if(number[14] == '0' && flag == 0)
		{
			flag = 1;
			count++;
			printf("%4d. %c",count,number[14]);
		}
		printf("\n");
	}
	return 0;
}
