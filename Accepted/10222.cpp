#include<iostream>
#include<cctype>
 
using namespace std;
char letter[256];
 
main()
{
	char ch,str[2000];
	int x = 0,y;
	letter['e'] ='q';
	letter['r'] ='w';
	letter['t'] ='e';
	letter['y'] ='r';
	letter['u'] ='t';
	letter['i'] ='y';
	letter['o'] ='u';
	letter['p'] ='i';
	letter['['] ='o';
	letter[']'] ='p';
	letter['d'] ='a';
	letter['f'] ='s';
	letter['g'] ='d';
	letter['h'] ='f';
	letter['j'] ='g';
	letter['k'] ='h';
	letter['l'] ='j';
	letter[';'] ='k';
	letter['\''] ='l';
	letter['c'] ='z';
	letter['v'] ='x';
	letter['b'] ='c';
	letter['n'] ='v';
	letter['m'] ='b';
	letter[','] ='n';
	letter['.'] ='m';
	letter[' '] =' ';
	while((ch = getchar()) != '\n')str[x++] = ch;
	for(y = 0; y < x; y++)putchar(letter[tolower(str[y])]);
	printf("\n");
}
