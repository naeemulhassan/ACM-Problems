#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>

using namespace std;

main()
{
	int n,count,l;
	unsigned long long int num,num1,num2;
	char str[1000],temp[1000];
	cin>>n;
	while(n)
	{
		cin>>num1;
		count = 1;
		while(1)
		{
			sprintf(str,"%llu",num1);
			l = strlen(str);
			strcpy(temp,str);
			reverse(&str[0],&str[l]);
			num2 = (unsigned long long )(atol(str));
			num = num1 + num2;
			sprintf(str,"%llu",num);
			strcpy(temp,str);
			l = strlen(str);
			reverse(&str[0],&str[l]);
			if(!strcmp(temp,str))break;
			count++;
			num1 = num;
		}
		cout<<count<<" "<<str<<endl;
		n--;
	}
	
}
