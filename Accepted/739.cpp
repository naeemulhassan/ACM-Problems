#include<iostream>
#include<string.h>
 
using namespace std;
int arr[100];
main()
{
	char str[25],ch;
	int x,y,num,l;
	/*freopen("input","r",stdin);	
	freopen("output","w",stdout);*/
	arr[66] = 1;
	arr[80] = 1;
	arr[70] = 1;
	arr[86] = 1;
	arr[67] = 2;
	arr[83] = 2;
	arr[75] = 2;
	arr[71] = 2;
	arr[74] = 2;
	arr[81] = 2;
	arr[88] = 2;
	arr[90] = 2;
	arr[68] = 3;
	arr[84] = 3;
	arr[76] = 4;
	arr[77] = 5;
	arr[78] = 5;
	arr[82] = 6;
	printf("         %s                     %s%c","NAME","SOUNDEX CODE",10);
	while(cin>>str)
	{
		l = strlen(str);
		printf("         %s",str);
		for(x = 0; x < 25-l; x++)cout<<" ";
		cout<<str[0];
		num = arr[str[0]];
		y = 0;
		for(x = 1; x <l && y < 3; x++)
		{
			if(str[x] == 'A' || str[x] == 'E' || str[x] == 'I' || str[x] == 'O' || str[x] == 'U' || str[x] == 'Y' || str[x] == 'W' || str[x] == 'H')
			{
				num = 0;
			}
			else
			{
				if(arr[str[x]] == num);
				else
				{
					cout<<arr[str[x]];
					num = arr[str[x]];
					y++;
				}
			}
		}
		if(y < 3)while(y++ != 3)cout<<"0";
		cout<<endl;
	}
	printf("                   %s","END OF OUTPUT\n");
}
