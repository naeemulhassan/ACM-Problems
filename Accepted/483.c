#include<stdio.h>
#include<ctype.h>

char stack[100];
int stack_top = 0;

void push(char c)
{
	stack[stack_top++] = c;
}

char pop()
{
	return stack[--stack_top];
}

int isempty()
{
	if(stack_top == 0)return 1;
	return 0;
}

int main()
{
	char c,d;
	
	while((c = getchar()) != EOF )
	{
		if(!isspace(c))push(c);
		else
		{
			while(!isempty())putchar(pop());
			putchar(c);
		}		
	}
	return 1;
}