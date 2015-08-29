#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char ch,str[100],u[100],d[100],tmp[10];
	int i=0,j,k,l,s;
	while((ch=getchar()) != '\n')d[i++]=ch;
	i=0;
	while((ch=getchar()) != '\n')u[i++]=ch;
	while(gets(str))
	{
		if(feof(stdin))break;
		s = 0;
		l = strlen(str);
		for(i = 0; i < l; i+=5)
		{
			for(j = i; j < i+5; j++)tmp[j-i]=str[j];
			k = (int)strtol(tmp,NULL,2);
			if(k==27)s=0;
			else if(k==31)s=1;
			else if(s==0)putchar(d[k]);
			else if(s==1)putchar(u[k]);
		}
		putchar('\n');
	}
}
