#include<iostream>
#include<string>
#include<math.h>

using namespace std;

char s1[2000],s2[2000],s3[2000],s4[2000];
		
void itoa(long n,char *s)
{
	int l1 = int(ceil(log10(n + 1)));	
	for(int x = (l1 - 1); x >= 0; x--)
	{
		s[x] = (n % 10) + 48;
		n = n / 10;		
	}
	s[l1] = '\0';
}

void strrev(char *s)
{
	char t[2000];
	int y = 0;
	int x = strlen(s);
	while(x--)
	{
		t[y++] = s[x];
	}
	strcpy(s,t);
	s[y] = '\0';
}

main()
{
	long n,a,b;	
	int l1,l2,l3,l4,ans,rem,max,z,y,x;

	while(1)
	{
		cin>>n;
		if(n < 0)break;
		
		if(n%2)
		{
			a = n;
			b = (n + 1) / 2;
			itoa(a,s1);
			itoa(b,s2);
				
			
		}
		else
		{
			a = n / 2;
			b = n + 1;
			itoa(b,s1);
			itoa(a,s2);
		}
		
		l1 = strlen(s1);
		l2 = strlen(s2);

		strrev(s1);
		strrev(s2);

		s1[l1] = 48;
		s2[l2] = 48;
		s4[0] = '\0';
		z = 0;
		for(y = 0; y < l2; y++)
		{
			rem = 0;
			for(x = 0; x <= z; x++)s3[x] = 48;
			for(x = 0; x < l1; x++)
			{
				ans = ( (s1[x] - 48)*(s2[y] - 48) + rem)%10;
				rem = ( (s1[x] - 48)*(s2[y] - 48) + rem)/10;
				s3[x+z] = ans + 48;
			}
			if(rem)s3[x+z] = rem + 48;

			l3 = strlen(s3);
			l4 = strlen(s4);				

			if(l3 >= l4)
			{
				max = l3;
				s3[max] = 48;
				for(x = l4; x <= max; x++)s4[x] = 48;
				s3[max+1] = '\0';
				s4[max + 1] = '\0';
			}
			else
			{
				max = l4;
				s4[max] = 48;
				for(x = l3; x <= max; x++)s3[x] = 48;
				s3[max+1] = '\0';
				s4[max + 1] = '\0';
			}

			rem = 0;
			for(x = 0; x <= max; x++)
			{
				ans = ( s3[x] + s4[x] - 96 + rem)%10;
				rem = ( s3[x] + s4[x] - 96 + rem)/10;
				s4[x] = ans + 48;
			}
			if(s4[max] == 48)s4[max] = '\0';
			z++;
		}
		max = strlen(s4);
		for(x = max-1;s4[x] == 48 && x > 0; x--)s4[x] = '\0';
		strrev(s4);
		strcpy(s1,s4);
		strcpy(s2,"1");
		
		l1 = strlen(s1);
		l2 = strlen(s2);				

		strrev(s1);		
		strrev(s2);		

		if(l1 >= l2)
		{
			max = l1;
			s1[max] = 48;
			for(x = l2; x <= max; x++)s2[x] = 48;
			s1[max+1] = '\0';
			s2[max + 1] = '\0';
		}
		else
		{
			max = l2;
			s2[max] = 48;
			for(x = l1; x <= max; x++)s1[x] = 48;
			s1[max+1] = '\0';
			s2[max + 1] = '\0';
		}

		rem = 0;
		for(x = 0; x <= max; x++)
		{
			ans = ( s1[x] + s2[x] - 96 + rem)%10;
			rem = ( s1[x] + s2[x] - 96 + rem)/10;
			s2[x] = ans + 48;
		}
		if(s2[max] == 48)s2[max] = '\0';
		strrev(s2);
		cout<<s2<<endl;
		
	}	
}

