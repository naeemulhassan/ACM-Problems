#include<iostream.h>
#include<string.h>

void main()
{
	char str1[21],ch;

	char arr[35][2] = {'A','A','B','-','C','-','D','-','E','3','F','-','G','-','H','H','I','I','J','L','K','-','L','J','M','M','N','-','O','O','P','-','Q','-','R','-','S','2','T','T','U','U','V','V','W','W','X','X','Y','Y','Z','5','1','1','2','S','3','E','4','-','5','Z','6','-','7','-','8','8','9','-'};

	int start,end,length,p,x,m,v;
	while(cin>>str1)
	{
		length = strlen(str1);
		start = 0;
		end = length - 1;
		p = 1;
		m = 1;
		for(x = 0; x < length; x++,start++,end--)
		{
			if(str1[start] != str1[end])p = 0;
			ch = str1[start];
			if(ch >= 'A')v = ch - 65;
			else v = ch - 23;
			if(str1[end] != arr[v][1])m = 0;
		}
		if(p == 1 && m == 1)cout<<str1<<" -- is a mirrored palindrome.";
		else if(p == 1 && m == 0)cout<<str1<<" -- is a regular palindrome.";
		else if(p == 0 && m == 1)cout<<str1<<" -- is a mirrored string.";
		else if(p == 0 && m == 0)cout<<str1<<" -- is not a palindrome.";
		cout<<endl<<endl;
	}
}