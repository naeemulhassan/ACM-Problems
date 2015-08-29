#include<iostream>
#include<cstring>
 
using namespace std;

main()
{
	
	int n,x,y,z,l;
	char str1[100],str2[100],s4[100],s3[100],s2[100],s5[100],c;
	cin>>z;
	cin.clear();
	while(cin.get() != '\n');
	while(z--)
	{
		gets(str1);
		gets(str2);
		
		l = strlen(str1);
		for(x = 0; str1[x] != '<'; x++)cout<<str1[x];
		for(x = x+1,y = 0; str1[x] != '>';x++,y++)
		{
			cout<<str1[x];
			s2[y] = str1[x];
		}
		s2[y] = '\0';
		for(x = x+1,y = 0; str1[x] != '<';x++,y++)
		{
			cout<<str1[x];
			s3[y] = str1[x];
		}
		s3[y] = '\0';
		for(x = x+1,y = 0; str1[x] != '>';x++,y++)
		{
			cout<<str1[x];
			s4[y] = str1[x];
		}
		s4[y] = '\0';
		for(x = x+1,y = 0; x < l;x++,y++)
		{
			cout<<str1[x];
			s5[y] = str1[x];
		}
		s5[y] = '\0';
		cout<<endl;
		for(x = 0; str2[x] != '.'; x++)cout<<str2[x];
		cout<<s4<<s3<<s2<<s5<<endl;
	}
}
