#include<iostream>
#include<string>
#include<cstdio>
 
using namespace std;

main()
{
	char a[30],b[30];
	int x,y,z,la,lb,suma,sumb;
	float ans;
	do
	{
		gets(a);
		if(feof(stdin))break;
		gets(b);
		la = strlen(a);
		lb = strlen(b);
		suma = 0;
		for(x = 0; x < la; x++)
		{
			if(a[x] >= 'a' && a[x] <= 'z')suma = suma + a[x] - 96;
			else if(a[x] >= 'A' && a[x] <= 'Z')suma = suma + a[x] - 64;
		}
		sumb = 0;
		for(x = 0; x < lb; x++)
		{
			if(b[x] >= 'a' && b[x] <= 'z')sumb = sumb + b[x] - 96;
			else if(b[x] >= 'A' && b[x] <= 'Z')sumb = sumb + b[x] - 64;
		}
		suma = suma%9;
		if(suma == 0)suma = 9;
		sumb = sumb%9;
		if(sumb == 0)sumb = 9;
		if(suma<=sumb)ans = (float(suma)/float(sumb))*100.0;
		else ans = (float(sumb)/float(suma))*100.0;
		printf("%.2f \%\n",ans);
	}while(1);
}
