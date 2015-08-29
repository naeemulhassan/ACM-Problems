#include<stdio.h>
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	char ch;
	while((ch = getchar()) != EOF)
	{
		if(ch == '4')putchar('q');
		else if(ch == '5')putchar('j');
		else if(ch == '6')putchar('l');
		else if(ch == '7')putchar('m');
		else if(ch == '8')putchar('f');
		else if(ch == '9')putchar('p');
		else if(ch == '0')putchar('/');
		else if(ch == '-')putchar('[');
		else if(ch == '=')putchar(']');
		else if(ch == 'q')putchar('4');
		else if(ch == 'w')putchar('5');
		else if(ch == 'e')putchar('6');
		else if(ch == 'r')putchar('.');
		else if(ch == 't')putchar('o');
		else if(ch == 'y')putchar('r');
		else if(ch == 'u')putchar('s');
		else if(ch == 'i')putchar('u');
		else if(ch == 'o')putchar('y');
		else if(ch == 'p')putchar('b');
		else if(ch == '[')putchar(';');
		else if(ch == ']')putchar('=');
		else if(ch == 'a')putchar('7');
		else if(ch == 's')putchar('8');
		else if(ch == 'd')putchar('9');
		else if(ch == 'f')putchar('a');
		else if(ch == 'g')putchar('e');	
		else if(ch == 'j')putchar('t');
		else if(ch == 'k')putchar('d');
		else if(ch == 'l')putchar('c');
		else if(ch == ';')putchar('k');
		else if(ch == '\'')putchar('-');
		else if(ch == 'z')putchar('0');
		else if(ch == 'x')putchar('z');
		else if(ch == 'c')putchar('x');
		else if(ch == 'v')putchar(',');
		else if(ch == 'b')putchar('i');
		else if(ch == 'm')putchar('w');
		else if(ch == ',')putchar('v');
		else if(ch == '.')putchar('g');
		else if(ch == '/')putchar('\'');
		else if(ch == '$')putchar('Q');
		else if(ch == '%')putchar('J');
		else if(ch == '^')putchar('L');
		else if(ch == '&')putchar('M');
		else if(ch == '*')putchar('F');
		else if(ch == '(')putchar('P');
		else if(ch == ')')putchar('?');
		else if(ch == '_')putchar('{');
		else if(ch == '+')putchar('}');
		else if(ch == 'Q')putchar('$');
		else if(ch == 'W')putchar('%');
		else if(ch == 'E')putchar('^');
		else if(ch == 'R')putchar('>');
		else if(ch == 'T')putchar('O');
		else if(ch == 'Y')putchar('R');
		else if(ch == 'U')putchar('S');
		else if(ch == 'I')putchar('U');
		else if(ch == 'O')putchar('Y');
		else if(ch == 'P')putchar('B');
		else if(ch == '{')putchar(':');
		else if(ch == '}')putchar('+');
		else if(ch == 'A')putchar('&');
		else if(ch == 'S')putchar('*');
		else if(ch == 'D')putchar('(');
		else if(ch == 'F')putchar('A');
		else if(ch == 'G')putchar('E');	
		else if(ch == 'J')putchar('T');
		else if(ch == 'K')putchar('D');
		else if(ch == 'L')putchar('C');
		else if(ch == ':')putchar('K');
		else if(ch == '"')putchar('_');
		else if(ch == 'Z')putchar(')');
		else if(ch == 'X')putchar('Z');
		else if(ch == 'C')putchar('X');
		else if(ch == 'V')putchar('<');
		else if(ch == 'B')putchar('I');
		else if(ch == 'M')putchar('W');
		else if(ch == '<')putchar('V');
		else if(ch == '>')putchar('G');
		else if(ch == '?')putchar('"');
		else putchar(ch);				
	}
	return 0;
}
